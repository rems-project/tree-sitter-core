module.exports = grammar({
    name: 'core',

    rules: {
        source_file: $ => repeat1($.declaration),

        declaration: $ => choice(
            //$.def_declaration,
            //$.ifun_declaration,
            //$.glob_declaration,
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
            $.floating_type)


    },

    extras: $ => [
        /\s/,
        /--.*\n/,
        /{-.*-}/,
    ],

});

