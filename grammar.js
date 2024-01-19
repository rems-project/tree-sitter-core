function separated_list(del, rule) {
    return optional(separated_nonempty_list(del, rule))
}

function separated_nonempty_list(del, rule) {
    return seq(rule, repeat(seq(del, rule)))
}

module.exports = grammar({
    name: 'core',

    extras: $ => [
        /\s/,
        /--.*\n/,
        /{-.*-}/,
    ],

    rules: {
        source_file: $ => repeat1($.declaration),

        declaration: $ => choice(
            $.def_declaration,
            //$.ifun_declaration,
            $.glob_declaration,
            //$.fun_declaration,
            $.proc_declaration,
            //$.builtin_declaration,
            $.def_aggregate_declaration
        ),

        def_aggregate_declaration: $ => seq (
            'def',
            choice('struct','union'),
            $.sym,
            ':=',
            $.def_fields
        ),

        int_const: $ => /[0-9_]+/,
        sym: $ => /[_A-Za-z][_A-Za-z0-9_]*/,

        def_fields: $ => repeat1 ($.def_field),

        def_field: $ => seq (
            $.sym, ':', $.core_ctype
        ),

        core_ctype: $ => seq( "'", $.ctype, "'"),

        ctype: $ => choice(
            "void",
            $.basic_type,
            seq($.ctype, '[', optional($.int_const), ']'),
            seq($.ctype, '(', optional($.params),')'),
            seq('const', prec(1, $.ctype_star)),
            $.ctype_star,
            seq('_Atomic', '(', $.ctype, ')'),
            // TODO: "__cerbty_"  handling
            seq('struct', $.sym),
            seq('union', $.sym),
        ),

        qualifier: $ => choice(
            "const",
            "volatile",
            "restrict"),
        
        ctype_star: $ => seq($.ctype, choice('*',"(*)"), optional($.qualifier)),

        params: $ => choice(
            separated_nonempty_list(",", $.ctype),
            seq(separated_nonempty_list(",", $.ctype), ",", "...")),
        
        integer_base_type: $ => choice(
            "ichar",
            "short",
            "int",
            "long",
            "long_long"),

        integer_type: $ => choice(
            "char",
            "_Bool",
            "int8_t",
            "int16_t",
            "int32_t",
            "int64_t",
            "uint8_t",
            "uint16_t",
            "uint32_t",
            "uint64_t",
            "intmax_t",
            "intptr_t",
            "uintmax_t",
            "uintptr_t",
            seq("signed", $.integer_base_type),
            seq("unsigned", $.integer_base_type),
            "size_t",
            "ptrdiff_t",
            "ptraddr_t", (* CHERI-specific *)
        ),

        floating_type: $ => choice(
            "float",
            "double",
            "long_double"),

        basic_type: $ => choice(
            $.integer_type,
            $.floating_type),

        glob_ctype_attribute: $ => seq(
            "[",
            "ail_ctype",
            "=",
            $.core_ctype,
            "]"),

        glob_declaration: $ => seq(
            "glob",
            $.sym,
            ":",
            $.core_type,
            $.glob_ctype_attribute,
            ":=",
            $.expr),

        expr: $ => prec.left(1,choice(
            seq("(", $.expr, ")"),
            seq("pure", "(", $.pexpr, ")"),
            seq("memop", "(", $.memop_op, ",", separated_list(",", $.pexpr), ")"),
            seq("let", $.pattern, "=", $.pexpr, "in", $.expr),
            seq("if", $.pexpr, "then", $.expr, "else", $.expr),
            seq("case", $.pexpr, "of", repeat(seq("|", $.pattern, "=>", $.expr)), "end"),
            seq("pcall", "(", $.name, ")"),
            seq("pcall", "(", $.name, ",", separated_nonempty_list(",", $.pexpr),")"),
            seq("ccall", "(", $.core_ctype, ",", $.pexpr, ")"),
            seq("ccall", "(", $.core_ctype, ",", $.pexpr, ",", separated_nonempty_list(",",$.pexpr), ")"),
            $.paction,
            seq("unseq", "(", separated_list(",", $.expr), ")"),
            seq("let", "weak", $.pattern, "=", $.expr, "in", $.expr),
            seq($.expr, ";", $.expr),
            seq("let", "strong", $.pattern, "=", $.expr, "in", $.expr),
            seq("bound", "(", $.expr, ")"),
            seq("save", $.sym, ":", $.core_base_type, "(", separated_list(",", seq($.sym, ":", seq($.core_base_type, ":=", $.pexpr))), ")", "in", $.expr),
            seq("run", $.sym, "(", separated_list(",", $.pexpr), ")"),
            seq("nd", "(", separated_list(",", $.expr), ")"),
            seq("par", "(", separated_list(",", $.expr), ")"))),

        core_type: $ => choice(
            $.core_base_type,
            seq("eff", $.core_base_type)),

        pexpr: $=> prec.left(1,choice(
            seq("(", $.pexpr, ")"),
            seq("undef", "(", $.ub, ")"),
            seq("error", "(", $.string, ",", $.pexpr, ")"),
            $.value,
            $.sym,
            $.impl,
            seq("(", $.pexpr, ",", separated_nonempty_list(",", $.pexpr), ")"),
            $.list_pexpr,
            seq($.ctor, "(", separated_list(",", $.pexpr), ")"),
            seq("case", $.pexpr, "of", repeat(seq("|", $.pattern, "=>",$.pexpr)), "end"),
            seq("array_shift", "(", $.pexpr, ",", $.core_ctype, ",", $.pexpr, ")"),
            seq("member_shift", "(", $.pexpr, ",", $.sym, ",", ".", $.cabs_id, ")"),
            seq("not", "(", $.pexpr, ")"),
            seq("-", $.pexpr),
            seq("cfunction", "(", $.pexpr, ")"),
            seq($.pexpr, $.binary_operator, $.pexpr),
            seq("memop", "(", $.pure_memop_op, ",", separated_list(",", $.pexpr), ")"),
            seq("(", "struct", $.sym, ")", "{", separated_list (",", $.member), "}"),
            seq("(", "union", $.sym, ")", "{", $.member, "}"),
            seq($.name, "(", separated_list(",", $.pexpr), ")"),
            seq("let", $.pattern, "=", $.pexpr, "in", $.pexpr),
            seq("if", $.pexpr, "then", $.pexpr, "else", $.pexpr),
            seq("is_scalar", "(", $.pexpr, ")"),
            seq("is_integer", "(", $.pexpr, ")"),
            seq("is_signed","(", $.pexpr, ")"),
            seq("is_unsigned", "(", $.pexpr, ")"),
            seq("are_compatible", "(", $.pexpr, ",", $.pexpr, ")")
        )),

        list_pexpr: $ => prec.left(1,choice(
            seq("[]", ":", $.core_base_type),
            seq($.pexpr, "::", $.pexpr),
            seq("[", separated_list(",", $.pexpr) , "]", ":", $.core_base_type))),

        pure_memop_op: $ => choice(
            "DeriveCap",
            "CapAssignValue",
            "Ptr_tIntValue"),

        memop_op: $ => choice(
            "PtrEq",
            "PtrNe",
            "PtrLt",
            "PtrGt",
            "PtrLe",
            "PtrGe",
            "Ptrdiff",
            "IntFromPtr",
            "PtrFromInt",
            "PtrValidForDeref",
            "PtrWellAligned",
            seq("PtrArrayShift",optional(seq('[', $.sym, ",", $.sym, "]"))),
            "PtrMemberShift"
        ),

        pattern: $ => choice(
            seq($.sym, ":", $.core_base_type),
            seq("_", ":", $.core_base_type),
            $.list_pattern,
            seq("(", $.pattern, ",", separated_nonempty_list(",", $.pattern), ")"),
            seq($.ctor, "(", separated_list(",", $.pattern), ")")
        ),

        list_pattern: $ => prec.left(1,choice(
            seq("[]", ":", $.core_base_type),
            seq($.pattern, "::", $.pattern),
            seq("[", separated_list(",", $.pattern) , "]", ":", $.core_base_type))),
    
        name: $ => choice(
            $.sym,
            $.impl),

        core_base_type: $ => choice(
            "unit",
            "boolean",
            "ctype",
            seq("[", $.core_base_type, "]"),
            seq("(", separated_list(",", $.core_base_type), ")"),
            $.core_object_type,
            seq("loaded", $.core_object_type),
            "storable"
        ),
        
        core_object_type: $ => choice(
            "integer",
            "floating",
            "pointer",
            /*
              | CFUNCTION LPAREN UNDERSCORE COMMA nparams= INT_CONST RPAREN
              | CFUNCTION LPAREN UNDERSCORE COMMA nparams= INT_CONST COMMA DOTS RPAREN
              | CFUNCTION LPAREN ret_oTy= core_object_type COMMA nparams= INT_CONST RPAREN
              | CFUNCTION LPAREN ret_oTy= core_object_type COMMA nparams= INT_CONST COMMA DOTS RPAREN
              | CFUNCTION LPAREN UNDERSCORE COMMA oTys= separated_list(COMMA, core_object_type) RPAREN
              | CFUNCTION LPAREN ret_oTy= core_object_type COMMA oTys= separated_list(COMMA, core_object_type) RPAREN
            */
            seq("array","(", $.core_object_type, ")"),
            seq("struct", $.sym),
            seq("union", $.sym)),

        memory_order: $ => choice(
            "seq_cst",
            "relaxed",
            "release",
            "acquire",
            "consume",
            "acq_rel"),
        
        action: $ => choice(
            seq("create_readonly", "(", $.pexpr, ",", $.pexpr, ",", $.pexpr, ")"),
            seq("create", "(", $.pexpr, ",", $.pexpr, ")"),
            seq("alloc", "(", $.pexpr, ",", $.pexpr, ")"),
            seq("free", "(", $.pexpr, ")"),
            seq("kill", "(", $.core_ctype, ",", $.pexpr, ")"),
            seq("store", "(", $.pexpr, ",", $.pexpr, ",", $.pexpr , ")"),
            seq("store_lock", "(", $.pexpr, ",",$.pexpr, ",", $.pexpr, ")"),
            seq("load", "(", $.pexpr, ",", $.pexpr, ")"),
            seq("store", "(", $.pexpr, ",", $.pexpr, ",", $.pexpr, ",", $.memory_order , ")"),
            seq("store_lock", "(", $.pexpr, ",", $.pexpr, ",", $.pexpr, ",", $.memory_order , ")"),
            seq("load", "(", $.pexpr, ",", $.pexpr, ",", $.memory_order , ")"),
            seq("seq_rmw", "(", $.pexpr, ",", $.pexpr, ",", $.sym, "=>", $.pexpr /*",", $.memory_order*/ , ")"),
            seq("seq_rmw_with_forward", "(", $.pexpr, ",", $.pexpr, ",", $.sym, "=>", $.pexpr /*",", $.memory_order*/ , ")"),
            seq("rmw", "(", $.pexpr, ",", $.pexpr, ",", $.pexpr, ",", $.pexpr, ",", $.memory_order, ",", $.memory_order , ")"),
            seq("fence", "(", $.memory_order, ")")
            /*
              | COMPARE_EXCHANGE_STRONG "(", $.pexpr, ",", $.pexpr, ",", $.pexpr ",", _pe4= pexpr ",", mo1= memory_order ",", mo2= memory_order , ")"
            */
        ),
        
        paction: $ => choice(
            $.action,
            seq("neg", "(", $.action, ")")
        ),

        ub: $ => /<<(([A-Za-z_0-9]*)|(DUMMY\([A-Za-z_ .:-=<>0-9()]*\)))>>/,

        string: $ => /"[^\"]*"/,
        cstring: $ => /"[^\"]*"/,

        ctor: $ => choice(
            "Array",       
            "Ivmax",       
            "Ivmin",       
            "Ivsizeof",    
            "Ivalignof",   
            "Specified",   
            "Unspecified", 
            "Fvfromint",   
            "Ivfromfloat", 
            "IvCOMPL",     
            "IvAND",       
            "IvOR",
            "IvXOR"),

        cabs_id: $ => $.sym,

        binary_operator: $ => choice(
            '+',   
            '-',   
            '*',   
            '/',   
            "rem_t", 
            "rem_f", 
            '^',   
            '=',   
            '>',   
            '<',   
            ">=",  
            "<=",  
            "/\\", 
            "\\/"),

        member: $ => seq(".", $.cabs_id, "=", $.pexpr),

        value: $ => choice(
            // TODO:
            //  | Vconstrained of list (list Mem.mem_constraint * value)
            //  | Vobject of object_value
            //  | Vloaded of object_value
            //  | Vunspecified of ctype
            $.int_const,
            "IvMaxAlignment",
            seq("NULL", "(", $.ctype, ")"),
            seq("Cfunction","(", $.name, ")"),
            //{ (*TODO*) Vobject (OVpointer (Impl_mem.null_ptrval Ctype.void)) }
            "Unit",
            "True",
            "False",
            $.core_ctype),

        impl: $ => choice(
            "Environment.startup_name",
            "Environment.startup_type",
            "Characters.bits_in_byte",
            "Characters.execution_character_set_values",
            /Characters.TODO[0-9]*/,
            "Characters.plain_char_is_signed",
            "Integer.encode",
            "Integer.decode",
            "Integer.conv_nonrepresentable_signed_integer",
            "sizeof",
            "alignof",
            "SHR_signed_negative",
            "Bitwise_complement",
            "Plain_bitfield_sign",
            "Bitfield_other_types",
            "Atomic_bitfield_permitted",
            "ctype_min",
            "ctype_max",
            /builtin_[A-Za-z][_A-Za-z0-9_]*/
        ),

        attribute: $ => seq("[", separated_list(",", $.attribute_pair), "]"),

        attribute_pair: $ =>  seq("ailname", "=", $.cstring),
        
        proc_declaration: $ => seq(
            seq("proc", optional($.attribute), $.sym, "(", separated_list(",", seq($.sym), ":", $.core_base_type), ")"),
            seq(":", "eff", $.core_base_type),
            seq(":=", $.expr)),

        def_declaration: $ => seq("def", $.impl, ":", $.core_base_type, ":=", $.pexpr),

    }
});

