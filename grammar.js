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
            //$.def_declaration,
            //$.ifun_declaration,
            $.glob_declaration,
            //$.fun_declaration,
            //$.proc_declaration,
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
        sym: $ => /[_A-Za-z][_A-Za-z0-9_]+/,

        def_fields: $ => repeat1 ($.def_field),

        def_field: $ => seq (
            $.sym, ':', $.core_ctype
        ),

        core_ctype: $ => seq( "'", $.ctype, "'"),

        ctype: $ => choice(
            "void",
            $.basic_type,
            seq($.ctype, '[', optional($.int_const), ']'),
            seq($.ctype, '(', $.params,')'),
            seq('const', prec(1, $.ctype_star)),
            $.ctype_star,
            seq('_Atomic', '(', $.ctype, ')'),
            // TODO: "__cerbty_"  handling
            seq('struct', $.sym),
            seq('union', $.sym),
        ),

        ctype_star: $ => seq($.ctype, '*'),

        //TODO: check how it works on empty
        params: $=> seq(
            $.ctype,
            repeat(seq(',',$.ctype))
        ),

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
            "ptrdiff_t"
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

        expr: $ => choice(
            seq("(", $.expr, ")"),
            seq("pure", "(", $.pexpr,")"),
            seq("memop", "(", $.memop_op, ",", separated_list(",", $.pexpr), ")"),
            seq("let", $.pattern, "=", $.pexpr, "in", $.expr),
            seq("if", $.pexpr, "then", $.expr, "else", $.expr),
            seq("case", $.pexpr, "of", repeat($.pattern_pair($.expr)), "end"),
            seq("pcall", "(", $.name, ")"),
            seq("pcall", "(", $.name, ",", separated_nonempty_list(",", $.pexpr),")"),
            seq("ccal", "(", $.pexpr, ",", $.pexpr, ")"),
            seq("ccal", "(", $.pexpr, ",", $.pexpr, ",", separated_nonempty_list(",",$.pexpr), ")"),
            $.paction,
            seq("unseq", "(", separated_list(",", $.expr), ")"),
            seq("let", "weak", $.pattern, "=", $.expr, "in", $.expr),
            seq($.expr, ";", $.expr),
            seq("let", "strong", $.pattern, "=", $.expr, "in", $.expr),
            seq("bound", "(", $.expr, ")"),
            seq("save", $.sym, ":", $.core_base_type),
            seq("run", $.sym, "(", separated_list(",", $.pexpr), ")"),
            seq("nd", "(", separated_list(",", $.expr), ")"),
            seq("par", "(", separated_list(",", $.expr), ")")),

        core_type: $ => choice(
            $.core_base_type,
            seq("eff", $.core_base_type)),

        pexpr: $=> choice(
            seq("(", pexpr, ")"),
            seq("undef", "(", $.ub, ")"),
            seq("error", "(", $.string, ",", $.pexpr, ")"),
            $.value,
            $.sym,
            $.impl,
            seq("(", $.pexpr, ",", separated_nonempty_list(",", $,pexpr), ")"),
            $.list_pexpr,
            seq($.ctor, "(", separated_list(",", $.pexpr), ")"),
            seq("case", $.pexpr, "of", repeat($.pattern_pair($.pexpr)), "end"),
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
        )

    }
});

