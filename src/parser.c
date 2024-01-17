#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_def = 1,
  anon_sym_struct = 2,
  anon_sym_union = 3,
  anon_sym_COLON_EQ = 4,
  sym_int_const = 5,
  sym_sym = 6,
  anon_sym_COLON = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_void = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_const = 14,
  anon_sym__Atomic = 15,
  anon_sym_STAR = 16,
  anon_sym_COMMA = 17,
  anon_sym_ichar = 18,
  anon_sym_short = 19,
  anon_sym_int = 20,
  anon_sym_long = 21,
  anon_sym_long_long = 22,
  anon_sym_char = 23,
  anon_sym__Bool = 24,
  anon_sym_int8_t = 25,
  anon_sym_int16_t = 26,
  anon_sym_int32_t = 27,
  anon_sym_int64_t = 28,
  anon_sym_uint8_t = 29,
  anon_sym_uint16_t = 30,
  anon_sym_uint32_t = 31,
  anon_sym_uint64_t = 32,
  anon_sym_intmax_t = 33,
  anon_sym_intptr_t = 34,
  anon_sym_uintmax_t = 35,
  anon_sym_uintptr_t = 36,
  anon_sym_signed = 37,
  anon_sym_unsigned = 38,
  anon_sym_size_t = 39,
  anon_sym_ptrdiff_t = 40,
  anon_sym_float = 41,
  anon_sym_double = 42,
  anon_sym_long_double = 43,
  sym_source_file = 44,
  sym_declaration = 45,
  sym_def_aggregate_declaration = 46,
  sym_def_fields = 47,
  sym_def_field = 48,
  sym_core_ctype = 49,
  sym_ctype = 50,
  sym_ctype_star = 51,
  sym_params = 52,
  sym_integer_base_type = 53,
  sym_integer_type = 54,
  sym_floating_type = 55,
  sym_basic_type = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_def_fields_repeat1 = 58,
  aux_sym_params_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_COLON_EQ] = ":=",
  [sym_int_const] = "int_const",
  [sym_sym] = "sym",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym__Atomic] = "_Atomic",
  [anon_sym_STAR] = "*",
  [anon_sym_COMMA] = ",",
  [anon_sym_ichar] = "ichar",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_long_long] = "long_long",
  [anon_sym_char] = "char",
  [anon_sym__Bool] = "_Bool",
  [anon_sym_int8_t] = "int8_t",
  [anon_sym_int16_t] = "int16_t",
  [anon_sym_int32_t] = "int32_t",
  [anon_sym_int64_t] = "int64_t",
  [anon_sym_uint8_t] = "uint8_t",
  [anon_sym_uint16_t] = "uint16_t",
  [anon_sym_uint32_t] = "uint32_t",
  [anon_sym_uint64_t] = "uint64_t",
  [anon_sym_intmax_t] = "intmax_t",
  [anon_sym_intptr_t] = "intptr_t",
  [anon_sym_uintmax_t] = "uintmax_t",
  [anon_sym_uintptr_t] = "uintptr_t",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_size_t] = "size_t",
  [anon_sym_ptrdiff_t] = "ptrdiff_t",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_long_double] = "long_double",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_def_aggregate_declaration] = "def_aggregate_declaration",
  [sym_def_fields] = "def_fields",
  [sym_def_field] = "def_field",
  [sym_core_ctype] = "core_ctype",
  [sym_ctype] = "ctype",
  [sym_ctype_star] = "ctype_star",
  [sym_params] = "params",
  [sym_integer_base_type] = "integer_base_type",
  [sym_integer_type] = "integer_type",
  [sym_floating_type] = "floating_type",
  [sym_basic_type] = "basic_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_def_fields_repeat1] = "def_fields_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_int_const] = sym_int_const,
  [sym_sym] = sym_sym,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym__Atomic] = anon_sym__Atomic,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ichar] = anon_sym_ichar,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_long_long] = anon_sym_long_long,
  [anon_sym_char] = anon_sym_char,
  [anon_sym__Bool] = anon_sym__Bool,
  [anon_sym_int8_t] = anon_sym_int8_t,
  [anon_sym_int16_t] = anon_sym_int16_t,
  [anon_sym_int32_t] = anon_sym_int32_t,
  [anon_sym_int64_t] = anon_sym_int64_t,
  [anon_sym_uint8_t] = anon_sym_uint8_t,
  [anon_sym_uint16_t] = anon_sym_uint16_t,
  [anon_sym_uint32_t] = anon_sym_uint32_t,
  [anon_sym_uint64_t] = anon_sym_uint64_t,
  [anon_sym_intmax_t] = anon_sym_intmax_t,
  [anon_sym_intptr_t] = anon_sym_intptr_t,
  [anon_sym_uintmax_t] = anon_sym_uintmax_t,
  [anon_sym_uintptr_t] = anon_sym_uintptr_t,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_size_t] = anon_sym_size_t,
  [anon_sym_ptrdiff_t] = anon_sym_ptrdiff_t,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_long_double] = anon_sym_long_double,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_def_aggregate_declaration] = sym_def_aggregate_declaration,
  [sym_def_fields] = sym_def_fields,
  [sym_def_field] = sym_def_field,
  [sym_core_ctype] = sym_core_ctype,
  [sym_ctype] = sym_ctype,
  [sym_ctype_star] = sym_ctype_star,
  [sym_params] = sym_params,
  [sym_integer_base_type] = sym_integer_base_type,
  [sym_integer_type] = sym_integer_type,
  [sym_floating_type] = sym_floating_type,
  [sym_basic_type] = sym_basic_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_def_fields_repeat1] = aux_sym_def_fields_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_int_const] = {
    .visible = true,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__Atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ichar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intmax_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intptr_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintmax_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintptr_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptrdiff_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long_double] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_aggregate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_def_field] = {
    .visible = true,
    .named = true,
  },
  [sym_core_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype_star] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 6,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 10,
  [14] = 10,
  [15] = 10,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 17,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 28,
  [39] = 37,
  [40] = 24,
  [41] = 36,
  [42] = 42,
  [43] = 37,
  [44] = 31,
  [45] = 37,
  [46] = 30,
  [47] = 29,
  [48] = 35,
  [49] = 21,
  [50] = 35,
  [51] = 27,
  [52] = 52,
  [53] = 26,
  [54] = 36,
  [55] = 25,
  [56] = 24,
  [57] = 25,
  [58] = 26,
  [59] = 27,
  [60] = 28,
  [61] = 21,
  [62] = 29,
  [63] = 30,
  [64] = 31,
  [65] = 35,
  [66] = 66,
  [67] = 67,
  [68] = 31,
  [69] = 30,
  [70] = 29,
  [71] = 21,
  [72] = 28,
  [73] = 27,
  [74] = 26,
  [75] = 25,
  [76] = 24,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 67,
  [81] = 67,
  [82] = 67,
  [83] = 36,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 88,
  [91] = 88,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 95,
  [98] = 94,
  [99] = 93,
  [100] = 95,
  [101] = 93,
  [102] = 94,
  [103] = 94,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 95,
  [108] = 108,
  [109] = 92,
  [110] = 92,
  [111] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(687);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(670)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead == 'v') ADVANCE(600);
      if (lookahead == '{') SKIP(671)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(12)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(269)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(262);
      if (lookahead == '{') SKIP(267)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) SKIP(267)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'h') ADVANCE(765);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'l') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 'o') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead == '}') SKIP(1)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(247)
      if (lookahead == '-') SKIP(12)
      if (lookahead != 0) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(247)
      if (lookahead != 0) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(19)
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '{') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(19)
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(19)
      if (lookahead == 'f') ADVANCE(688);
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(19)
      if (lookahead == '}') SKIP(16)
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(19)
      if (lookahead != 0) SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(485)
      if (lookahead == '-') SKIP(272)
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == '{') SKIP(277)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) SKIP(277)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(485)
      if (lookahead != 0) SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '8') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '2') ADVANCE(37);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '2') ADVANCE(43);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '4') ADVANCE(38);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '4') ADVANCE(44);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '6') ADVANCE(36);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '6') ADVANCE(42);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 31:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(98);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(92);
      if (lookahead == '{') SKIP(135)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 33:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(60);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(108);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(109);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(111);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(112);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(113);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(114);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(115);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(116);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(117);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 43:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(118);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 44:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(119);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(120);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 46:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(121);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 47:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '_') ADVANCE(122);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 48:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 54:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'c') ADVANCE(818);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 55:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 56:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'd') ADVANCE(810);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 57:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 58:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'd') ADVANCE(864);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 59:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 60:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'e') ADVANCE(874);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 67:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 68:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 69:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'z') ADVANCE(65);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 70:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 71:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 72:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 73:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 74:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 75:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 76:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 77:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 78:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 79:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 80:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 81:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 82:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 83:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 84:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 85:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 86:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 87:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 88:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 89:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 90:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 91:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 92:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 93:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 94:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 95:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 96:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 97:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 98:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 99:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 100:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'r') ADVANCE(834);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 101:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 102:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 103:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 104:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 105:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 's') ADVANCE(106);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 106:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(816);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 107:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(870);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 108:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(838);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 109:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(866);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 110:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 111:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(840);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 112:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(842);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 113:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(844);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 114:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(846);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 115:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(854);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 116:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(856);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 117:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(848);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 118:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(850);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 119:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(852);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 120:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(868);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 121:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(858);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 122:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(860);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 123:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 124:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(23);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 125:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(103);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 126:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 127:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(24);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 128:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 129:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 130:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 131:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 132:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 133:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 134:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead == '}') SKIP(32)
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 135:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(134)
      if (lookahead != 0) SKIP(135)
      END_STATE();
    case 136:
      if (lookahead == '\n') SKIP(487)
      if (lookahead == '-') SKIP(278)
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'd') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(336);
      if (lookahead == 'v') ADVANCE(350);
      if (lookahead == '{') SKIP(393)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (lookahead != 0) SKIP(393)
      END_STATE();
    case 137:
      if (lookahead == '\n') SKIP(487)
      if (lookahead != 0) SKIP(137)
      END_STATE();
    case 138:
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(140)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(141)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (lookahead != 0) SKIP(141)
      END_STATE();
    case 139:
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(280)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(399)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (lookahead != 0) SKIP(399)
      END_STATE();
    case 140:
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '-') SKIP(140)
      if (lookahead == '}') SKIP(138)
      if (lookahead != 0) SKIP(141)
      END_STATE();
    case 141:
      if (lookahead == '\n') SKIP(250)
      if (lookahead == '-') SKIP(140)
      if (lookahead != 0) SKIP(141)
      END_STATE();
    case 142:
      if (lookahead == '\n') SKIP(250)
      if (lookahead != 0) SKIP(142)
      END_STATE();
    case 143:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 144:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 145:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'g') ADVANCE(832);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 146:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'g') ADVANCE(829);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 147:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 148:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 149:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '{') SKIP(161)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 150:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 151:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 152:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 153:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 154:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 155:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 156:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 157:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 158:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 't') ADVANCE(826);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 159:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == 't') ADVANCE(824);
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 160:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead == '}') SKIP(149)
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 161:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(160)
      if (lookahead != 0) SKIP(161)
      END_STATE();
    case 162:
      if (lookahead == '\n') SKIP(490)
      if (lookahead == '-') SKIP(394)
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == 'l') ADVANCE(414);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '{') SKIP(421)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (lookahead != 0) SKIP(421)
      END_STATE();
    case 163:
      if (lookahead == '\n') SKIP(490)
      if (lookahead != 0) SKIP(163)
      END_STATE();
    case 164:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(166)
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == '{') SKIP(168)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) SKIP(168)
      END_STATE();
    case 165:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(166)
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(168)
      END_STATE();
    case 166:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(166)
      if (lookahead == '}') SKIP(164)
      if (lookahead != 0) SKIP(168)
      END_STATE();
    case 167:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(168)
      END_STATE();
    case 168:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(166)
      if (lookahead != 0) SKIP(168)
      END_STATE();
    case 169:
      if (lookahead == '\n') SKIP(492)
      if (lookahead == '-') SKIP(396)
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == '{') SKIP(429)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(169)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0) SKIP(429)
      END_STATE();
    case 170:
      if (lookahead == '\n') SKIP(492)
      if (lookahead != 0) SKIP(170)
      END_STATE();
    case 171:
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(173)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(174)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (lookahead != 0) SKIP(174)
      END_STATE();
    case 172:
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(400)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(435)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      if (lookahead != 0) SKIP(435)
      END_STATE();
    case 173:
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '-') SKIP(173)
      if (lookahead == '}') SKIP(171)
      if (lookahead != 0) SKIP(174)
      END_STATE();
    case 174:
      if (lookahead == '\n') SKIP(251)
      if (lookahead == '-') SKIP(173)
      if (lookahead != 0) SKIP(174)
      END_STATE();
    case 175:
      if (lookahead == '\n') SKIP(251)
      if (lookahead != 0) SKIP(175)
      END_STATE();
    case 176:
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(178)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(179)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(176)
      if (lookahead != 0) SKIP(179)
      END_STATE();
    case 177:
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(402)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(441)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead != 0) SKIP(441)
      END_STATE();
    case 178:
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '-') SKIP(178)
      if (lookahead == '}') SKIP(176)
      if (lookahead != 0) SKIP(179)
      END_STATE();
    case 179:
      if (lookahead == '\n') SKIP(248)
      if (lookahead == '-') SKIP(178)
      if (lookahead != 0) SKIP(179)
      END_STATE();
    case 180:
      if (lookahead == '\n') SKIP(248)
      if (lookahead != 0) SKIP(180)
      END_STATE();
    case 181:
      if (lookahead == '\n') SKIP(496)
      if (lookahead == '-') SKIP(182)
      if (lookahead == '{') SKIP(184)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0) SKIP(184)
      END_STATE();
    case 182:
      if (lookahead == '\n') SKIP(496)
      if (lookahead == '-') SKIP(182)
      if (lookahead == '}') SKIP(181)
      if (lookahead != 0) SKIP(184)
      END_STATE();
    case 183:
      if (lookahead == '\n') SKIP(496)
      if (lookahead == '-') SKIP(182)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0) SKIP(184)
      END_STATE();
    case 184:
      if (lookahead == '\n') SKIP(496)
      if (lookahead == '-') SKIP(182)
      if (lookahead != 0) SKIP(184)
      END_STATE();
    case 185:
      if (lookahead == '\n') SKIP(496)
      if (lookahead == '-') SKIP(422)
      if (lookahead == '{') SKIP(448)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      if (lookahead != 0) SKIP(448)
      END_STATE();
    case 186:
      if (lookahead == '\n') SKIP(496)
      if (lookahead != 0) SKIP(186)
      END_STATE();
    case 187:
      if (lookahead == '\n') SKIP(252)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(189)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(190)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (lookahead != 0) SKIP(190)
      END_STATE();
    case 188:
      if (lookahead == '\n') SKIP(252)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(424)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(454)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (lookahead != 0) SKIP(454)
      END_STATE();
    case 189:
      if (lookahead == '\n') SKIP(252)
      if (lookahead == '-') SKIP(189)
      if (lookahead == '}') SKIP(187)
      if (lookahead != 0) SKIP(190)
      END_STATE();
    case 190:
      if (lookahead == '\n') SKIP(252)
      if (lookahead == '-') SKIP(189)
      if (lookahead != 0) SKIP(190)
      END_STATE();
    case 191:
      if (lookahead == '\n') SKIP(252)
      if (lookahead != 0) SKIP(191)
      END_STATE();
    case 192:
      if (lookahead == '\n') SKIP(254)
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(194)
      if (lookahead == '{') SKIP(195)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (lookahead != 0) SKIP(195)
      END_STATE();
    case 193:
      if (lookahead == '\n') SKIP(254)
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(430)
      if (lookahead == '{') SKIP(458)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (lookahead != 0) SKIP(458)
      END_STATE();
    case 194:
      if (lookahead == '\n') SKIP(254)
      if (lookahead == '-') SKIP(194)
      if (lookahead == '}') SKIP(192)
      if (lookahead != 0) SKIP(195)
      END_STATE();
    case 195:
      if (lookahead == '\n') SKIP(254)
      if (lookahead == '-') SKIP(194)
      if (lookahead != 0) SKIP(195)
      END_STATE();
    case 196:
      if (lookahead == '\n') SKIP(254)
      if (lookahead != 0) SKIP(196)
      END_STATE();
    case 197:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 198:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 199:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 200:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 201:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 202:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 203:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == '{') SKIP(208)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(203)
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 204:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 205:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 206:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == 'u') ADVANCE(197);
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 207:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead == '}') SKIP(203)
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 208:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(207)
      if (lookahead != 0) SKIP(208)
      END_STATE();
    case 209:
      if (lookahead == '\n') SKIP(500)
      if (lookahead == '-') SKIP(432)
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead == '{') SKIP(469)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(209)
      if (lookahead != 0) SKIP(469)
      END_STATE();
    case 210:
      if (lookahead == '\n') SKIP(500)
      if (lookahead != 0) SKIP(210)
      END_STATE();
    case 211:
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '-') SKIP(213)
      if (lookahead == '{') SKIP(214)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (lookahead != 0) SKIP(214)
      END_STATE();
    case 212:
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '-') SKIP(436)
      if (lookahead == '{') SKIP(471)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (lookahead != 0) SKIP(471)
      END_STATE();
    case 213:
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '-') SKIP(213)
      if (lookahead == '}') SKIP(211)
      if (lookahead != 0) SKIP(214)
      END_STATE();
    case 214:
      if (lookahead == '\n') SKIP(249)
      if (lookahead == '-') SKIP(213)
      if (lookahead != 0) SKIP(214)
      END_STATE();
    case 215:
      if (lookahead == '\n') SKIP(249)
      if (lookahead != 0) SKIP(215)
      END_STATE();
    case 216:
      if (lookahead == '\n') SKIP(503)
      if (lookahead == '-') SKIP(217)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(218)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(696);
      if (lookahead != 0) SKIP(218)
      END_STATE();
    case 217:
      if (lookahead == '\n') SKIP(503)
      if (lookahead == '-') SKIP(217)
      if (lookahead == '}') SKIP(216)
      if (lookahead != 0) SKIP(218)
      END_STATE();
    case 218:
      if (lookahead == '\n') SKIP(503)
      if (lookahead == '-') SKIP(217)
      if (lookahead != 0) SKIP(218)
      END_STATE();
    case 219:
      if (lookahead == '\n') SKIP(503)
      if (lookahead == '-') SKIP(438)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(473)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(219)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(696);
      if (lookahead != 0) SKIP(473)
      END_STATE();
    case 220:
      if (lookahead == '\n') SKIP(503)
      if (lookahead != 0) SKIP(220)
      END_STATE();
    case 221:
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '-') SKIP(223)
      if (lookahead == '{') SKIP(224)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(221)
      if (lookahead != 0) SKIP(224)
      END_STATE();
    case 222:
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '-') SKIP(442)
      if (lookahead == '{') SKIP(475)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(222)
      if (lookahead != 0) SKIP(475)
      END_STATE();
    case 223:
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '-') SKIP(223)
      if (lookahead == '}') SKIP(221)
      if (lookahead != 0) SKIP(224)
      END_STATE();
    case 224:
      if (lookahead == '\n') SKIP(253)
      if (lookahead == '-') SKIP(223)
      if (lookahead != 0) SKIP(224)
      END_STATE();
    case 225:
      if (lookahead == '\n') SKIP(253)
      if (lookahead != 0) SKIP(225)
      END_STATE();
    case 226:
      if (lookahead == '\n') SKIP(506)
      if (lookahead == '-') SKIP(227)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(228)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(226)
      if (lookahead != 0) SKIP(228)
      END_STATE();
    case 227:
      if (lookahead == '\n') SKIP(506)
      if (lookahead == '-') SKIP(227)
      if (lookahead == '}') SKIP(226)
      if (lookahead != 0) SKIP(228)
      END_STATE();
    case 228:
      if (lookahead == '\n') SKIP(506)
      if (lookahead == '-') SKIP(227)
      if (lookahead != 0) SKIP(228)
      END_STATE();
    case 229:
      if (lookahead == '\n') SKIP(506)
      if (lookahead == '-') SKIP(444)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(477)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(229)
      if (lookahead != 0) SKIP(477)
      END_STATE();
    case 230:
      if (lookahead == '\n') SKIP(506)
      if (lookahead != 0) SKIP(230)
      END_STATE();
    case 231:
      if (lookahead == '\n') SKIP(255)
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '-') SKIP(233)
      if (lookahead == '{') SKIP(234)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      if (lookahead != 0) SKIP(234)
      END_STATE();
    case 232:
      if (lookahead == '\n') SKIP(255)
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '-') SKIP(449)
      if (lookahead == '{') SKIP(479)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (lookahead != 0) SKIP(479)
      END_STATE();
    case 233:
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '-') SKIP(233)
      if (lookahead == '}') SKIP(231)
      if (lookahead != 0) SKIP(234)
      END_STATE();
    case 234:
      if (lookahead == '\n') SKIP(255)
      if (lookahead == '-') SKIP(233)
      if (lookahead != 0) SKIP(234)
      END_STATE();
    case 235:
      if (lookahead == '\n') SKIP(255)
      if (lookahead != 0) SKIP(235)
      END_STATE();
    case 236:
      if (lookahead == '\n') SKIP(509)
      if (lookahead == '-') SKIP(237)
      if (lookahead == ':') ADVANCE(807);
      if (lookahead == '{') SKIP(238)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead != 0) SKIP(238)
      END_STATE();
    case 237:
      if (lookahead == '\n') SKIP(509)
      if (lookahead == '-') SKIP(237)
      if (lookahead == '}') SKIP(236)
      if (lookahead != 0) SKIP(238)
      END_STATE();
    case 238:
      if (lookahead == '\n') SKIP(509)
      if (lookahead == '-') SKIP(237)
      if (lookahead != 0) SKIP(238)
      END_STATE();
    case 239:
      if (lookahead == '\n') SKIP(509)
      if (lookahead == '-') SKIP(451)
      if (lookahead == ':') ADVANCE(807);
      if (lookahead == '{') SKIP(481)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (lookahead != 0) SKIP(481)
      END_STATE();
    case 240:
      if (lookahead == '\n') SKIP(509)
      if (lookahead != 0) SKIP(240)
      END_STATE();
    case 241:
      if (lookahead == '\n') SKIP(511)
      if (lookahead == '-') SKIP(243)
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == '{') SKIP(244)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (lookahead != 0) SKIP(244)
      END_STATE();
    case 242:
      if (lookahead == '\n') SKIP(511)
      if (lookahead == '-') SKIP(243)
      if (lookahead == '=') ADVANCE(694);
      if (lookahead != 0) SKIP(244)
      END_STATE();
    case 243:
      if (lookahead == '\n') SKIP(511)
      if (lookahead == '-') SKIP(243)
      if (lookahead == '}') SKIP(241)
      if (lookahead != 0) SKIP(244)
      END_STATE();
    case 244:
      if (lookahead == '\n') SKIP(511)
      if (lookahead == '-') SKIP(243)
      if (lookahead != 0) SKIP(244)
      END_STATE();
    case 245:
      if (lookahead == '\n') SKIP(511)
      if (lookahead == '-') SKIP(455)
      if (lookahead == ':') ADVANCE(482);
      if (lookahead == '{') SKIP(484)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (lookahead != 0) SKIP(484)
      END_STATE();
    case 246:
      if (lookahead == '\n') SKIP(511)
      if (lookahead != 0) SKIP(246)
      END_STATE();
    case 247:
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(270)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead == 'd') ADVANCE(553);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == 'p') ADVANCE(622);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead == 'v') ADVANCE(600);
      if (lookahead == '{') SKIP(268)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 248:
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(403)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(494)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      END_STATE();
    case 249:
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '-') SKIP(437)
      if (lookahead == '{') SKIP(501)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      END_STATE();
    case 250:
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(281)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(488)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      END_STATE();
    case 251:
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(401)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(493)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      END_STATE();
    case 252:
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == '-') SKIP(425)
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == '{') SKIP(497)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      END_STATE();
    case 253:
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == '-') SKIP(443)
      if (lookahead == '{') SKIP(504)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      END_STATE();
    case 254:
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(431)
      if (lookahead == '{') SKIP(498)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      END_STATE();
    case 255:
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '-') SKIP(450)
      if (lookahead == '{') SKIP(507)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      END_STATE();
    case 256:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 257:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 258:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 259:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'h') ADVANCE(765);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 260:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 261:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'l') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 262:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 263:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 'o') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 264:
      if (lookahead == '-') SKIP(265)
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 265:
      if (lookahead == '-') SKIP(265)
      if (lookahead == '}') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 266:
      if (lookahead == '-') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 267:
      if (lookahead == '-') SKIP(265)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 268:
      if (lookahead == '-') SKIP(267)
      END_STATE();
    case 269:
      if (lookahead == '-') SKIP(12)
      if (lookahead == '}') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(267)
      END_STATE();
    case 270:
      if (lookahead == '-') SKIP(15)
      END_STATE();
    case 271:
      if (lookahead == '-') SKIP(277)
      END_STATE();
    case 272:
      if (lookahead == '-') SKIP(19)
      if (lookahead == '}') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(277)
      END_STATE();
    case 273:
      if (lookahead == '-') SKIP(22)
      END_STATE();
    case 274:
      if (lookahead == '-') SKIP(276)
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(277)
      END_STATE();
    case 275:
      if (lookahead == '-') SKIP(276)
      if (lookahead == 'f') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(277)
      END_STATE();
    case 276:
      if (lookahead == '-') SKIP(276)
      if (lookahead == '}') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(277)
      END_STATE();
    case 277:
      if (lookahead == '-') SKIP(276)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(277)
      END_STATE();
    case 278:
      if (lookahead == '-') SKIP(134)
      if (lookahead == '}') SKIP(136)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 279:
      if (lookahead == '-') SKIP(137)
      END_STATE();
    case 280:
      if (lookahead == '-') SKIP(140)
      if (lookahead == '}') SKIP(139)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(399)
      END_STATE();
    case 281:
      if (lookahead == '-') SKIP(142)
      END_STATE();
    case 282:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == '3') ADVANCE(284);
      if (lookahead == '6') ADVANCE(286);
      if (lookahead == '8') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 283:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '1') ADVANCE(289);
      if (lookahead == '3') ADVANCE(285);
      if (lookahead == '6') ADVANCE(287);
      if (lookahead == '8') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 284:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '2') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 285:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '2') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 286:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '4') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 287:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '4') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 288:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '6') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 289:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '6') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 290:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'B') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 291:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 292:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 293:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 294:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 295:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 296:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 297:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 298:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 299:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 300:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 301:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 302:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 303:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 304:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 305:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '_') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 306:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 307:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 308:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 309:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 310:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 311:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'b') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 312:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'c') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 313:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 314:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'd') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 315:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'd') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 316:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'd') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 317:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'd') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 318:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'd') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 319:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 320:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'e') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 321:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 322:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 323:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 324:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 325:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 326:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'g') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 327:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'g') ADVANCE(345);
      if (lookahead == 'z') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 328:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 329:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 330:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 331:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 332:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 333:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 334:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 335:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 336:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 337:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 338:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 339:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 340:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 341:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 342:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 343:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 344:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 345:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 346:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 347:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 348:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 349:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 350:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 351:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 352:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 353:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 354:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 355:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 356:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 357:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 358:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'r') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 359:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 360:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 361:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 362:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 363:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 364:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 365:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 366:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 367:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 368:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 369:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 370:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 371:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 372:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 373:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 374:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 375:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 376:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 377:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 378:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 379:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 380:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 381:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 382:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 383:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 384:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 385:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 386:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 't') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 387:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'u') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 388:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'u') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 389:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'u') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 390:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'x') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 391:
      if (lookahead == '-') SKIP(392)
      if (lookahead == 'x') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 392:
      if (lookahead == '-') SKIP(392)
      if (lookahead == '}') SKIP(136)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 393:
      if (lookahead == '-') SKIP(392)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(393)
      END_STATE();
    case 394:
      if (lookahead == '-') SKIP(160)
      if (lookahead == '}') SKIP(162)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 395:
      if (lookahead == '-') SKIP(163)
      END_STATE();
    case 396:
      if (lookahead == '-') SKIP(166)
      if (lookahead == '}') SKIP(169)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(429)
      END_STATE();
    case 397:
      if (lookahead == '-') SKIP(170)
      END_STATE();
    case 398:
      if (lookahead == '-') SKIP(398)
      if (lookahead == '}') SKIP(139)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(399)
      END_STATE();
    case 399:
      if (lookahead == '-') SKIP(398)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(399)
      END_STATE();
    case 400:
      if (lookahead == '-') SKIP(173)
      if (lookahead == '}') SKIP(172)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(435)
      END_STATE();
    case 401:
      if (lookahead == '-') SKIP(175)
      END_STATE();
    case 402:
      if (lookahead == '-') SKIP(178)
      if (lookahead == '}') SKIP(177)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(441)
      END_STATE();
    case 403:
      if (lookahead == '-') SKIP(180)
      END_STATE();
    case 404:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 405:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 406:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'g') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 407:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'g') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 408:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 409:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 410:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 411:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 412:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 413:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 414:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 415:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 416:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 417:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 418:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 't') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 419:
      if (lookahead == '-') SKIP(420)
      if (lookahead == 't') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 420:
      if (lookahead == '-') SKIP(420)
      if (lookahead == '}') SKIP(162)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 421:
      if (lookahead == '-') SKIP(420)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(421)
      END_STATE();
    case 422:
      if (lookahead == '-') SKIP(182)
      if (lookahead == '}') SKIP(185)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(448)
      END_STATE();
    case 423:
      if (lookahead == '-') SKIP(186)
      END_STATE();
    case 424:
      if (lookahead == '-') SKIP(189)
      if (lookahead == '}') SKIP(188)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(454)
      END_STATE();
    case 425:
      if (lookahead == '-') SKIP(191)
      END_STATE();
    case 426:
      if (lookahead == '-') SKIP(427)
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(429)
      END_STATE();
    case 427:
      if (lookahead == '-') SKIP(427)
      if (lookahead == '}') SKIP(169)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(429)
      END_STATE();
    case 428:
      if (lookahead == '-') SKIP(427)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(429)
      END_STATE();
    case 429:
      if (lookahead == '-') SKIP(427)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(429)
      END_STATE();
    case 430:
      if (lookahead == '-') SKIP(194)
      if (lookahead == '}') SKIP(193)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(458)
      END_STATE();
    case 431:
      if (lookahead == '-') SKIP(196)
      END_STATE();
    case 432:
      if (lookahead == '-') SKIP(207)
      if (lookahead == '}') SKIP(209)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 433:
      if (lookahead == '-') SKIP(210)
      END_STATE();
    case 434:
      if (lookahead == '-') SKIP(434)
      if (lookahead == '}') SKIP(172)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(435)
      END_STATE();
    case 435:
      if (lookahead == '-') SKIP(434)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(435)
      END_STATE();
    case 436:
      if (lookahead == '-') SKIP(213)
      if (lookahead == '}') SKIP(212)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(471)
      END_STATE();
    case 437:
      if (lookahead == '-') SKIP(215)
      END_STATE();
    case 438:
      if (lookahead == '-') SKIP(217)
      if (lookahead == '}') SKIP(219)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(473)
      END_STATE();
    case 439:
      if (lookahead == '-') SKIP(220)
      END_STATE();
    case 440:
      if (lookahead == '-') SKIP(440)
      if (lookahead == '}') SKIP(177)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(441)
      END_STATE();
    case 441:
      if (lookahead == '-') SKIP(440)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(441)
      END_STATE();
    case 442:
      if (lookahead == '-') SKIP(223)
      if (lookahead == '}') SKIP(222)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(475)
      END_STATE();
    case 443:
      if (lookahead == '-') SKIP(225)
      END_STATE();
    case 444:
      if (lookahead == '-') SKIP(227)
      if (lookahead == '}') SKIP(229)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(477)
      END_STATE();
    case 445:
      if (lookahead == '-') SKIP(230)
      END_STATE();
    case 446:
      if (lookahead == '-') SKIP(446)
      if (lookahead == '}') SKIP(185)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(448)
      END_STATE();
    case 447:
      if (lookahead == '-') SKIP(446)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(448)
      END_STATE();
    case 448:
      if (lookahead == '-') SKIP(446)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(448)
      END_STATE();
    case 449:
      if (lookahead == '-') SKIP(233)
      if (lookahead == '}') SKIP(232)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(479)
      END_STATE();
    case 450:
      if (lookahead == '-') SKIP(235)
      END_STATE();
    case 451:
      if (lookahead == '-') SKIP(237)
      if (lookahead == '}') SKIP(239)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(481)
      END_STATE();
    case 452:
      if (lookahead == '-') SKIP(240)
      END_STATE();
    case 453:
      if (lookahead == '-') SKIP(453)
      if (lookahead == '}') SKIP(188)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(454)
      END_STATE();
    case 454:
      if (lookahead == '-') SKIP(453)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(454)
      END_STATE();
    case 455:
      if (lookahead == '-') SKIP(243)
      if (lookahead == '}') SKIP(245)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(484)
      END_STATE();
    case 456:
      if (lookahead == '-') SKIP(246)
      END_STATE();
    case 457:
      if (lookahead == '-') SKIP(457)
      if (lookahead == '}') SKIP(193)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(458)
      END_STATE();
    case 458:
      if (lookahead == '-') SKIP(457)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(458)
      END_STATE();
    case 459:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 460:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 461:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 462:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 463:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 464:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 465:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 466:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 467:
      if (lookahead == '-') SKIP(468)
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 468:
      if (lookahead == '-') SKIP(468)
      if (lookahead == '}') SKIP(209)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 469:
      if (lookahead == '-') SKIP(468)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(469)
      END_STATE();
    case 470:
      if (lookahead == '-') SKIP(470)
      if (lookahead == '}') SKIP(212)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(471)
      END_STATE();
    case 471:
      if (lookahead == '-') SKIP(470)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(471)
      END_STATE();
    case 472:
      if (lookahead == '-') SKIP(472)
      if (lookahead == '}') SKIP(219)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(473)
      END_STATE();
    case 473:
      if (lookahead == '-') SKIP(472)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(473)
      END_STATE();
    case 474:
      if (lookahead == '-') SKIP(474)
      if (lookahead == '}') SKIP(222)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(475)
      END_STATE();
    case 475:
      if (lookahead == '-') SKIP(474)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(475)
      END_STATE();
    case 476:
      if (lookahead == '-') SKIP(476)
      if (lookahead == '}') SKIP(229)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(477)
      END_STATE();
    case 477:
      if (lookahead == '-') SKIP(476)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(477)
      END_STATE();
    case 478:
      if (lookahead == '-') SKIP(478)
      if (lookahead == '}') SKIP(232)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(479)
      END_STATE();
    case 479:
      if (lookahead == '-') SKIP(478)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(479)
      END_STATE();
    case 480:
      if (lookahead == '-') SKIP(480)
      if (lookahead == '}') SKIP(239)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(481)
      END_STATE();
    case 481:
      if (lookahead == '-') SKIP(480)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(481)
      END_STATE();
    case 482:
      if (lookahead == '-') SKIP(483)
      if (lookahead == '=') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(484)
      END_STATE();
    case 483:
      if (lookahead == '-') SKIP(483)
      if (lookahead == '}') SKIP(245)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(484)
      END_STATE();
    case 484:
      if (lookahead == '-') SKIP(483)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(484)
      END_STATE();
    case 485:
      if (lookahead == '-') SKIP(273)
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == '{') SKIP(271)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      END_STATE();
    case 486:
      if (lookahead == '-') SKIP(393)
      END_STATE();
    case 487:
      if (lookahead == '-') SKIP(279)
      if (lookahead == '_') ADVANCE(521);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == 'u') ADVANCE(582);
      if (lookahead == 'v') ADVANCE(602);
      if (lookahead == '{') SKIP(486)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      END_STATE();
    case 488:
      if (lookahead == '-') SKIP(399)
      END_STATE();
    case 489:
      if (lookahead == '-') SKIP(421)
      END_STATE();
    case 490:
      if (lookahead == '-') SKIP(395)
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == '{') SKIP(489)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      END_STATE();
    case 491:
      if (lookahead == '-') SKIP(429)
      END_STATE();
    case 492:
      if (lookahead == '-') SKIP(397)
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead == '{') SKIP(491)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(492)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 493:
      if (lookahead == '-') SKIP(435)
      END_STATE();
    case 494:
      if (lookahead == '-') SKIP(441)
      END_STATE();
    case 495:
      if (lookahead == '-') SKIP(448)
      END_STATE();
    case 496:
      if (lookahead == '-') SKIP(423)
      if (lookahead == '{') SKIP(495)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(496)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 497:
      if (lookahead == '-') SKIP(454)
      END_STATE();
    case 498:
      if (lookahead == '-') SKIP(458)
      END_STATE();
    case 499:
      if (lookahead == '-') SKIP(469)
      END_STATE();
    case 500:
      if (lookahead == '-') SKIP(433)
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(597);
      if (lookahead == '{') SKIP(499)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      END_STATE();
    case 501:
      if (lookahead == '-') SKIP(471)
      END_STATE();
    case 502:
      if (lookahead == '-') SKIP(473)
      END_STATE();
    case 503:
      if (lookahead == '-') SKIP(439)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(502)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(503)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(696);
      END_STATE();
    case 504:
      if (lookahead == '-') SKIP(475)
      END_STATE();
    case 505:
      if (lookahead == '-') SKIP(477)
      END_STATE();
    case 506:
      if (lookahead == '-') SKIP(445)
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '{') SKIP(505)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      END_STATE();
    case 507:
      if (lookahead == '-') SKIP(479)
      END_STATE();
    case 508:
      if (lookahead == '-') SKIP(481)
      END_STATE();
    case 509:
      if (lookahead == '-') SKIP(452)
      if (lookahead == ':') ADVANCE(807);
      if (lookahead == '{') SKIP(508)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      END_STATE();
    case 510:
      if (lookahead == '-') SKIP(484)
      END_STATE();
    case 511:
      if (lookahead == '-') SKIP(456)
      if (lookahead == ':') ADVANCE(520);
      if (lookahead == '{') SKIP(510)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(511)
      END_STATE();
    case 512:
      if (lookahead == '1') ADVANCE(518);
      if (lookahead == '3') ADVANCE(514);
      if (lookahead == '6') ADVANCE(516);
      if (lookahead == '8') ADVANCE(523);
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead == 'p') ADVANCE(645);
      END_STATE();
    case 513:
      if (lookahead == '1') ADVANCE(519);
      if (lookahead == '3') ADVANCE(515);
      if (lookahead == '6') ADVANCE(517);
      if (lookahead == '8') ADVANCE(528);
      if (lookahead == 'm') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 514:
      if (lookahead == '2') ADVANCE(526);
      END_STATE();
    case 515:
      if (lookahead == '2') ADVANCE(532);
      END_STATE();
    case 516:
      if (lookahead == '4') ADVANCE(527);
      END_STATE();
    case 517:
      if (lookahead == '4') ADVANCE(533);
      END_STATE();
    case 518:
      if (lookahead == '6') ADVANCE(525);
      END_STATE();
    case 519:
      if (lookahead == '6') ADVANCE(531);
      END_STATE();
    case 520:
      if (lookahead == '=') ADVANCE(694);
      END_STATE();
    case 521:
      if (lookahead == 'A') ADVANCE(646);
      if (lookahead == 'B') ADVANCE(611);
      END_STATE();
    case 522:
      if (lookahead == '_') ADVANCE(552);
      END_STATE();
    case 523:
      if (lookahead == '_') ADVANCE(627);
      END_STATE();
    case 524:
      if (lookahead == '_') ADVANCE(628);
      END_STATE();
    case 525:
      if (lookahead == '_') ADVANCE(630);
      END_STATE();
    case 526:
      if (lookahead == '_') ADVANCE(631);
      END_STATE();
    case 527:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 528:
      if (lookahead == '_') ADVANCE(633);
      END_STATE();
    case 529:
      if (lookahead == '_') ADVANCE(634);
      END_STATE();
    case 530:
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 531:
      if (lookahead == '_') ADVANCE(636);
      END_STATE();
    case 532:
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 533:
      if (lookahead == '_') ADVANCE(638);
      END_STATE();
    case 534:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 535:
      if (lookahead == '_') ADVANCE(640);
      END_STATE();
    case 536:
      if (lookahead == '_') ADVANCE(641);
      END_STATE();
    case 537:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 538:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 539:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 540:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 541:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 542:
      if (lookahead == 'b') ADVANCE(585);
      END_STATE();
    case 543:
      if (lookahead == 'b') ADVANCE(586);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == 'n') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(818);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(573);
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 548:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 549:
      if (lookahead == 'd') ADVANCE(862);
      END_STATE();
    case 550:
      if (lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 551:
      if (lookahead == 'd') ADVANCE(575);
      END_STATE();
    case 552:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 553:
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 555:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 556:
      if (lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 557:
      if (lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 559:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 560:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 561:
      if (lookahead == 'f') ADVANCE(688);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 564:
      if (lookahead == 'g') ADVANCE(830);
      END_STATE();
    case 565:
      if (lookahead == 'g') ADVANCE(832);
      END_STATE();
    case 566:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 567:
      if (lookahead == 'g') ADVANCE(593);
      if (lookahead == 'z') ADVANCE(560);
      END_STATE();
    case 568:
      if (lookahead == 'g') ADVANCE(598);
      END_STATE();
    case 569:
      if (lookahead == 'h') ADVANCE(720);
      if (lookahead == 'o') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 570:
      if (lookahead == 'h') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 571:
      if (lookahead == 'h') ADVANCE(765);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 572:
      if (lookahead == 'h') ADVANCE(609);
      END_STATE();
    case 573:
      if (lookahead == 'h') ADVANCE(540);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 'n') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(599);
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(836);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(578);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(566);
      END_STATE();
    case 592:
      if (lookahead == 'n') ADVANCE(692);
      END_STATE();
    case 593:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 594:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 595:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 596:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 597:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 598:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 599:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(838);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(866);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(690);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(842);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(844);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(846);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(848);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(868);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(826);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 652:
      if (lookahead == 'x') ADVANCE(529);
      END_STATE();
    case 653:
      if (lookahead == 'x') ADVANCE(535);
      END_STATE();
    case 654:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 655:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(657)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') SKIP(658)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(655)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0) SKIP(658)
      END_STATE();
    case 656:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '(') ADVANCE(814);
      if (lookahead == ')') ADVANCE(815);
      if (lookahead == '*') ADVANCE(820);
      if (lookahead == ',') ADVANCE(821);
      if (lookahead == '-') SKIP(674)
      if (lookahead == ':') ADVANCE(808);
      if (lookahead == '[') ADVANCE(812);
      if (lookahead == ']') ADVANCE(813);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(260);
      if (lookahead == 'v') ADVANCE(262);
      if (lookahead == '{') SKIP(673)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(656)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0) SKIP(673)
      END_STATE();
    case 657:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '-') SKIP(657)
      if (lookahead == '}') SKIP(655)
      if (lookahead != 0) SKIP(658)
      END_STATE();
    case 658:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '-') SKIP(657)
      if (lookahead != 0) SKIP(658)
      END_STATE();
    case 659:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(0)
      if (lookahead != 0) SKIP(659)
      END_STATE();
    case 660:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(683)
      if (lookahead == '-') SKIP(661)
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '{') SKIP(662)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(660)
      if (lookahead != 0) SKIP(662)
      END_STATE();
    case 661:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(683)
      if (lookahead == '-') SKIP(661)
      if (lookahead == '}') SKIP(660)
      if (lookahead != 0) SKIP(662)
      END_STATE();
    case 662:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(683)
      if (lookahead == '-') SKIP(661)
      if (lookahead != 0) SKIP(662)
      END_STATE();
    case 663:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(683)
      if (lookahead == '-') SKIP(676)
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == '{') SKIP(679)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(663)
      if (lookahead != 0) SKIP(679)
      END_STATE();
    case 664:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(683)
      if (lookahead != 0) SKIP(664)
      END_STATE();
    case 665:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(685)
      if (lookahead == '-') SKIP(666)
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == '{') SKIP(667)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(665)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0) SKIP(667)
      END_STATE();
    case 666:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(685)
      if (lookahead == '-') SKIP(666)
      if (lookahead == '}') SKIP(665)
      if (lookahead != 0) SKIP(667)
      END_STATE();
    case 667:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(685)
      if (lookahead == '-') SKIP(666)
      if (lookahead != 0) SKIP(667)
      END_STATE();
    case 668:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(685)
      if (lookahead == '-') SKIP(680)
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead == '{') SKIP(682)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(668)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead != 0) SKIP(682)
      END_STATE();
    case 669:
      if (eof) ADVANCE(687);
      if (lookahead == '\n') SKIP(685)
      if (lookahead != 0) SKIP(669)
      END_STATE();
    case 670:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(659)
      END_STATE();
    case 671:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(673)
      END_STATE();
    case 672:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(672)
      if (lookahead == '}') SKIP(656)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(673)
      END_STATE();
    case 673:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(672)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(673)
      END_STATE();
    case 674:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(657)
      if (lookahead == '}') SKIP(656)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(673)
      END_STATE();
    case 675:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(664)
      END_STATE();
    case 676:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(661)
      if (lookahead == '}') SKIP(663)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(679)
      END_STATE();
    case 677:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(669)
      END_STATE();
    case 678:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(678)
      if (lookahead == '}') SKIP(663)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(679)
      END_STATE();
    case 679:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(678)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(679)
      END_STATE();
    case 680:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(666)
      if (lookahead == '}') SKIP(668)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(682)
      END_STATE();
    case 681:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(681)
      if (lookahead == '}') SKIP(668)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(682)
      END_STATE();
    case 682:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(681)
      if (lookahead != 0 &&
          lookahead != '\n') SKIP(682)
      END_STATE();
    case 683:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(675)
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == '{') SKIP(684)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(683)
      END_STATE();
    case 684:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(679)
      END_STATE();
    case 685:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(677)
      if (lookahead == 'd') ADVANCE(554);
      if (lookahead == '{') SKIP(686)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(685)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 686:
      if (eof) ADVANCE(687);
      if (lookahead == '-') SKIP(682)
      END_STATE();
    case 687:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'B') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(697);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '1') ADVANCE(704);
      if (lookahead == '3') ADVANCE(700);
      if (lookahead == '6') ADVANCE(702);
      if (lookahead == '8') ADVANCE(710);
      if (lookahead == 'm') ADVANCE(723);
      if (lookahead == 'p') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '2') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '2') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '4') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '4') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '6') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '6') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(769);
      if (lookahead == 'l') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(758);
      if (lookahead == 'z') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(806);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(767);
      if (lookahead == 's') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(694);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_ichar);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_ichar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(703);
      if (lookahead == '3') ADVANCE(699);
      if (lookahead == '6') ADVANCE(701);
      if (lookahead == '8') ADVANCE(705);
      if (lookahead == 'm') ADVANCE(719);
      if (lookahead == 'p') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_') ADVANCE(150);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_') ADVANCE(588);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_') ADVANCE(410);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_long_long);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_long_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym__Bool);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym__Bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_int8_t);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_int8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_int16_t);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_int16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_int32_t);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_int32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_int64_t);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_int64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_uint8_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_uint16_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_uint32_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_uint64_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_intmax_t);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_intmax_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_intptr_t);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_intptr_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_uintmax_t);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_uintmax_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_uintptr_t);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_uintptr_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_size_t);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_size_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_ptrdiff_t);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_ptrdiff_t);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_long_double);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_long_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 683},
  [2] = {.lex_state = 487},
  [3] = {.lex_state = 487},
  [4] = {.lex_state = 487},
  [5] = {.lex_state = 487},
  [6] = {.lex_state = 487},
  [7] = {.lex_state = 487},
  [8] = {.lex_state = 487},
  [9] = {.lex_state = 487},
  [10] = {.lex_state = 487},
  [11] = {.lex_state = 487},
  [12] = {.lex_state = 487},
  [13] = {.lex_state = 487},
  [14] = {.lex_state = 487},
  [15] = {.lex_state = 487},
  [16] = {.lex_state = 250},
  [17] = {.lex_state = 490},
  [18] = {.lex_state = 490},
  [19] = {.lex_state = 490},
  [20] = {.lex_state = 490},
  [21] = {.lex_state = 250},
  [22] = {.lex_state = 685},
  [23] = {.lex_state = 683},
  [24] = {.lex_state = 250},
  [25] = {.lex_state = 250},
  [26] = {.lex_state = 250},
  [27] = {.lex_state = 250},
  [28] = {.lex_state = 250},
  [29] = {.lex_state = 250},
  [30] = {.lex_state = 250},
  [31] = {.lex_state = 250},
  [32] = {.lex_state = 250},
  [33] = {.lex_state = 683},
  [34] = {.lex_state = 685},
  [35] = {.lex_state = 250},
  [36] = {.lex_state = 250},
  [37] = {.lex_state = 251},
  [38] = {.lex_state = 248},
  [39] = {.lex_state = 251},
  [40] = {.lex_state = 248},
  [41] = {.lex_state = 248},
  [42] = {.lex_state = 496},
  [43] = {.lex_state = 251},
  [44] = {.lex_state = 248},
  [45] = {.lex_state = 251},
  [46] = {.lex_state = 248},
  [47] = {.lex_state = 248},
  [48] = {.lex_state = 251},
  [49] = {.lex_state = 248},
  [50] = {.lex_state = 248},
  [51] = {.lex_state = 248},
  [52] = {.lex_state = 248},
  [53] = {.lex_state = 248},
  [54] = {.lex_state = 251},
  [55] = {.lex_state = 248},
  [56] = {.lex_state = 251},
  [57] = {.lex_state = 251},
  [58] = {.lex_state = 251},
  [59] = {.lex_state = 251},
  [60] = {.lex_state = 251},
  [61] = {.lex_state = 251},
  [62] = {.lex_state = 251},
  [63] = {.lex_state = 251},
  [64] = {.lex_state = 251},
  [65] = {.lex_state = 252},
  [66] = {.lex_state = 685},
  [67] = {.lex_state = 252},
  [68] = {.lex_state = 252},
  [69] = {.lex_state = 252},
  [70] = {.lex_state = 252},
  [71] = {.lex_state = 252},
  [72] = {.lex_state = 252},
  [73] = {.lex_state = 252},
  [74] = {.lex_state = 252},
  [75] = {.lex_state = 252},
  [76] = {.lex_state = 252},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 685},
  [80] = {.lex_state = 252},
  [81] = {.lex_state = 252},
  [82] = {.lex_state = 252},
  [83] = {.lex_state = 252},
  [84] = {.lex_state = 500},
  [85] = {.lex_state = 683},
  [86] = {.lex_state = 683},
  [87] = {.lex_state = 249},
  [88] = {.lex_state = 503},
  [89] = {.lex_state = 503},
  [90] = {.lex_state = 503},
  [91] = {.lex_state = 503},
  [92] = {.lex_state = 253},
  [93] = {.lex_state = 506},
  [94] = {.lex_state = 255},
  [95] = {.lex_state = 496},
  [96] = {.lex_state = 506},
  [97] = {.lex_state = 496},
  [98] = {.lex_state = 255},
  [99] = {.lex_state = 506},
  [100] = {.lex_state = 496},
  [101] = {.lex_state = 506},
  [102] = {.lex_state = 255},
  [103] = {.lex_state = 255},
  [104] = {.lex_state = 509},
  [105] = {.lex_state = 511},
  [106] = {.lex_state = 496},
  [107] = {.lex_state = 496},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 253},
  [110] = {.lex_state = 253},
  [111] = {.lex_state = 253},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_int_const] = ACTIONS(1),
    [sym_sym] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym__Atomic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ichar] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_long_long] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym__Bool] = ACTIONS(1),
    [anon_sym_int8_t] = ACTIONS(1),
    [anon_sym_int16_t] = ACTIONS(1),
    [anon_sym_int32_t] = ACTIONS(1),
    [anon_sym_int64_t] = ACTIONS(1),
    [anon_sym_uint8_t] = ACTIONS(1),
    [anon_sym_uint16_t] = ACTIONS(1),
    [anon_sym_uint32_t] = ACTIONS(1),
    [anon_sym_uint64_t] = ACTIONS(1),
    [anon_sym_intmax_t] = ACTIONS(1),
    [anon_sym_intptr_t] = ACTIONS(1),
    [anon_sym_uintmax_t] = ACTIONS(1),
    [anon_sym_uintptr_t] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_size_t] = ACTIONS(1),
    [anon_sym_ptrdiff_t] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_long_double] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(108),
    [sym_declaration] = STATE(33),
    [sym_def_aggregate_declaration] = STATE(85),
    [aux_sym_source_file_repeat1] = STATE(33),
    [anon_sym_def] = ACTIONS(3),
  },
  [2] = {
    [sym_ctype] = STATE(16),
    [sym_ctype_star] = STATE(24),
    [sym_params] = STATE(103),
    [sym_integer_type] = STATE(27),
    [sym_floating_type] = STATE(27),
    [sym_basic_type] = STATE(24),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym__Atomic] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym__Bool] = ACTIONS(13),
    [anon_sym_int8_t] = ACTIONS(13),
    [anon_sym_int16_t] = ACTIONS(13),
    [anon_sym_int32_t] = ACTIONS(13),
    [anon_sym_int64_t] = ACTIONS(13),
    [anon_sym_uint8_t] = ACTIONS(13),
    [anon_sym_uint16_t] = ACTIONS(13),
    [anon_sym_uint32_t] = ACTIONS(13),
    [anon_sym_uint64_t] = ACTIONS(13),
    [anon_sym_intmax_t] = ACTIONS(13),
    [anon_sym_intptr_t] = ACTIONS(13),
    [anon_sym_uintmax_t] = ACTIONS(13),
    [anon_sym_uintptr_t] = ACTIONS(13),
    [anon_sym_signed] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_size_t] = ACTIONS(13),
    [anon_sym_ptrdiff_t] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_long_double] = ACTIONS(17),
  },
  [3] = {
    [sym_ctype] = STATE(16),
    [sym_ctype_star] = STATE(24),
    [sym_params] = STATE(102),
    [sym_integer_type] = STATE(27),
    [sym_floating_type] = STATE(27),
    [sym_basic_type] = STATE(24),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym__Atomic] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym__Bool] = ACTIONS(13),
    [anon_sym_int8_t] = ACTIONS(13),
    [anon_sym_int16_t] = ACTIONS(13),
    [anon_sym_int32_t] = ACTIONS(13),
    [anon_sym_int64_t] = ACTIONS(13),
    [anon_sym_uint8_t] = ACTIONS(13),
    [anon_sym_uint16_t] = ACTIONS(13),
    [anon_sym_uint32_t] = ACTIONS(13),
    [anon_sym_uint64_t] = ACTIONS(13),
    [anon_sym_intmax_t] = ACTIONS(13),
    [anon_sym_intptr_t] = ACTIONS(13),
    [anon_sym_uintmax_t] = ACTIONS(13),
    [anon_sym_uintptr_t] = ACTIONS(13),
    [anon_sym_signed] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_size_t] = ACTIONS(13),
    [anon_sym_ptrdiff_t] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_long_double] = ACTIONS(17),
  },
  [4] = {
    [sym_ctype] = STATE(16),
    [sym_ctype_star] = STATE(24),
    [sym_params] = STATE(98),
    [sym_integer_type] = STATE(27),
    [sym_floating_type] = STATE(27),
    [sym_basic_type] = STATE(24),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym__Atomic] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym__Bool] = ACTIONS(13),
    [anon_sym_int8_t] = ACTIONS(13),
    [anon_sym_int16_t] = ACTIONS(13),
    [anon_sym_int32_t] = ACTIONS(13),
    [anon_sym_int64_t] = ACTIONS(13),
    [anon_sym_uint8_t] = ACTIONS(13),
    [anon_sym_uint16_t] = ACTIONS(13),
    [anon_sym_uint32_t] = ACTIONS(13),
    [anon_sym_uint64_t] = ACTIONS(13),
    [anon_sym_intmax_t] = ACTIONS(13),
    [anon_sym_intptr_t] = ACTIONS(13),
    [anon_sym_uintmax_t] = ACTIONS(13),
    [anon_sym_uintptr_t] = ACTIONS(13),
    [anon_sym_signed] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_size_t] = ACTIONS(13),
    [anon_sym_ptrdiff_t] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_long_double] = ACTIONS(17),
  },
  [5] = {
    [sym_ctype] = STATE(16),
    [sym_ctype_star] = STATE(24),
    [sym_params] = STATE(94),
    [sym_integer_type] = STATE(27),
    [sym_floating_type] = STATE(27),
    [sym_basic_type] = STATE(24),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym__Atomic] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym__Bool] = ACTIONS(13),
    [anon_sym_int8_t] = ACTIONS(13),
    [anon_sym_int16_t] = ACTIONS(13),
    [anon_sym_int32_t] = ACTIONS(13),
    [anon_sym_int64_t] = ACTIONS(13),
    [anon_sym_uint8_t] = ACTIONS(13),
    [anon_sym_uint16_t] = ACTIONS(13),
    [anon_sym_uint32_t] = ACTIONS(13),
    [anon_sym_uint64_t] = ACTIONS(13),
    [anon_sym_intmax_t] = ACTIONS(13),
    [anon_sym_intptr_t] = ACTIONS(13),
    [anon_sym_uintmax_t] = ACTIONS(13),
    [anon_sym_uintptr_t] = ACTIONS(13),
    [anon_sym_signed] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_size_t] = ACTIONS(13),
    [anon_sym_ptrdiff_t] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_long_double] = ACTIONS(17),
  },
  [6] = {
    [sym_ctype] = STATE(37),
    [sym_ctype_star] = STATE(56),
    [sym_integer_type] = STATE(59),
    [sym_floating_type] = STATE(59),
    [sym_basic_type] = STATE(56),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym__Atomic] = ACTIONS(25),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym__Bool] = ACTIONS(27),
    [anon_sym_int8_t] = ACTIONS(27),
    [anon_sym_int16_t] = ACTIONS(27),
    [anon_sym_int32_t] = ACTIONS(27),
    [anon_sym_int64_t] = ACTIONS(27),
    [anon_sym_uint8_t] = ACTIONS(27),
    [anon_sym_uint16_t] = ACTIONS(27),
    [anon_sym_uint32_t] = ACTIONS(27),
    [anon_sym_uint64_t] = ACTIONS(27),
    [anon_sym_intmax_t] = ACTIONS(27),
    [anon_sym_intptr_t] = ACTIONS(27),
    [anon_sym_uintmax_t] = ACTIONS(27),
    [anon_sym_uintptr_t] = ACTIONS(27),
    [anon_sym_signed] = ACTIONS(29),
    [anon_sym_unsigned] = ACTIONS(29),
    [anon_sym_size_t] = ACTIONS(27),
    [anon_sym_ptrdiff_t] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_long_double] = ACTIONS(31),
  },
  [7] = {
    [sym_ctype] = STATE(32),
    [sym_ctype_star] = STATE(24),
    [sym_integer_type] = STATE(27),
    [sym_floating_type] = STATE(27),
    [sym_basic_type] = STATE(24),
    [anon_sym_struct] = ACTIONS(5),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym__Atomic] = ACTIONS(11),
    [anon_sym_char] = ACTIONS(13),
    [anon_sym__Bool] = ACTIONS(13),
    [anon_sym_int8_t] = ACTIONS(13),
    [anon_sym_int16_t] = ACTIONS(13),
    [anon_sym_int32_t] = ACTIONS(13),
    [anon_sym_int64_t] = ACTIONS(13),
    [anon_sym_uint8_t] = ACTIONS(13),
    [anon_sym_uint16_t] = ACTIONS(13),
    [anon_sym_uint32_t] = ACTIONS(13),
    [anon_sym_uint64_t] = ACTIONS(13),
    [anon_sym_intmax_t] = ACTIONS(13),
    [anon_sym_intptr_t] = ACTIONS(13),
    [anon_sym_uintmax_t] = ACTIONS(13),
    [anon_sym_uintptr_t] = ACTIONS(13),
    [anon_sym_signed] = ACTIONS(15),
    [anon_sym_unsigned] = ACTIONS(15),
    [anon_sym_size_t] = ACTIONS(13),
    [anon_sym_ptrdiff_t] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_long_double] = ACTIONS(17),
  },
  [8] = {
    [sym_ctype] = STATE(39),
    [sym_ctype_star] = STATE(56),
    [sym_integer_type] = STATE(59),
    [sym_floating_type] = STATE(59),
    [sym_basic_type] = STATE(56),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym__Atomic] = ACTIONS(25),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym__Bool] = ACTIONS(27),
    [anon_sym_int8_t] = ACTIONS(27),
    [anon_sym_int16_t] = ACTIONS(27),
    [anon_sym_int32_t] = ACTIONS(27),
    [anon_sym_int64_t] = ACTIONS(27),
    [anon_sym_uint8_t] = ACTIONS(27),
    [anon_sym_uint16_t] = ACTIONS(27),
    [anon_sym_uint32_t] = ACTIONS(27),
    [anon_sym_uint64_t] = ACTIONS(27),
    [anon_sym_intmax_t] = ACTIONS(27),
    [anon_sym_intptr_t] = ACTIONS(27),
    [anon_sym_uintmax_t] = ACTIONS(27),
    [anon_sym_uintptr_t] = ACTIONS(27),
    [anon_sym_signed] = ACTIONS(29),
    [anon_sym_unsigned] = ACTIONS(29),
    [anon_sym_size_t] = ACTIONS(27),
    [anon_sym_ptrdiff_t] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_long_double] = ACTIONS(31),
  },
  [9] = {
    [sym_ctype] = STATE(43),
    [sym_ctype_star] = STATE(56),
    [sym_integer_type] = STATE(59),
    [sym_floating_type] = STATE(59),
    [sym_basic_type] = STATE(56),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym__Atomic] = ACTIONS(25),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym__Bool] = ACTIONS(27),
    [anon_sym_int8_t] = ACTIONS(27),
    [anon_sym_int16_t] = ACTIONS(27),
    [anon_sym_int32_t] = ACTIONS(27),
    [anon_sym_int64_t] = ACTIONS(27),
    [anon_sym_uint8_t] = ACTIONS(27),
    [anon_sym_uint16_t] = ACTIONS(27),
    [anon_sym_uint32_t] = ACTIONS(27),
    [anon_sym_uint64_t] = ACTIONS(27),
    [anon_sym_intmax_t] = ACTIONS(27),
    [anon_sym_intptr_t] = ACTIONS(27),
    [anon_sym_uintmax_t] = ACTIONS(27),
    [anon_sym_uintptr_t] = ACTIONS(27),
    [anon_sym_signed] = ACTIONS(29),
    [anon_sym_unsigned] = ACTIONS(29),
    [anon_sym_size_t] = ACTIONS(27),
    [anon_sym_ptrdiff_t] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_long_double] = ACTIONS(31),
  },
  [10] = {
    [sym_ctype] = STATE(82),
    [sym_ctype_star] = STATE(71),
    [sym_integer_type] = STATE(73),
    [sym_floating_type] = STATE(73),
    [sym_basic_type] = STATE(76),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym__Atomic] = ACTIONS(39),
    [anon_sym_char] = ACTIONS(41),
    [anon_sym__Bool] = ACTIONS(41),
    [anon_sym_int8_t] = ACTIONS(41),
    [anon_sym_int16_t] = ACTIONS(41),
    [anon_sym_int32_t] = ACTIONS(41),
    [anon_sym_int64_t] = ACTIONS(41),
    [anon_sym_uint8_t] = ACTIONS(41),
    [anon_sym_uint16_t] = ACTIONS(41),
    [anon_sym_uint32_t] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(41),
    [anon_sym_intmax_t] = ACTIONS(41),
    [anon_sym_intptr_t] = ACTIONS(41),
    [anon_sym_uintmax_t] = ACTIONS(41),
    [anon_sym_uintptr_t] = ACTIONS(41),
    [anon_sym_signed] = ACTIONS(43),
    [anon_sym_unsigned] = ACTIONS(43),
    [anon_sym_size_t] = ACTIONS(41),
    [anon_sym_ptrdiff_t] = ACTIONS(41),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [anon_sym_long_double] = ACTIONS(45),
  },
  [11] = {
    [sym_ctype] = STATE(45),
    [sym_ctype_star] = STATE(56),
    [sym_integer_type] = STATE(59),
    [sym_floating_type] = STATE(59),
    [sym_basic_type] = STATE(56),
    [anon_sym_struct] = ACTIONS(19),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_void] = ACTIONS(21),
    [anon_sym_const] = ACTIONS(23),
    [anon_sym__Atomic] = ACTIONS(25),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym__Bool] = ACTIONS(27),
    [anon_sym_int8_t] = ACTIONS(27),
    [anon_sym_int16_t] = ACTIONS(27),
    [anon_sym_int32_t] = ACTIONS(27),
    [anon_sym_int64_t] = ACTIONS(27),
    [anon_sym_uint8_t] = ACTIONS(27),
    [anon_sym_uint16_t] = ACTIONS(27),
    [anon_sym_uint32_t] = ACTIONS(27),
    [anon_sym_uint64_t] = ACTIONS(27),
    [anon_sym_intmax_t] = ACTIONS(27),
    [anon_sym_intptr_t] = ACTIONS(27),
    [anon_sym_uintmax_t] = ACTIONS(27),
    [anon_sym_uintptr_t] = ACTIONS(27),
    [anon_sym_signed] = ACTIONS(29),
    [anon_sym_unsigned] = ACTIONS(29),
    [anon_sym_size_t] = ACTIONS(27),
    [anon_sym_ptrdiff_t] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_long_double] = ACTIONS(31),
  },
  [12] = {
    [sym_ctype] = STATE(52),
    [sym_ctype_star] = STATE(40),
    [sym_integer_type] = STATE(51),
    [sym_floating_type] = STATE(51),
    [sym_basic_type] = STATE(40),
    [anon_sym_struct] = ACTIONS(47),
    [anon_sym_union] = ACTIONS(47),
    [anon_sym_void] = ACTIONS(49),
    [anon_sym_const] = ACTIONS(51),
    [anon_sym__Atomic] = ACTIONS(53),
    [anon_sym_char] = ACTIONS(55),
    [anon_sym__Bool] = ACTIONS(55),
    [anon_sym_int8_t] = ACTIONS(55),
    [anon_sym_int16_t] = ACTIONS(55),
    [anon_sym_int32_t] = ACTIONS(55),
    [anon_sym_int64_t] = ACTIONS(55),
    [anon_sym_uint8_t] = ACTIONS(55),
    [anon_sym_uint16_t] = ACTIONS(55),
    [anon_sym_uint32_t] = ACTIONS(55),
    [anon_sym_uint64_t] = ACTIONS(55),
    [anon_sym_intmax_t] = ACTIONS(55),
    [anon_sym_intptr_t] = ACTIONS(55),
    [anon_sym_uintmax_t] = ACTIONS(55),
    [anon_sym_uintptr_t] = ACTIONS(55),
    [anon_sym_signed] = ACTIONS(57),
    [anon_sym_unsigned] = ACTIONS(57),
    [anon_sym_size_t] = ACTIONS(55),
    [anon_sym_ptrdiff_t] = ACTIONS(55),
    [anon_sym_float] = ACTIONS(59),
    [anon_sym_double] = ACTIONS(59),
    [anon_sym_long_double] = ACTIONS(59),
  },
  [13] = {
    [sym_ctype] = STATE(67),
    [sym_ctype_star] = STATE(21),
    [sym_integer_type] = STATE(73),
    [sym_floating_type] = STATE(73),
    [sym_basic_type] = STATE(76),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym__Atomic] = ACTIONS(39),
    [anon_sym_char] = ACTIONS(41),
    [anon_sym__Bool] = ACTIONS(41),
    [anon_sym_int8_t] = ACTIONS(41),
    [anon_sym_int16_t] = ACTIONS(41),
    [anon_sym_int32_t] = ACTIONS(41),
    [anon_sym_int64_t] = ACTIONS(41),
    [anon_sym_uint8_t] = ACTIONS(41),
    [anon_sym_uint16_t] = ACTIONS(41),
    [anon_sym_uint32_t] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(41),
    [anon_sym_intmax_t] = ACTIONS(41),
    [anon_sym_intptr_t] = ACTIONS(41),
    [anon_sym_uintmax_t] = ACTIONS(41),
    [anon_sym_uintptr_t] = ACTIONS(41),
    [anon_sym_signed] = ACTIONS(43),
    [anon_sym_unsigned] = ACTIONS(43),
    [anon_sym_size_t] = ACTIONS(41),
    [anon_sym_ptrdiff_t] = ACTIONS(41),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [anon_sym_long_double] = ACTIONS(45),
  },
  [14] = {
    [sym_ctype] = STATE(80),
    [sym_ctype_star] = STATE(61),
    [sym_integer_type] = STATE(73),
    [sym_floating_type] = STATE(73),
    [sym_basic_type] = STATE(76),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym__Atomic] = ACTIONS(39),
    [anon_sym_char] = ACTIONS(41),
    [anon_sym__Bool] = ACTIONS(41),
    [anon_sym_int8_t] = ACTIONS(41),
    [anon_sym_int16_t] = ACTIONS(41),
    [anon_sym_int32_t] = ACTIONS(41),
    [anon_sym_int64_t] = ACTIONS(41),
    [anon_sym_uint8_t] = ACTIONS(41),
    [anon_sym_uint16_t] = ACTIONS(41),
    [anon_sym_uint32_t] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(41),
    [anon_sym_intmax_t] = ACTIONS(41),
    [anon_sym_intptr_t] = ACTIONS(41),
    [anon_sym_uintmax_t] = ACTIONS(41),
    [anon_sym_uintptr_t] = ACTIONS(41),
    [anon_sym_signed] = ACTIONS(43),
    [anon_sym_unsigned] = ACTIONS(43),
    [anon_sym_size_t] = ACTIONS(41),
    [anon_sym_ptrdiff_t] = ACTIONS(41),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [anon_sym_long_double] = ACTIONS(45),
  },
  [15] = {
    [sym_ctype] = STATE(81),
    [sym_ctype_star] = STATE(49),
    [sym_integer_type] = STATE(73),
    [sym_floating_type] = STATE(73),
    [sym_basic_type] = STATE(76),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_union] = ACTIONS(33),
    [anon_sym_void] = ACTIONS(35),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym__Atomic] = ACTIONS(39),
    [anon_sym_char] = ACTIONS(41),
    [anon_sym__Bool] = ACTIONS(41),
    [anon_sym_int8_t] = ACTIONS(41),
    [anon_sym_int16_t] = ACTIONS(41),
    [anon_sym_int32_t] = ACTIONS(41),
    [anon_sym_int64_t] = ACTIONS(41),
    [anon_sym_uint8_t] = ACTIONS(41),
    [anon_sym_uint16_t] = ACTIONS(41),
    [anon_sym_uint32_t] = ACTIONS(41),
    [anon_sym_uint64_t] = ACTIONS(41),
    [anon_sym_intmax_t] = ACTIONS(41),
    [anon_sym_intptr_t] = ACTIONS(41),
    [anon_sym_uintmax_t] = ACTIONS(41),
    [anon_sym_uintptr_t] = ACTIONS(41),
    [anon_sym_signed] = ACTIONS(43),
    [anon_sym_unsigned] = ACTIONS(43),
    [anon_sym_size_t] = ACTIONS(41),
    [anon_sym_ptrdiff_t] = ACTIONS(41),
    [anon_sym_float] = ACTIONS(45),
    [anon_sym_double] = ACTIONS(45),
    [anon_sym_long_double] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_params_repeat1,
  [19] = 2,
    STATE(30), 1,
      sym_integer_base_type,
    ACTIONS(71), 5,
      anon_sym_ichar,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_long_long,
  [30] = 2,
    STATE(69), 1,
      sym_integer_base_type,
    ACTIONS(73), 5,
      anon_sym_ichar,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_long_long,
  [41] = 2,
    STATE(46), 1,
      sym_integer_base_type,
    ACTIONS(75), 5,
      anon_sym_ichar,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_long_long,
  [52] = 2,
    STATE(63), 1,
      sym_integer_base_type,
    ACTIONS(77), 5,
      anon_sym_ichar,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_long_long,
  [63] = 1,
    ACTIONS(79), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [71] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_def,
    ACTIONS(85), 1,
      sym_sym,
    STATE(34), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [85] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_def,
    STATE(85), 1,
      sym_def_aggregate_declaration,
    STATE(23), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [99] = 1,
    ACTIONS(92), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [107] = 1,
    ACTIONS(94), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [115] = 1,
    ACTIONS(96), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [123] = 1,
    ACTIONS(98), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [131] = 1,
    ACTIONS(79), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [139] = 1,
    ACTIONS(100), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [147] = 1,
    ACTIONS(102), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [155] = 1,
    ACTIONS(104), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [163] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [177] = 4,
    ACTIONS(3), 1,
      anon_sym_def,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_def_aggregate_declaration,
    STATE(23), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
  [191] = 4,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_def,
    ACTIONS(114), 1,
      sym_sym,
    STATE(34), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [205] = 1,
    ACTIONS(117), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [213] = 1,
    ACTIONS(119), 5,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_COMMA,
  [221] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_STAR,
  [234] = 1,
    ACTIONS(79), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [241] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [254] = 1,
    ACTIONS(92), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [261] = 1,
    ACTIONS(119), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [268] = 3,
    ACTIONS(131), 1,
      sym_sym,
    STATE(86), 1,
      sym_def_fields,
    STATE(22), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [279] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
  [292] = 1,
    ACTIONS(104), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [299] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [312] = 1,
    ACTIONS(102), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [319] = 1,
    ACTIONS(100), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [326] = 1,
    ACTIONS(117), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [333] = 1,
    ACTIONS(79), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [340] = 1,
    ACTIONS(117), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [347] = 1,
    ACTIONS(98), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [354] = 4,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_STAR,
  [367] = 1,
    ACTIONS(96), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [374] = 1,
    ACTIONS(119), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [381] = 1,
    ACTIONS(94), 4,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [388] = 1,
    ACTIONS(92), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [395] = 1,
    ACTIONS(94), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [402] = 1,
    ACTIONS(96), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [409] = 1,
    ACTIONS(98), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [416] = 1,
    ACTIONS(79), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [423] = 1,
    ACTIONS(79), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [430] = 1,
    ACTIONS(100), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [437] = 1,
    ACTIONS(102), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [444] = 1,
    ACTIONS(104), 4,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
  [451] = 1,
    ACTIONS(117), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [457] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 2,
      anon_sym_def,
      sym_sym,
  [465] = 3,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
  [475] = 1,
    ACTIONS(104), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [481] = 1,
    ACTIONS(102), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [487] = 1,
    ACTIONS(100), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [493] = 1,
    ACTIONS(79), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [499] = 1,
    ACTIONS(79), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [505] = 1,
    ACTIONS(98), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [511] = 1,
    ACTIONS(96), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [517] = 1,
    ACTIONS(94), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [523] = 1,
    ACTIONS(92), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [529] = 3,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_params_repeat1,
  [539] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_params_repeat1,
  [549] = 2,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 2,
      anon_sym_def,
      sym_sym,
  [557] = 3,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
  [567] = 3,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
  [577] = 3,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_STAR,
  [587] = 1,
    ACTIONS(119), 3,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_STAR,
  [593] = 1,
    ACTIONS(164), 2,
      anon_sym_struct,
      anon_sym_union,
  [598] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [603] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [608] = 2,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_core_ctype,
  [615] = 2,
    ACTIONS(172), 1,
      sym_int_const,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
  [622] = 2,
    ACTIONS(176), 1,
      sym_int_const,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
  [629] = 2,
    ACTIONS(180), 1,
      sym_int_const,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
  [636] = 2,
    ACTIONS(184), 1,
      sym_int_const,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
  [643] = 1,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
  [647] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
  [651] = 1,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [655] = 1,
    ACTIONS(192), 1,
      sym_sym,
  [659] = 1,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
  [663] = 1,
    ACTIONS(196), 1,
      sym_sym,
  [667] = 1,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [671] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
  [675] = 1,
    ACTIONS(200), 1,
      sym_sym,
  [679] = 1,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
  [683] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [687] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [691] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [695] = 1,
    ACTIONS(206), 1,
      anon_sym_COLON_EQ,
  [699] = 1,
    ACTIONS(208), 1,
      sym_sym,
  [703] = 1,
    ACTIONS(210), 1,
      sym_sym,
  [707] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [711] = 1,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
  [715] = 1,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
  [719] = 1,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 19,
  [SMALL_STATE(18)] = 30,
  [SMALL_STATE(19)] = 41,
  [SMALL_STATE(20)] = 52,
  [SMALL_STATE(21)] = 63,
  [SMALL_STATE(22)] = 71,
  [SMALL_STATE(23)] = 85,
  [SMALL_STATE(24)] = 99,
  [SMALL_STATE(25)] = 107,
  [SMALL_STATE(26)] = 115,
  [SMALL_STATE(27)] = 123,
  [SMALL_STATE(28)] = 131,
  [SMALL_STATE(29)] = 139,
  [SMALL_STATE(30)] = 147,
  [SMALL_STATE(31)] = 155,
  [SMALL_STATE(32)] = 163,
  [SMALL_STATE(33)] = 177,
  [SMALL_STATE(34)] = 191,
  [SMALL_STATE(35)] = 205,
  [SMALL_STATE(36)] = 213,
  [SMALL_STATE(37)] = 221,
  [SMALL_STATE(38)] = 234,
  [SMALL_STATE(39)] = 241,
  [SMALL_STATE(40)] = 254,
  [SMALL_STATE(41)] = 261,
  [SMALL_STATE(42)] = 268,
  [SMALL_STATE(43)] = 279,
  [SMALL_STATE(44)] = 292,
  [SMALL_STATE(45)] = 299,
  [SMALL_STATE(46)] = 312,
  [SMALL_STATE(47)] = 319,
  [SMALL_STATE(48)] = 326,
  [SMALL_STATE(49)] = 333,
  [SMALL_STATE(50)] = 340,
  [SMALL_STATE(51)] = 347,
  [SMALL_STATE(52)] = 354,
  [SMALL_STATE(53)] = 367,
  [SMALL_STATE(54)] = 374,
  [SMALL_STATE(55)] = 381,
  [SMALL_STATE(56)] = 388,
  [SMALL_STATE(57)] = 395,
  [SMALL_STATE(58)] = 402,
  [SMALL_STATE(59)] = 409,
  [SMALL_STATE(60)] = 416,
  [SMALL_STATE(61)] = 423,
  [SMALL_STATE(62)] = 430,
  [SMALL_STATE(63)] = 437,
  [SMALL_STATE(64)] = 444,
  [SMALL_STATE(65)] = 451,
  [SMALL_STATE(66)] = 457,
  [SMALL_STATE(67)] = 465,
  [SMALL_STATE(68)] = 475,
  [SMALL_STATE(69)] = 481,
  [SMALL_STATE(70)] = 487,
  [SMALL_STATE(71)] = 493,
  [SMALL_STATE(72)] = 499,
  [SMALL_STATE(73)] = 505,
  [SMALL_STATE(74)] = 511,
  [SMALL_STATE(75)] = 517,
  [SMALL_STATE(76)] = 523,
  [SMALL_STATE(77)] = 529,
  [SMALL_STATE(78)] = 539,
  [SMALL_STATE(79)] = 549,
  [SMALL_STATE(80)] = 557,
  [SMALL_STATE(81)] = 567,
  [SMALL_STATE(82)] = 577,
  [SMALL_STATE(83)] = 587,
  [SMALL_STATE(84)] = 593,
  [SMALL_STATE(85)] = 598,
  [SMALL_STATE(86)] = 603,
  [SMALL_STATE(87)] = 608,
  [SMALL_STATE(88)] = 615,
  [SMALL_STATE(89)] = 622,
  [SMALL_STATE(90)] = 629,
  [SMALL_STATE(91)] = 636,
  [SMALL_STATE(92)] = 643,
  [SMALL_STATE(93)] = 647,
  [SMALL_STATE(94)] = 651,
  [SMALL_STATE(95)] = 655,
  [SMALL_STATE(96)] = 659,
  [SMALL_STATE(97)] = 663,
  [SMALL_STATE(98)] = 667,
  [SMALL_STATE(99)] = 671,
  [SMALL_STATE(100)] = 675,
  [SMALL_STATE(101)] = 679,
  [SMALL_STATE(102)] = 683,
  [SMALL_STATE(103)] = 687,
  [SMALL_STATE(104)] = 691,
  [SMALL_STATE(105)] = 695,
  [SMALL_STATE(106)] = 699,
  [SMALL_STATE(107)] = 703,
  [SMALL_STATE(108)] = 707,
  [SMALL_STATE(109)] = 711,
  [SMALL_STATE(110)] = 715,
  [SMALL_STATE(111)] = 719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_type, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_base_type, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2), SHIFT_REPEAT(104),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(7),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_core(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
