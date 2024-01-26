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
#define STATE_COUNT 664
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 140
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_def = 2,
  anon_sym_struct = 3,
  anon_sym_union = 4,
  anon_sym_COLON_EQ = 5,
  sym_int_const = 6,
  sym_floating_const = 7,
  sym_sym = 8,
  anon_sym_COLON = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_void = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_const = 16,
  anon_sym_volatile = 17,
  anon_sym__Atomic = 18,
  anon_sym_STAR = 19,
  anon_sym_LPAREN_STAR_RPAREN = 20,
  anon_sym_restrict = 21,
  anon_sym_COMMA = 22,
  anon_sym_DOT_DOT_DOT = 23,
  aux_sym_integer_type_token1 = 24,
  sym_floating_type = 25,
  anon_sym_ail_ctype = 26,
  anon_sym_EQ = 27,
  anon_sym_glob = 28,
  anon_sym_pure = 29,
  anon_sym_memop = 30,
  anon_sym_let = 31,
  anon_sym_in = 32,
  anon_sym_if = 33,
  anon_sym_then = 34,
  anon_sym_else = 35,
  anon_sym_case = 36,
  anon_sym_of = 37,
  anon_sym_PIPE = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_end = 40,
  anon_sym_pcall = 41,
  anon_sym_ccall = 42,
  anon_sym_unseq = 43,
  anon_sym_weak = 44,
  anon_sym_SEMI = 45,
  anon_sym_strong = 46,
  anon_sym_bound = 47,
  anon_sym_save = 48,
  anon_sym_run = 49,
  anon_sym_nd = 50,
  anon_sym_par = 51,
  anon_sym_eff = 52,
  anon_sym_undef = 53,
  anon_sym_error = 54,
  anon_sym_CivNULLcap = 55,
  anon_sym_signed = 56,
  anon_sym_unsigned = 57,
  anon_sym_array_shift = 58,
  anon_sym_member_shift = 59,
  anon_sym_DOT = 60,
  anon_sym_not = 61,
  anon_sym_DASH = 62,
  anon_sym_cfunction = 63,
  anon_sym_LBRACE = 64,
  anon_sym_RBRACE = 65,
  anon_sym_is_scalar = 66,
  anon_sym_is_integer = 67,
  anon_sym_is_signed_LPAREN = 68,
  anon_sym_is_unsigned_LPAREN = 69,
  anon_sym_are_compatible = 70,
  anon_sym_conv_loaded_int = 71,
  anon_sym_LBRACK_RBRACK = 72,
  anon_sym_COLON_COLON = 73,
  anon_sym_DeriveCap = 74,
  aux_sym_pure_memop_op_token1 = 75,
  anon_sym_CapAssignValue = 76,
  anon_sym_Ptr_tIntValue = 77,
  anon_sym_PtrEq = 78,
  anon_sym_PtrNe = 79,
  anon_sym_PtrLt = 80,
  anon_sym_PtrGt = 81,
  anon_sym_PtrLe = 82,
  anon_sym_PtrGe = 83,
  anon_sym_Ptrdiff = 84,
  anon_sym_IntFromPtr = 85,
  anon_sym_PtrFromInt = 86,
  anon_sym_PtrValidForDeref = 87,
  anon_sym_PtrWellAligned = 88,
  anon_sym_PtrArrayShift = 89,
  aux_sym_memop_op_token1 = 90,
  anon_sym_PtrMemberShift = 91,
  anon_sym__ = 92,
  anon_sym_unit = 93,
  anon_sym_boolean = 94,
  anon_sym_ctype = 95,
  anon_sym_loaded = 96,
  anon_sym_storable = 97,
  anon_sym_integer = 98,
  anon_sym_floating = 99,
  anon_sym_pointer = 100,
  anon_sym_array = 101,
  sym_memory_order = 102,
  anon_sym_create_readonly = 103,
  anon_sym_create = 104,
  anon_sym_alloc = 105,
  anon_sym_free = 106,
  anon_sym_kill = 107,
  anon_sym_store = 108,
  anon_sym_store_lock = 109,
  anon_sym_load = 110,
  anon_sym_seq_rmw = 111,
  anon_sym_seq_rmw_with_forward = 112,
  anon_sym_rmw = 113,
  anon_sym_fence = 114,
  anon_sym_neg = 115,
  sym_ub = 116,
  aux_sym_string_token1 = 117,
  anon_sym_Array = 118,
  anon_sym_Ivmax = 119,
  anon_sym_Ivmin = 120,
  anon_sym_Ivsizeof = 121,
  anon_sym_Ivalignof = 122,
  anon_sym_Specified = 123,
  anon_sym_Unspecified = 124,
  anon_sym_Fvfromint = 125,
  anon_sym_Ivfromfloat = 126,
  anon_sym_IvCOMPL = 127,
  anon_sym_IvAND = 128,
  anon_sym_IvOR = 129,
  anon_sym_IvXOR = 130,
  sym_binary_operator = 131,
  sym_bool_literal = 132,
  anon_sym_IvMaxAlignment = 133,
  anon_sym_NULL = 134,
  anon_sym_Cfunction = 135,
  anon_sym_Unit = 136,
  sym_impl = 137,
  anon_sym_ailname = 138,
  anon_sym_proc = 139,
  sym_source_file = 140,
  sym_declaration = 141,
  sym_def_aggregate_declaration = 142,
  sym_def_fields = 143,
  sym_def_field = 144,
  sym_core_ctype = 145,
  sym_ctype = 146,
  sym_ctype_star = 147,
  sym_params = 148,
  sym_integer_type = 149,
  sym_basic_type = 150,
  sym_glob_ctype_attribute = 151,
  sym_glob_declaration = 152,
  sym_expr = 153,
  sym_core_type = 154,
  sym_pexpr = 155,
  sym_list_pexpr = 156,
  sym_pure_memop_op = 157,
  sym_memop_op = 158,
  sym_pattern = 159,
  sym_list_pattern = 160,
  sym_name = 161,
  sym_core_base_type = 162,
  sym_core_object_type = 163,
  sym_action = 164,
  sym_paction = 165,
  sym_string = 166,
  sym_cstring = 167,
  sym_ctor = 168,
  sym_cabs_id = 169,
  sym_member = 170,
  sym_value = 171,
  sym_attribute = 172,
  sym_attribute_pair = 173,
  sym_proc_declaration = 174,
  sym_proc_full_declaration = 175,
  sym_proc_forward_declaration = 176,
  sym_def_declaration = 177,
  aux_sym_source_file_repeat1 = 178,
  aux_sym_def_fields_repeat1 = 179,
  aux_sym_params_repeat1 = 180,
  aux_sym_integer_type_repeat1 = 181,
  aux_sym_expr_repeat1 = 182,
  aux_sym_expr_repeat2 = 183,
  aux_sym_expr_repeat3 = 184,
  aux_sym_expr_repeat4 = 185,
  aux_sym_pexpr_repeat1 = 186,
  aux_sym_pexpr_repeat2 = 187,
  aux_sym_pattern_repeat1 = 188,
  aux_sym_core_base_type_repeat1 = 189,
  aux_sym_attribute_repeat1 = 190,
  aux_sym_proc_full_declaration_repeat1 = 191,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_def] = "def",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_COLON_EQ] = ":=",
  [sym_int_const] = "int_const",
  [sym_floating_const] = "floating_const",
  [sym_sym] = "sym",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_volatile] = "volatile",
  [anon_sym__Atomic] = "_Atomic",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
  [anon_sym_restrict] = "restrict",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_integer_type_token1] = "integer_type_token1",
  [sym_floating_type] = "floating_type",
  [anon_sym_ail_ctype] = "ail_ctype",
  [anon_sym_EQ] = "=",
  [anon_sym_glob] = "glob",
  [anon_sym_pure] = "pure",
  [anon_sym_memop] = "memop",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_end] = "end",
  [anon_sym_pcall] = "pcall",
  [anon_sym_ccall] = "ccall",
  [anon_sym_unseq] = "unseq",
  [anon_sym_weak] = "weak",
  [anon_sym_SEMI] = ";",
  [anon_sym_strong] = "strong",
  [anon_sym_bound] = "bound",
  [anon_sym_save] = "save",
  [anon_sym_run] = "run",
  [anon_sym_nd] = "nd",
  [anon_sym_par] = "par",
  [anon_sym_eff] = "eff",
  [anon_sym_undef] = "undef",
  [anon_sym_error] = "error",
  [anon_sym_CivNULLcap] = "CivNULLcap",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_array_shift] = "array_shift",
  [anon_sym_member_shift] = "member_shift",
  [anon_sym_DOT] = ".",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_cfunction] = "cfunction",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_is_scalar] = "is_scalar",
  [anon_sym_is_integer] = "is_integer",
  [anon_sym_is_signed_LPAREN] = "is_signed(",
  [anon_sym_is_unsigned_LPAREN] = "is_unsigned(",
  [anon_sym_are_compatible] = "are_compatible",
  [anon_sym_conv_loaded_int] = "conv_loaded_int",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DeriveCap] = "DeriveCap",
  [aux_sym_pure_memop_op_token1] = "pure_memop_op_token1",
  [anon_sym_CapAssignValue] = "CapAssignValue",
  [anon_sym_Ptr_tIntValue] = "Ptr_tIntValue",
  [anon_sym_PtrEq] = "PtrEq",
  [anon_sym_PtrNe] = "PtrNe",
  [anon_sym_PtrLt] = "PtrLt",
  [anon_sym_PtrGt] = "PtrGt",
  [anon_sym_PtrLe] = "PtrLe",
  [anon_sym_PtrGe] = "PtrGe",
  [anon_sym_Ptrdiff] = "Ptrdiff",
  [anon_sym_IntFromPtr] = "IntFromPtr",
  [anon_sym_PtrFromInt] = "PtrFromInt",
  [anon_sym_PtrValidForDeref] = "PtrValidForDeref",
  [anon_sym_PtrWellAligned] = "PtrWellAligned",
  [anon_sym_PtrArrayShift] = "PtrArrayShift",
  [aux_sym_memop_op_token1] = "memop_op_token1",
  [anon_sym_PtrMemberShift] = "PtrMemberShift",
  [anon_sym__] = "_",
  [anon_sym_unit] = "unit",
  [anon_sym_boolean] = "boolean",
  [anon_sym_ctype] = "ctype",
  [anon_sym_loaded] = "loaded",
  [anon_sym_storable] = "storable",
  [anon_sym_integer] = "integer",
  [anon_sym_floating] = "floating",
  [anon_sym_pointer] = "pointer",
  [anon_sym_array] = "array",
  [sym_memory_order] = "memory_order",
  [anon_sym_create_readonly] = "create_readonly",
  [anon_sym_create] = "create",
  [anon_sym_alloc] = "alloc",
  [anon_sym_free] = "free",
  [anon_sym_kill] = "kill",
  [anon_sym_store] = "store",
  [anon_sym_store_lock] = "store_lock",
  [anon_sym_load] = "load",
  [anon_sym_seq_rmw] = "seq_rmw",
  [anon_sym_seq_rmw_with_forward] = "seq_rmw_with_forward",
  [anon_sym_rmw] = "rmw",
  [anon_sym_fence] = "fence",
  [anon_sym_neg] = "neg",
  [sym_ub] = "ub",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_Array] = "Array",
  [anon_sym_Ivmax] = "Ivmax",
  [anon_sym_Ivmin] = "Ivmin",
  [anon_sym_Ivsizeof] = "Ivsizeof",
  [anon_sym_Ivalignof] = "Ivalignof",
  [anon_sym_Specified] = "Specified",
  [anon_sym_Unspecified] = "Unspecified",
  [anon_sym_Fvfromint] = "Fvfromint",
  [anon_sym_Ivfromfloat] = "Ivfromfloat",
  [anon_sym_IvCOMPL] = "IvCOMPL",
  [anon_sym_IvAND] = "IvAND",
  [anon_sym_IvOR] = "IvOR",
  [anon_sym_IvXOR] = "IvXOR",
  [sym_binary_operator] = "binary_operator",
  [sym_bool_literal] = "bool_literal",
  [anon_sym_IvMaxAlignment] = "IvMaxAlignment",
  [anon_sym_NULL] = "NULL",
  [anon_sym_Cfunction] = "Cfunction",
  [anon_sym_Unit] = "Unit",
  [sym_impl] = "impl",
  [anon_sym_ailname] = "ailname",
  [anon_sym_proc] = "proc",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_def_aggregate_declaration] = "def_aggregate_declaration",
  [sym_def_fields] = "def_fields",
  [sym_def_field] = "def_field",
  [sym_core_ctype] = "core_ctype",
  [sym_ctype] = "ctype",
  [sym_ctype_star] = "ctype_star",
  [sym_params] = "params",
  [sym_integer_type] = "integer_type",
  [sym_basic_type] = "basic_type",
  [sym_glob_ctype_attribute] = "glob_ctype_attribute",
  [sym_glob_declaration] = "glob_declaration",
  [sym_expr] = "expr",
  [sym_core_type] = "core_type",
  [sym_pexpr] = "pexpr",
  [sym_list_pexpr] = "list_pexpr",
  [sym_pure_memop_op] = "pure_memop_op",
  [sym_memop_op] = "memop_op",
  [sym_pattern] = "pattern",
  [sym_list_pattern] = "list_pattern",
  [sym_name] = "name",
  [sym_core_base_type] = "core_base_type",
  [sym_core_object_type] = "core_object_type",
  [sym_action] = "action",
  [sym_paction] = "paction",
  [sym_string] = "string",
  [sym_cstring] = "cstring",
  [sym_ctor] = "ctor",
  [sym_cabs_id] = "cabs_id",
  [sym_member] = "member",
  [sym_value] = "value",
  [sym_attribute] = "attribute",
  [sym_attribute_pair] = "attribute_pair",
  [sym_proc_declaration] = "proc_declaration",
  [sym_proc_full_declaration] = "proc_full_declaration",
  [sym_proc_forward_declaration] = "proc_forward_declaration",
  [sym_def_declaration] = "def_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_def_fields_repeat1] = "def_fields_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_integer_type_repeat1] = "integer_type_repeat1",
  [aux_sym_expr_repeat1] = "expr_repeat1",
  [aux_sym_expr_repeat2] = "expr_repeat2",
  [aux_sym_expr_repeat3] = "expr_repeat3",
  [aux_sym_expr_repeat4] = "expr_repeat4",
  [aux_sym_pexpr_repeat1] = "pexpr_repeat1",
  [aux_sym_pexpr_repeat2] = "pexpr_repeat2",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_core_base_type_repeat1] = "core_base_type_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_proc_full_declaration_repeat1] = "proc_full_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_int_const] = sym_int_const,
  [sym_floating_const] = sym_floating_const,
  [sym_sym] = sym_sym,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym__Atomic] = anon_sym__Atomic,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN_STAR_RPAREN] = anon_sym_LPAREN_STAR_RPAREN,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [aux_sym_integer_type_token1] = aux_sym_integer_type_token1,
  [sym_floating_type] = sym_floating_type,
  [anon_sym_ail_ctype] = anon_sym_ail_ctype,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_glob] = anon_sym_glob,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_memop] = anon_sym_memop,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pcall] = anon_sym_pcall,
  [anon_sym_ccall] = anon_sym_ccall,
  [anon_sym_unseq] = anon_sym_unseq,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_bound] = anon_sym_bound,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_nd] = anon_sym_nd,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_eff] = anon_sym_eff,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_CivNULLcap] = anon_sym_CivNULLcap,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_array_shift] = anon_sym_array_shift,
  [anon_sym_member_shift] = anon_sym_member_shift,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_cfunction] = anon_sym_cfunction,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_is_scalar] = anon_sym_is_scalar,
  [anon_sym_is_integer] = anon_sym_is_integer,
  [anon_sym_is_signed_LPAREN] = anon_sym_is_signed_LPAREN,
  [anon_sym_is_unsigned_LPAREN] = anon_sym_is_unsigned_LPAREN,
  [anon_sym_are_compatible] = anon_sym_are_compatible,
  [anon_sym_conv_loaded_int] = anon_sym_conv_loaded_int,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DeriveCap] = anon_sym_DeriveCap,
  [aux_sym_pure_memop_op_token1] = aux_sym_pure_memop_op_token1,
  [anon_sym_CapAssignValue] = anon_sym_CapAssignValue,
  [anon_sym_Ptr_tIntValue] = anon_sym_Ptr_tIntValue,
  [anon_sym_PtrEq] = anon_sym_PtrEq,
  [anon_sym_PtrNe] = anon_sym_PtrNe,
  [anon_sym_PtrLt] = anon_sym_PtrLt,
  [anon_sym_PtrGt] = anon_sym_PtrGt,
  [anon_sym_PtrLe] = anon_sym_PtrLe,
  [anon_sym_PtrGe] = anon_sym_PtrGe,
  [anon_sym_Ptrdiff] = anon_sym_Ptrdiff,
  [anon_sym_IntFromPtr] = anon_sym_IntFromPtr,
  [anon_sym_PtrFromInt] = anon_sym_PtrFromInt,
  [anon_sym_PtrValidForDeref] = anon_sym_PtrValidForDeref,
  [anon_sym_PtrWellAligned] = anon_sym_PtrWellAligned,
  [anon_sym_PtrArrayShift] = anon_sym_PtrArrayShift,
  [aux_sym_memop_op_token1] = aux_sym_memop_op_token1,
  [anon_sym_PtrMemberShift] = anon_sym_PtrMemberShift,
  [anon_sym__] = anon_sym__,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_ctype] = anon_sym_ctype,
  [anon_sym_loaded] = anon_sym_loaded,
  [anon_sym_storable] = anon_sym_storable,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_pointer] = anon_sym_pointer,
  [anon_sym_array] = anon_sym_array,
  [sym_memory_order] = sym_memory_order,
  [anon_sym_create_readonly] = anon_sym_create_readonly,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_store_lock] = anon_sym_store_lock,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_seq_rmw] = anon_sym_seq_rmw,
  [anon_sym_seq_rmw_with_forward] = anon_sym_seq_rmw_with_forward,
  [anon_sym_rmw] = anon_sym_rmw,
  [anon_sym_fence] = anon_sym_fence,
  [anon_sym_neg] = anon_sym_neg,
  [sym_ub] = sym_ub,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Ivmax] = anon_sym_Ivmax,
  [anon_sym_Ivmin] = anon_sym_Ivmin,
  [anon_sym_Ivsizeof] = anon_sym_Ivsizeof,
  [anon_sym_Ivalignof] = anon_sym_Ivalignof,
  [anon_sym_Specified] = anon_sym_Specified,
  [anon_sym_Unspecified] = anon_sym_Unspecified,
  [anon_sym_Fvfromint] = anon_sym_Fvfromint,
  [anon_sym_Ivfromfloat] = anon_sym_Ivfromfloat,
  [anon_sym_IvCOMPL] = anon_sym_IvCOMPL,
  [anon_sym_IvAND] = anon_sym_IvAND,
  [anon_sym_IvOR] = anon_sym_IvOR,
  [anon_sym_IvXOR] = anon_sym_IvXOR,
  [sym_binary_operator] = sym_binary_operator,
  [sym_bool_literal] = sym_bool_literal,
  [anon_sym_IvMaxAlignment] = anon_sym_IvMaxAlignment,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_Cfunction] = anon_sym_Cfunction,
  [anon_sym_Unit] = anon_sym_Unit,
  [sym_impl] = sym_impl,
  [anon_sym_ailname] = anon_sym_ailname,
  [anon_sym_proc] = anon_sym_proc,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_def_aggregate_declaration] = sym_def_aggregate_declaration,
  [sym_def_fields] = sym_def_fields,
  [sym_def_field] = sym_def_field,
  [sym_core_ctype] = sym_core_ctype,
  [sym_ctype] = sym_ctype,
  [sym_ctype_star] = sym_ctype_star,
  [sym_params] = sym_params,
  [sym_integer_type] = sym_integer_type,
  [sym_basic_type] = sym_basic_type,
  [sym_glob_ctype_attribute] = sym_glob_ctype_attribute,
  [sym_glob_declaration] = sym_glob_declaration,
  [sym_expr] = sym_expr,
  [sym_core_type] = sym_core_type,
  [sym_pexpr] = sym_pexpr,
  [sym_list_pexpr] = sym_list_pexpr,
  [sym_pure_memop_op] = sym_pure_memop_op,
  [sym_memop_op] = sym_memop_op,
  [sym_pattern] = sym_pattern,
  [sym_list_pattern] = sym_list_pattern,
  [sym_name] = sym_name,
  [sym_core_base_type] = sym_core_base_type,
  [sym_core_object_type] = sym_core_object_type,
  [sym_action] = sym_action,
  [sym_paction] = sym_paction,
  [sym_string] = sym_string,
  [sym_cstring] = sym_cstring,
  [sym_ctor] = sym_ctor,
  [sym_cabs_id] = sym_cabs_id,
  [sym_member] = sym_member,
  [sym_value] = sym_value,
  [sym_attribute] = sym_attribute,
  [sym_attribute_pair] = sym_attribute_pair,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym_proc_full_declaration] = sym_proc_full_declaration,
  [sym_proc_forward_declaration] = sym_proc_forward_declaration,
  [sym_def_declaration] = sym_def_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_def_fields_repeat1] = aux_sym_def_fields_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_integer_type_repeat1] = aux_sym_integer_type_repeat1,
  [aux_sym_expr_repeat1] = aux_sym_expr_repeat1,
  [aux_sym_expr_repeat2] = aux_sym_expr_repeat2,
  [aux_sym_expr_repeat3] = aux_sym_expr_repeat3,
  [aux_sym_expr_repeat4] = aux_sym_expr_repeat4,
  [aux_sym_pexpr_repeat1] = aux_sym_pexpr_repeat1,
  [aux_sym_pexpr_repeat2] = aux_sym_pexpr_repeat2,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_core_base_type_repeat1] = aux_sym_core_base_type_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_proc_full_declaration_repeat1] = aux_sym_proc_full_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_floating_const] = {
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
  [anon_sym_volatile] = {
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
  [anon_sym_LPAREN_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_floating_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ail_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CivNULLcap] = {
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
  [anon_sym_array_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_signed_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_unsigned_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are_compatible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_conv_loaded_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveCap] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pure_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CapAssignValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr_tIntValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrEq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrNe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptrdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IntFromPtr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrFromInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrValidForDeref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrWellAligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrArrayShift] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PtrMemberShift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [sym_memory_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_create_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw_with_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [sym_ub] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivsizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivalignof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Specified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unspecified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fvfromint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivfromfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvCOMPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvXOR] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IvMaxAlignment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [sym_impl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ailname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
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
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_ctype_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_core_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_pure_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_core_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_core_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_paction] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_cstring] = {
    .visible = true,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_cabs_id] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_full_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_forward_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_declaration] = {
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
  [aux_sym_integer_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_base_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_full_declaration_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 7,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 27,
  [38] = 13,
  [39] = 39,
  [40] = 25,
  [41] = 41,
  [42] = 39,
  [43] = 21,
  [44] = 28,
  [45] = 41,
  [46] = 35,
  [47] = 47,
  [48] = 31,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 15,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 29,
  [60] = 60,
  [61] = 61,
  [62] = 50,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 24,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 101,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 110,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 110,
  [124] = 124,
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 129,
  [137] = 134,
  [138] = 127,
  [139] = 139,
  [140] = 120,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 145,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 146,
  [154] = 154,
  [155] = 146,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 156,
  [167] = 157,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 159,
  [177] = 144,
  [178] = 143,
  [179] = 151,
  [180] = 180,
  [181] = 152,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 160,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 150,
  [215] = 215,
  [216] = 212,
  [217] = 217,
  [218] = 218,
  [219] = 215,
  [220] = 220,
  [221] = 215,
  [222] = 222,
  [223] = 212,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 175,
  [228] = 184,
  [229] = 170,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 171,
  [234] = 234,
  [235] = 186,
  [236] = 236,
  [237] = 180,
  [238] = 174,
  [239] = 239,
  [240] = 172,
  [241] = 173,
  [242] = 182,
  [243] = 161,
  [244] = 183,
  [245] = 245,
  [246] = 246,
  [247] = 162,
  [248] = 248,
  [249] = 249,
  [250] = 164,
  [251] = 251,
  [252] = 185,
  [253] = 253,
  [254] = 169,
  [255] = 165,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 264,
  [268] = 268,
  [269] = 269,
  [270] = 268,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 256,
  [275] = 275,
  [276] = 266,
  [277] = 277,
  [278] = 273,
  [279] = 279,
  [280] = 266,
  [281] = 261,
  [282] = 160,
  [283] = 275,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 293,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 289,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 324,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 325,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 334,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 337,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 355,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 323,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 345,
  [370] = 308,
  [371] = 328,
  [372] = 372,
  [373] = 318,
  [374] = 320,
  [375] = 375,
  [376] = 333,
  [377] = 377,
  [378] = 362,
  [379] = 379,
  [380] = 380,
  [381] = 349,
  [382] = 368,
  [383] = 359,
  [384] = 384,
  [385] = 365,
  [386] = 375,
  [387] = 359,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 363,
  [393] = 352,
  [394] = 343,
  [395] = 355,
  [396] = 396,
  [397] = 397,
  [398] = 313,
  [399] = 311,
  [400] = 384,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 329,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 156,
  [425] = 425,
  [426] = 426,
  [427] = 157,
  [428] = 159,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 144,
  [434] = 143,
  [435] = 151,
  [436] = 152,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 426,
  [455] = 455,
  [456] = 451,
  [457] = 457,
  [458] = 443,
  [459] = 459,
  [460] = 460,
  [461] = 452,
  [462] = 453,
  [463] = 457,
  [464] = 449,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 533,
  [551] = 551,
  [552] = 523,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 509,
  [557] = 508,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 540,
  [563] = 563,
  [564] = 564,
  [565] = 546,
  [566] = 566,
  [567] = 567,
  [568] = 560,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 547,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 573,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 506,
  [589] = 544,
  [590] = 590,
  [591] = 591,
  [592] = 547,
  [593] = 593,
  [594] = 594,
  [595] = 533,
  [596] = 596,
  [597] = 572,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 519,
  [603] = 603,
  [604] = 604,
  [605] = 503,
  [606] = 606,
  [607] = 607,
  [608] = 582,
  [609] = 609,
  [610] = 539,
  [611] = 544,
  [612] = 612,
  [613] = 613,
  [614] = 591,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 580,
  [619] = 619,
  [620] = 617,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 609,
  [625] = 625,
  [626] = 531,
  [627] = 526,
  [628] = 521,
  [629] = 520,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 515,
  [634] = 549,
  [635] = 553,
  [636] = 636,
  [637] = 594,
  [638] = 606,
  [639] = 466,
  [640] = 609,
  [641] = 532,
  [642] = 642,
  [643] = 643,
  [644] = 511,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 516,
  [650] = 650,
  [651] = 604,
  [652] = 530,
  [653] = 529,
  [654] = 525,
  [655] = 524,
  [656] = 510,
  [657] = 657,
  [658] = 613,
  [659] = 659,
  [660] = 660,
  [661] = 528,
  [662] = 662,
  [663] = 527,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(830);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1276);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*') ADVANCE(1284);
      if (lookahead == '+' ||
          lookahead == '^') ADVANCE(1485);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(1384);
      if (lookahead == '.') ADVANCE(1381);
      if (lookahead == '/') ADVANCE(1490);
      if (lookahead == ':') ADVANCE(1268);
      if (lookahead == ';') ADVANCE(1359);
      if (lookahead == '<') ADVANCE(1487);
      if (lookahead == '=') ADVANCE(1335);
      if (lookahead == '>') ADVANCE(1488);
      if (lookahead == 'A') ADVANCE(655);
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(257);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead == 'F') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(529);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(462);
      if (lookahead == 'S') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(657);
      if (lookahead == 'U') ADVANCE(517);
      if (lookahead == '[') ADVANCE(1273);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == '_') ADVANCE(1420);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'k') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'u') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(579);
      if (lookahead == 'w') ADVANCE(263);
      if (lookahead == '{') ADVANCE(1388);
      if (lookahead == '|') ADVANCE(1351);
      if (lookahead == '}') ADVANCE(1389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(831);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1458);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1276);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*') ADVANCE(1284);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == 'a') ADVANCE(1193);
      if (lookahead == 'b') ADVANCE(1148);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead == 'f') ADVANCE(1081);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == 'l') ADVANCE(1157);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == 's') ADVANCE(1221);
      if (lookahead == 'u') ADVANCE(1118);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1276);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*') ADVANCE(1284);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(1385);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(1335);
      if (lookahead == 'A') ADVANCE(1177);
      if (lookahead == 'B') ADVANCE(1026);
      if (lookahead == 'C') ADVANCE(999);
      if (lookahead == 'E') ADVANCE(1106);
      if (lookahead == 'F') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(1104);
      if (lookahead == 'N') ADVANCE(872);
      if (lookahead == 'P') ADVANCE(1069);
      if (lookahead == 'S') ADVANCE(856);
      if (lookahead == 'T') ADVANCE(1179);
      if (lookahead == 'U') ADVANCE(1097);
      if (lookahead == '[') ADVANCE(1273);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == '_') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 'l') ADVANCE(957);
      if (lookahead == 'm') ADVANCE(948);
      if (lookahead == 'n') ADVANCE(1137);
      if (lookahead == 's') ADVANCE(1027);
      if (lookahead == 'u') ADVANCE(1098);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(1385);
      if (lookahead == '.') ADVANCE(822);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(1177);
      if (lookahead == 'B') ADVANCE(1026);
      if (lookahead == 'C') ADVANCE(999);
      if (lookahead == 'E') ADVANCE(1106);
      if (lookahead == 'F') ADVANCE(894);
      if (lookahead == 'I') ADVANCE(1104);
      if (lookahead == 'N') ADVANCE(872);
      if (lookahead == 'P') ADVANCE(1069);
      if (lookahead == 'S') ADVANCE(856);
      if (lookahead == 'T') ADVANCE(1179);
      if (lookahead == 'U') ADVANCE(1097);
      if (lookahead == '[') ADVANCE(1273);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == '_') ADVANCE(844);
      if (lookahead == 'a') ADVANCE(1067);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead == 'e') ADVANCE(1182);
      if (lookahead == 'i') ADVANCE(994);
      if (lookahead == 'l') ADVANCE(957);
      if (lookahead == 'm') ADVANCE(948);
      if (lookahead == 'n') ADVANCE(1137);
      if (lookahead == 's') ADVANCE(1028);
      if (lookahead == 'u') ADVANCE(1126);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(1394);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1395);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(1334);
      if (lookahead == 'A') ADVANCE(1178);
      if (lookahead == 'F') ADVANCE(1248);
      if (lookahead == 'I') ADVANCE(1250);
      if (lookahead == 'S') ADVANCE(1163);
      if (lookahead == 'U') ADVANCE(1113);
      if (lookahead == '[') ADVANCE(1273);
      if (lookahead == '_') ADVANCE(1421);
      if (lookahead == 's') ADVANCE(1238);
      if (lookahead == 'w') ADVANCE(975);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1267);
      if (lookahead == 'A') ADVANCE(1178);
      if (lookahead == 'F') ADVANCE(1248);
      if (lookahead == 'I') ADVANCE(1250);
      if (lookahead == 'S') ADVANCE(1163);
      if (lookahead == 'U') ADVANCE(1113);
      if (lookahead == '[') ADVANCE(1273);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == '_') ADVANCE(1421);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '^') ADVANCE(1485);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(1486);
      if (lookahead == '/') ADVANCE(1490);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(1488);
      if (lookahead == '>') ADVANCE(1488);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(1351);
      if (lookahead == '}') ADVANCE(1389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '_') ADVANCE(1289);
      if (lookahead == 'c') ADVANCE(1317);
      if (lookahead == 'd') ADVANCE(1313);
      if (lookahead == 'f') ADVANCE(1307);
      if (lookahead == 'l') ADVANCE(1318);
      if (lookahead == 's') ADVANCE(1323);
      if (lookahead == 'u') ADVANCE(1309);
      if (lookahead == 'v') ADVANCE(1314);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(1222);
      if (lookahead == 'B') ADVANCE(1026);
      if (lookahead == 'C') ADVANCE(1022);
      if (lookahead == 'E') ADVANCE(1106);
      if (lookahead == 'I') ADVANCE(1105);
      if (lookahead == 'P') ADVANCE(1069);
      if (lookahead == 'S') ADVANCE(857);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == 'a') ADVANCE(1068);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == 'c') ADVANCE(1209);
      if (lookahead == 's') ADVANCE(1028);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(1285);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '}') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1403);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(1288);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(181);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(708);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(1485);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1401);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(1401);
      if (lookahead == '=') ADVANCE(841);
      END_STATE();
    case 29:
      if (lookahead == '<') ADVANCE(825);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(1352);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(716);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'X') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(688);
      if (lookahead == 'E') ADVANCE(642);
      if (lookahead == 'F') ADVANCE(691);
      if (lookahead == 'G') ADVANCE(238);
      if (lookahead == 'L') ADVANCE(239);
      if (lookahead == 'M') ADVANCE(266);
      if (lookahead == 'N') ADVANCE(240);
      if (lookahead == 'V') ADVANCE(145);
      if (lookahead == 'W') ADVANCE(318);
      if (lookahead == '_') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(493);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(494);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(1479);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(319);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(606);
      END_STATE();
    case 43:
      if (lookahead == 'F') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(543);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(549);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(1494);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(1477);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(1501);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'P') ADVANCE(753);
      END_STATE();
    case 62:
      if (lookahead == 'R') ADVANCE(1481);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(1483);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(386);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(387);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'p') ADVANCE(490);
      END_STATE();
    case 68:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 70:
      if (lookahead == 'V') ADVANCE(133);
      END_STATE();
    case 71:
      if (lookahead == 'V') ADVANCE(157);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(821);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(178);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(823);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(824);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(565);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(712);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(165);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(797);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(163);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(217);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(191);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(609);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(354);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(404);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(569);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(665);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(484);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(679);
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(709);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(560);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(711);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(451);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(772);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(715);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(718);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(719);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'f') ADVANCE(782);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(791);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(790);
      if (lookahead == 'h') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == 't') ADVANCE(812);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == 't') ADVANCE(817);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(804);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'v') ADVANCE(347);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(802);
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == 'i') ADVANCE(819);
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(809);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead == 'u') ADVANCE(669);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(755);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(1336);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(814);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(476);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(300);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(450);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(1504);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(1445);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(1282);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(789);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(617);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(730);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(733);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(765);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(767);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(1365);
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1365);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1353);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1451);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1270);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1362);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1429);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1374);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1500);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1442);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1375);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1469);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1471);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1416);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1453);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1450);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(584);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'm') ADVANCE(798);
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1347);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1338);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1363);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1411);
      if (lookahead == 't') ADVANCE(1409);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1410);
      if (lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1455);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1448);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1331);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1500);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1503);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1431);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1280);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1333);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1405);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1426);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == 'm') ADVANCE(798);
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(1344);
      if (lookahead == 'n') ADVANCE(1343);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(1344);
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(1350);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(833);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(1367);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1368);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1500);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1412);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(1465);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(1467);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(1415);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(409);
      if (lookahead == 'w') ADVANCE(433);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(693);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(340);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(737);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(738);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(739);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(741);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(417);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(608);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(419);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(491);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(420);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(426);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(1456);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(1360);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(1435);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(547);
      if (lookahead == 'z') ADVANCE(274);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(572);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(561);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 378:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 379:
      if (lookahead == 'g') ADVANCE(574);
      END_STATE();
    case 380:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(425);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(436);
      END_STATE();
    case 388:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 389:
      if (lookahead == 'h') ADVANCE(306);
      END_STATE();
    case 390:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 's') ADVANCE(640);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(379);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(775);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 452:
      if (lookahead == 'k') ADVANCE(1357);
      END_STATE();
    case 453:
      if (lookahead == 'k') ADVANCE(1449);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(1447);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(1355);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(1354);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(1442);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(786);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(787);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(620);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(799);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(636);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(356);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 511:
      if (lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 512:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 513:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 514:
      if (lookahead == 'm') ADVANCE(435);
      END_STATE();
    case 515:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 516:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(1343);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1364);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(1346);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(1463);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(1500);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(1496);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(1386);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(732);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(816);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 't') ADVANCE(1422);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(1339);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(1402);
      END_STATE();
    case 628:
      if (lookahead == 'p') ADVANCE(1372);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(684);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 641:
      if (lookahead == 'q') ADVANCE(94);
      END_STATE();
    case 642:
      if (lookahead == 'q') ADVANCE(1406);
      END_STATE();
    case 643:
      if (lookahead == 'q') ADVANCE(1356);
      END_STATE();
    case 644:
      if (lookahead == 'q') ADVANCE(74);
      END_STATE();
    case 645:
      if (lookahead == 'q') ADVANCE(91);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(1366);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(1370);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(1437);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(1390);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(1413);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(1433);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(801);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(700);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(596);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(727);
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(1500);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(762);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(731);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(759);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(1341);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(1382);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(1498);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(1278);
      if (lookahead == 'u') ADVANCE(506);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(1500);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(835);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(1442);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(1286);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(1473);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(1414);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(1376);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(1378);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(1417);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(1492);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(1419);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(1398);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(652);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(815);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(818);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 781:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 782:
      if (lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 783:
      if (lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 784:
      if (lookahead == 'u') ADVANCE(630);
      END_STATE();
    case 785:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 786:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 787:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 788:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 789:
      if (lookahead == 'u') ADVANCE(774);
      END_STATE();
    case 790:
      if (lookahead == 'u') ADVANCE(577);
      END_STATE();
    case 791:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 792:
      if (lookahead == 'v') ADVANCE(422);
      END_STATE();
    case 793:
      if (lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 794:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 795:
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 796:
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 797:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 798:
      if (lookahead == 'w') ADVANCE(1454);
      END_STATE();
    case 799:
      if (lookahead == 'w') ADVANCE(1452);
      END_STATE();
    case 800:
      if (lookahead == 'w') ADVANCE(413);
      END_STATE();
    case 801:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 802:
      if (lookahead == 'x') ADVANCE(1461);
      END_STATE();
    case 803:
      if (lookahead == 'x') ADVANCE(1500);
      END_STATE();
    case 804:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 805:
      if (lookahead == 'x') ADVANCE(277);
      END_STATE();
    case 806:
      if (lookahead == 'x') ADVANCE(288);
      END_STATE();
    case 807:
      if (lookahead == 'y') ADVANCE(1459);
      END_STATE();
    case 808:
      if (lookahead == 'y') ADVANCE(1440);
      END_STATE();
    case 809:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 810:
      if (lookahead == 'y') ADVANCE(1443);
      END_STATE();
    case 811:
      if (lookahead == 'y') ADVANCE(1439);
      END_STATE();
    case 812:
      if (lookahead == 'y') ADVANCE(629);
      END_STATE();
    case 813:
      if (lookahead == 'y') ADVANCE(631);
      END_STATE();
    case 814:
      if (lookahead == 'y') ADVANCE(757);
      END_STATE();
    case 815:
      if (lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 816:
      if (lookahead == 'y') ADVANCE(632);
      END_STATE();
    case 817:
      if (lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 818:
      if (lookahead == 'y') ADVANCE(635);
      END_STATE();
    case 819:
      if (lookahead == 'z') ADVANCE(274);
      END_STATE();
    case 820:
      if (lookahead == 'z') ADVANCE(279);
      END_STATE();
    case 821:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1485);
      END_STATE();
    case 822:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 823:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 824:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1502);
      END_STATE();
    case 825:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 826:
      if (eof) ADVANCE(830);
      if (lookahead == '\'') ADVANCE(1269);
      if (lookahead == '(') ADVANCE(1276);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*') ADVANCE(1284);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1267);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'g') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(662);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(826)
      END_STATE();
    case 827:
      if (eof) ADVANCE(830);
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1485);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(1486);
      if (lookahead == '.') ADVANCE(1380);
      if (lookahead == '/') ADVANCE(1490);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(1488);
      if (lookahead == '=') ADVANCE(1489);
      if (lookahead == '>') ADVANCE(1488);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'B') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(381);
      if (lookahead == 'E') ADVANCE(530);
      if (lookahead == 'I') ADVANCE(570);
      if (lookahead == 'P') ADVANCE(461);
      if (lookahead == 'S') ADVANCE(44);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(614);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'g') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'k') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(1389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(827)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(843);
      END_STATE();
    case 828:
      if (eof) ADVANCE(830);
      if (lookahead == '(') ADVANCE(1275);
      if (lookahead == ')') ADVANCE(1277);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '^') ADVANCE(1485);
      if (lookahead == ',') ADVANCE(1287);
      if (lookahead == '-') ADVANCE(1486);
      if (lookahead == '/') ADVANCE(1490);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(1488);
      if (lookahead == '>') ADVANCE(1488);
      if (lookahead == '[') ADVANCE(1272);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1274);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'b') ADVANCE(605);
      if (lookahead == 'c') ADVANCE(776);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'g') ADVANCE(463);
      if (lookahead == 'i') ADVANCE(575);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(1351);
      if (lookahead == '}') ADVANCE(1389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(828)
      END_STATE();
    case 829:
      if (eof) ADVANCE(830);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(972);
      if (lookahead == 'g') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1187);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(829)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(846);
      if (lookahead == '_') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(844);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '(') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '.') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(864);
      if (lookahead == 'C') ADVANCE(866);
      if (lookahead == 'M') ADVANCE(892);
      if (lookahead == 'O') ADVANCE(869);
      if (lookahead == 'X') ADVANCE(867);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(1191);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(864);
      if (lookahead == 'C') ADVANCE(866);
      if (lookahead == 'O') ADVANCE(869);
      if (lookahead == 'X') ADVANCE(867);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(1191);
      if (lookahead == 'm') ADVANCE(896);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'A') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'D') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(871);
      if (lookahead == 'p') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'H') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'L') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'M') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'N') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'O') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'P') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'R') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'U') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == '_') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1202);
      if (lookahead == 'f') ADVANCE(1247);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1078);
      if (lookahead == 'v') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'i') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1254);
      if (lookahead == 'i') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'a') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'b') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == 'i') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'c') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == 'i') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'd') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'e') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 's') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1244);
      if (lookahead == 'h') ADVANCE(908);
      if (lookahead == 'i') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'w') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'f') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'g') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'h') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1263);
      if (lookahead == 't') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1213);
      if (lookahead == 's') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1129);
      if (lookahead == 's') ADVANCE(922);
      if (lookahead == 'u') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'i') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'k') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead == 'r') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'l') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'm') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead == 'v') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'n') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1100);
      if (lookahead == 't') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1190);
      if (lookahead == 'r') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'o') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'p') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1181);
      if (lookahead == 't') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'r') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 's') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 't') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'u') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'v') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'x') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'y') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1266);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_sym);
      if (lookahead == 'z') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1266);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_sym);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1401);
      if (lookahead == '=') ADVANCE(841);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1400);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(14);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'A') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == '_') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'a') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'b') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'c') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'd') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'e') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'g') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1296);
      if (lookahead == 'l') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'i') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'l') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'm') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'o') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'r') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 's') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 't') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (lookahead == 'u') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_integer_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1352);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_is_signed_LPAREN);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_is_unsigned_LPAREN);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_conv_loaded_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1403);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1418);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(843);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(509);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(699);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(692);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(471);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(800);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(825);
      if (lookahead == '=') ADVANCE(1485);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1485);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1352);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1485);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1501);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1502);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 827},
  [73] = {.lex_state = 827},
  [74] = {.lex_state = 827},
  [75] = {.lex_state = 827},
  [76] = {.lex_state = 827},
  [77] = {.lex_state = 827},
  [78] = {.lex_state = 827},
  [79] = {.lex_state = 827},
  [80] = {.lex_state = 827},
  [81] = {.lex_state = 827},
  [82] = {.lex_state = 827},
  [83] = {.lex_state = 827},
  [84] = {.lex_state = 827},
  [85] = {.lex_state = 827},
  [86] = {.lex_state = 827},
  [87] = {.lex_state = 827},
  [88] = {.lex_state = 827},
  [89] = {.lex_state = 827},
  [90] = {.lex_state = 827},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 828},
  [107] = {.lex_state = 828},
  [108] = {.lex_state = 828},
  [109] = {.lex_state = 828},
  [110] = {.lex_state = 828},
  [111] = {.lex_state = 828},
  [112] = {.lex_state = 828},
  [113] = {.lex_state = 828},
  [114] = {.lex_state = 828},
  [115] = {.lex_state = 828},
  [116] = {.lex_state = 828},
  [117] = {.lex_state = 828},
  [118] = {.lex_state = 828},
  [119] = {.lex_state = 828},
  [120] = {.lex_state = 828},
  [121] = {.lex_state = 828},
  [122] = {.lex_state = 828},
  [123] = {.lex_state = 828},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 828},
  [126] = {.lex_state = 828},
  [127] = {.lex_state = 828},
  [128] = {.lex_state = 828},
  [129] = {.lex_state = 828},
  [130] = {.lex_state = 828},
  [131] = {.lex_state = 828},
  [132] = {.lex_state = 828},
  [133] = {.lex_state = 828},
  [134] = {.lex_state = 828},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 828},
  [137] = {.lex_state = 828},
  [138] = {.lex_state = 828},
  [139] = {.lex_state = 828},
  [140] = {.lex_state = 828},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 827},
  [144] = {.lex_state = 827},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 827},
  [152] = {.lex_state = 827},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 827},
  [157] = {.lex_state = 827},
  [158] = {.lex_state = 827},
  [159] = {.lex_state = 827},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 11},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 11},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 11},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 828},
  [209] = {.lex_state = 826},
  [210] = {.lex_state = 829},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 827},
  [213] = {.lex_state = 829},
  [214] = {.lex_state = 828},
  [215] = {.lex_state = 827},
  [216] = {.lex_state = 827},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 827},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 827},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 827},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 828},
  [228] = {.lex_state = 828},
  [229] = {.lex_state = 828},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 828},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 828},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 828},
  [238] = {.lex_state = 828},
  [239] = {.lex_state = 828},
  [240] = {.lex_state = 828},
  [241] = {.lex_state = 828},
  [242] = {.lex_state = 828},
  [243] = {.lex_state = 828},
  [244] = {.lex_state = 828},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 828},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 828},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 828},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 828},
  [255] = {.lex_state = 828},
  [256] = {.lex_state = 828},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 826},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 828},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 828},
  [264] = {.lex_state = 828},
  [265] = {.lex_state = 828},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 828},
  [268] = {.lex_state = 828},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 828},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 828},
  [274] = {.lex_state = 828},
  [275] = {.lex_state = 828},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 829},
  [278] = {.lex_state = 828},
  [279] = {.lex_state = 828},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 829},
  [283] = {.lex_state = 828},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 828},
  [286] = {.lex_state = 828},
  [287] = {.lex_state = 828},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 828},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 828},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 828},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 13},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 13},
  [310] = {.lex_state = 828},
  [311] = {.lex_state = 828},
  [312] = {.lex_state = 13},
  [313] = {.lex_state = 828},
  [314] = {.lex_state = 828},
  [315] = {.lex_state = 828},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 828},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 828},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 828},
  [323] = {.lex_state = 828},
  [324] = {.lex_state = 828},
  [325] = {.lex_state = 13},
  [326] = {.lex_state = 828},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 827},
  [329] = {.lex_state = 828},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 828},
  [334] = {.lex_state = 828},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 828},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 13},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 828},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 828},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 828},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 827},
  [362] = {.lex_state = 828},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 828},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 828},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 827},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 828},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 828},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 828},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 828},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 828},
  [391] = {.lex_state = 828},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 828},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 828},
  [399] = {.lex_state = 828},
  [400] = {.lex_state = 828},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 828},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 828},
  [407] = {.lex_state = 828},
  [408] = {.lex_state = 828},
  [409] = {.lex_state = 828},
  [410] = {.lex_state = 828},
  [411] = {.lex_state = 13},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 9},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 827},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 9},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 13},
  [424] = {.lex_state = 9},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 9},
  [428] = {.lex_state = 9},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 5},
  [433] = {.lex_state = 9},
  [434] = {.lex_state = 9},
  [435] = {.lex_state = 9},
  [436] = {.lex_state = 9},
  [437] = {.lex_state = 13},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 827},
  [443] = {.lex_state = 9},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 827},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 827},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 13},
  [455] = {.lex_state = 9},
  [456] = {.lex_state = 827},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 827},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 827},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 5},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 13},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 13},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 13},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 10},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 5},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 6},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 10},
  [501] = {.lex_state = 13},
  [502] = {.lex_state = 5},
  [503] = {.lex_state = 5},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 5},
  [508] = {.lex_state = 10},
  [509] = {.lex_state = 10},
  [510] = {.lex_state = 13},
  [511] = {.lex_state = 13},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 13},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 13},
  [518] = {.lex_state = 9},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 10},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 827},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 10},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 10},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 13},
  [543] = {.lex_state = 10},
  [544] = {.lex_state = 13},
  [545] = {.lex_state = 10},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 13},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 5},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 5},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 827},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 5},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 5},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 13},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 19},
  [597] = {.lex_state = 10},
  [598] = {.lex_state = 13},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 13},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 827},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 5},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 5},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 13},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 13},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 9},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 10},
  [619] = {.lex_state = 13},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 5},
  [622] = {.lex_state = 13},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 10},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 827},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 827},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 10},
  [643] = {.lex_state = 13},
  [644] = {.lex_state = 13},
  [645] = {.lex_state = 10},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 5},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 13},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 13},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 13},
  [663] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_int_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym__Atomic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_floating_type] = ACTIONS(1),
    [anon_sym_ail_ctype] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_glob] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_memop] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pcall] = ACTIONS(1),
    [anon_sym_ccall] = ACTIONS(1),
    [anon_sym_unseq] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_bound] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_nd] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_eff] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_CivNULLcap] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_array_shift] = ACTIONS(1),
    [anon_sym_member_shift] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_cfunction] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_is_scalar] = ACTIONS(1),
    [anon_sym_is_integer] = ACTIONS(1),
    [anon_sym_is_signed_LPAREN] = ACTIONS(1),
    [anon_sym_is_unsigned_LPAREN] = ACTIONS(1),
    [anon_sym_are_compatible] = ACTIONS(1),
    [anon_sym_conv_loaded_int] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DeriveCap] = ACTIONS(1),
    [anon_sym_CapAssignValue] = ACTIONS(1),
    [anon_sym_Ptr_tIntValue] = ACTIONS(1),
    [anon_sym_PtrEq] = ACTIONS(1),
    [anon_sym_PtrNe] = ACTIONS(1),
    [anon_sym_PtrLt] = ACTIONS(1),
    [anon_sym_PtrGt] = ACTIONS(1),
    [anon_sym_PtrLe] = ACTIONS(1),
    [anon_sym_PtrGe] = ACTIONS(1),
    [anon_sym_Ptrdiff] = ACTIONS(1),
    [anon_sym_IntFromPtr] = ACTIONS(1),
    [anon_sym_PtrFromInt] = ACTIONS(1),
    [anon_sym_PtrValidForDeref] = ACTIONS(1),
    [anon_sym_PtrWellAligned] = ACTIONS(1),
    [anon_sym_PtrArrayShift] = ACTIONS(1),
    [aux_sym_memop_op_token1] = ACTIONS(1),
    [anon_sym_PtrMemberShift] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_ctype] = ACTIONS(1),
    [anon_sym_loaded] = ACTIONS(1),
    [anon_sym_storable] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_pointer] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [sym_memory_order] = ACTIONS(1),
    [anon_sym_create_readonly] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_store_lock] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_seq_rmw] = ACTIONS(1),
    [anon_sym_seq_rmw_with_forward] = ACTIONS(1),
    [anon_sym_rmw] = ACTIONS(1),
    [anon_sym_fence] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [sym_ub] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Ivmax] = ACTIONS(1),
    [anon_sym_Ivmin] = ACTIONS(1),
    [anon_sym_Ivsizeof] = ACTIONS(1),
    [anon_sym_Ivalignof] = ACTIONS(1),
    [anon_sym_Specified] = ACTIONS(1),
    [anon_sym_Unspecified] = ACTIONS(1),
    [anon_sym_Fvfromint] = ACTIONS(1),
    [anon_sym_Ivfromfloat] = ACTIONS(1),
    [anon_sym_IvCOMPL] = ACTIONS(1),
    [anon_sym_IvAND] = ACTIONS(1),
    [anon_sym_IvOR] = ACTIONS(1),
    [anon_sym_IvXOR] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [sym_bool_literal] = ACTIONS(1),
    [anon_sym_IvMaxAlignment] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_Cfunction] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [sym_impl] = ACTIONS(1),
    [anon_sym_ailname] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(647),
    [sym_declaration] = STATE(168),
    [sym_def_aggregate_declaration] = STATE(292),
    [sym_glob_declaration] = STATE(292),
    [sym_proc_declaration] = STATE(292),
    [sym_proc_full_declaration] = STATE(306),
    [sym_proc_forward_declaration] = STATE(306),
    [sym_def_declaration] = STATE(292),
    [aux_sym_source_file_repeat1] = STATE(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [anon_sym_glob] = ACTIONS(7),
    [anon_sym_proc] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_union,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(278), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [114] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(61), 1,
      anon_sym_struct,
    ACTIONS(63), 1,
      anon_sym_union,
    STATE(174), 1,
      sym_core_ctype,
    STATE(273), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [228] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(263), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [339] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(285), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [450] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(264), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [561] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(283), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [672] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_core_ctype,
    STATE(256), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [783] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(267), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [894] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_core_ctype,
    STATE(275), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1005] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_core_ctype,
    STATE(274), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1116] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(390), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1224] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(400), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1332] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(315), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1440] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(182), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1548] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(314), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1656] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(347), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1764] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(310), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1872] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(396), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1980] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(351), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2088] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(183), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2196] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(362), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2304] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(334), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2412] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(324), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2520] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(311), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2628] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(369), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2736] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(376), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2844] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(381), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2952] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_memop,
    ACTIONS(93), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_case,
    ACTIONS(99), 1,
      anon_sym_undef,
    ACTIONS(101), 1,
      anon_sym_error,
    ACTIONS(103), 1,
      anon_sym_CivNULLcap,
    ACTIONS(105), 1,
      anon_sym_array_shift,
    ACTIONS(107), 1,
      anon_sym_member_shift,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      anon_sym_are_compatible,
    ACTIONS(117), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(119), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(121), 1,
      anon_sym_NULL,
    ACTIONS(123), 1,
      anon_sym_Cfunction,
    STATE(227), 1,
      sym_pexpr,
    STATE(238), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(240), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(109), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(81), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3060] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(290), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3168] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(270), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3276] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(345), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3384] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(322), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3492] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(378), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3600] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(169), 1,
      sym_pexpr,
    STATE(174), 1,
      sym_core_ctype,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3708] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(285), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3816] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(333), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3924] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(384), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4032] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(398), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4140] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(399), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4248] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(409), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4356] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(313), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4464] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_memop,
    ACTIONS(93), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_case,
    ACTIONS(99), 1,
      anon_sym_undef,
    ACTIONS(101), 1,
      anon_sym_error,
    ACTIONS(103), 1,
      anon_sym_CivNULLcap,
    ACTIONS(105), 1,
      anon_sym_array_shift,
    ACTIONS(107), 1,
      anon_sym_member_shift,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      anon_sym_are_compatible,
    ACTIONS(117), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(119), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(121), 1,
      anon_sym_NULL,
    ACTIONS(123), 1,
      anon_sym_Cfunction,
    STATE(238), 1,
      sym_core_ctype,
    STATE(244), 1,
      sym_pexpr,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(240), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(109), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(81), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4572] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(349), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4680] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(329), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4788] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_memop,
    ACTIONS(93), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_case,
    ACTIONS(99), 1,
      anon_sym_undef,
    ACTIONS(101), 1,
      anon_sym_error,
    ACTIONS(103), 1,
      anon_sym_CivNULLcap,
    ACTIONS(105), 1,
      anon_sym_array_shift,
    ACTIONS(107), 1,
      anon_sym_member_shift,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      anon_sym_are_compatible,
    ACTIONS(117), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(119), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(121), 1,
      anon_sym_NULL,
    ACTIONS(123), 1,
      anon_sym_Cfunction,
    STATE(238), 1,
      sym_core_ctype,
    STATE(254), 1,
      sym_pexpr,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(240), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(109), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(81), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4896] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(326), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5004] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(268), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5112] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(294), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5220] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(364), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5328] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(319), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5436] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(265), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5544] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(286), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5652] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(301), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5760] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_memop,
    ACTIONS(93), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_case,
    ACTIONS(99), 1,
      anon_sym_undef,
    ACTIONS(101), 1,
      anon_sym_error,
    ACTIONS(103), 1,
      anon_sym_CivNULLcap,
    ACTIONS(105), 1,
      anon_sym_array_shift,
    ACTIONS(107), 1,
      anon_sym_member_shift,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      anon_sym_are_compatible,
    ACTIONS(117), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(119), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(121), 1,
      anon_sym_NULL,
    ACTIONS(123), 1,
      anon_sym_Cfunction,
    STATE(238), 1,
      sym_core_ctype,
    STATE(242), 1,
      sym_pexpr,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(240), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(109), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(81), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5868] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_memop,
    ACTIONS(93), 1,
      anon_sym_let,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_case,
    ACTIONS(99), 1,
      anon_sym_undef,
    ACTIONS(101), 1,
      anon_sym_error,
    ACTIONS(103), 1,
      anon_sym_CivNULLcap,
    ACTIONS(105), 1,
      anon_sym_array_shift,
    ACTIONS(107), 1,
      anon_sym_member_shift,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      anon_sym_are_compatible,
    ACTIONS(117), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(119), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(121), 1,
      anon_sym_NULL,
    ACTIONS(123), 1,
      anon_sym_Cfunction,
    STATE(238), 1,
      sym_core_ctype,
    STATE(239), 1,
      sym_pexpr,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(240), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(109), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(81), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5976] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(404), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6084] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(260), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6192] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(175), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6300] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(410), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6408] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(287), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6516] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(323), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6624] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6732] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(388), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6840] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(317), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6948] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7056] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(406), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7164] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(279), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7272] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(391), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7380] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(354), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7488] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_are_compatible,
    ACTIONS(51), 1,
      anon_sym_conv_loaded_int,
    ACTIONS(53), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(59), 1,
      anon_sym_Cfunction,
    STATE(174), 1,
      sym_core_ctype,
    STATE(336), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(172), 2,
      sym_list_pexpr,
      sym_value,
    STATE(602), 2,
      sym_name,
      sym_ctor,
    ACTIONS(43), 4,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7596] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(296), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7689] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(196), 1,
      sym_expr,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7779] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(197), 1,
      sym_expr,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7869] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(203), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7959] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(416), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8049] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(201), 1,
      sym_expr,
    STATE(202), 1,
      sym_action,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8139] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(420), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8229] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(448), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8319] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(257), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8409] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(205), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8499] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(259), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8589] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(272), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8679] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(269), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8769] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(204), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8859] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(271), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8949] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(402), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9039] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(284), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9129] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(331), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9219] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_pure,
    ACTIONS(131), 1,
      anon_sym_memop,
    ACTIONS(133), 1,
      anon_sym_let,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_case,
    ACTIONS(139), 1,
      anon_sym_pcall,
    ACTIONS(141), 1,
      anon_sym_ccall,
    ACTIONS(145), 1,
      anon_sym_bound,
    ACTIONS(147), 1,
      anon_sym_save,
    ACTIONS(149), 1,
      anon_sym_run,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    ACTIONS(175), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_paction,
    STATE(202), 1,
      sym_action,
    STATE(438), 1,
      sym_expr,
    ACTIONS(143), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9309] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(421), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(177), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(183), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9354] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(307), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_list_pattern,
    STATE(288), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9442] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(289), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9486] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(245), 1,
      sym_pattern,
    STATE(251), 1,
      sym_list_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(177), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(245), 1,
      sym_pattern,
    STATE(251), 1,
      sym_list_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(432), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9609] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(302), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(412), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9691] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(455), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(177), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9732] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(458), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(177), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9773] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(444), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9814] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(304), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(187), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(251), 1,
      sym_list_pattern,
    STATE(443), 1,
      sym_pattern,
    STATE(559), 1,
      sym_ctor,
    ACTIONS(177), 2,
      sym_sym,
      anon_sym__,
    ACTIONS(55), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9896] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_sym,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_loaded,
    ACTIONS(215), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(348), 1,
      sym_core_base_type,
    ACTIONS(199), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(213), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(209), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9939] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_eff,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(442), 1,
      sym_core_type,
    STATE(603), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9982] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_core_object_type,
    STATE(387), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10022] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_core_object_type,
    STATE(383), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10062] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_core_object_type,
    STATE(359), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10102] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(547), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10139] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(495), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10176] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(593), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10213] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(441), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10250] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(350), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10287] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(558), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10324] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(471), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10361] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(592), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(502), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10435] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(607), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10472] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(231), 1,
      sym_core_base_type,
    STATE(436), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10509] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(234), 1,
      sym_core_base_type,
    STATE(436), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10546] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(236), 1,
      sym_core_base_type,
    STATE(436), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(579), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(253), 1,
      aux_sym_memop_op_token1,
    STATE(631), 1,
      sym_memop_op,
    ACTIONS(249), 12,
      anon_sym_PtrEq,
      anon_sym_PtrNe,
      anon_sym_PtrLt,
      anon_sym_PtrGt,
      anon_sym_PtrLe,
      anon_sym_PtrGe,
      anon_sym_Ptrdiff,
      anon_sym_IntFromPtr,
      anon_sym_PtrFromInt,
      anon_sym_PtrValidForDeref,
      anon_sym_PtrWellAligned,
      anon_sym_PtrMemberShift,
  [10647] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(236), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10684] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(578), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10721] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(249), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10758] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(586), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10795] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(246), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10832] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(234), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10869] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(507), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10906] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(431), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10943] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(570), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10980] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_loaded,
    ACTIONS(267), 1,
      anon_sym_array,
    STATE(171), 1,
      sym_core_base_type,
    STATE(181), 1,
      sym_core_object_type,
    ACTIONS(255), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(261), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11017] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(222), 1,
      sym_ctype,
    STATE(587), 1,
      sym_params,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11060] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(246), 1,
      sym_core_base_type,
    STATE(436), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11097] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(233), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11134] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(249), 1,
      sym_core_base_type,
    STATE(436), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11171] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(340), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11208] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_loaded,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(152), 1,
      sym_core_object_type,
    STATE(231), 1,
      sym_core_base_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(221), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11245] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(253), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11285] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    ACTIONS(285), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(253), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_binary_operator,
    ACTIONS(287), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_binary_operator,
    ACTIONS(291), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11367] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(281), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11404] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(280), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(253), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(261), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11515] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(262), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(295), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_binary_operator,
    ACTIONS(301), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(305), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11617] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(276), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11654] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(218), 1,
      sym_ctype_star,
    STATE(220), 1,
      sym_integer_type,
    STATE(224), 1,
      sym_basic_type,
    STATE(300), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
  [11693] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_void,
    ACTIONS(277), 1,
      anon_sym__Atomic,
    ACTIONS(279), 1,
      aux_sym_integer_type_token1,
    ACTIONS(281), 1,
      sym_floating_type,
    STATE(206), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_integer_type,
    STATE(266), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(224), 2,
      sym_ctype_star,
      sym_basic_type,
  [11730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_binary_operator,
    ACTIONS(309), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_binary_operator,
    ACTIONS(313), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11772] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_create_readonly,
    ACTIONS(153), 1,
      anon_sym_create,
    ACTIONS(155), 1,
      anon_sym_alloc,
    ACTIONS(157), 1,
      anon_sym_free,
    ACTIONS(159), 1,
      anon_sym_kill,
    ACTIONS(161), 1,
      anon_sym_store,
    ACTIONS(163), 1,
      anon_sym_store_lock,
    ACTIONS(165), 1,
      anon_sym_load,
    ACTIONS(167), 1,
      anon_sym_seq_rmw,
    ACTIONS(169), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(171), 1,
      anon_sym_rmw,
    ACTIONS(173), 1,
      anon_sym_fence,
    STATE(650), 1,
      sym_action,
  [11815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_binary_operator,
    ACTIONS(317), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_binary_operator,
    ACTIONS(321), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_binary_operator,
    ACTIONS(325), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11896] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_def,
    ACTIONS(338), 1,
      anon_sym_glob,
    ACTIONS(341), 1,
      anon_sym_proc,
    STATE(163), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(306), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(292), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [11926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_binary_operator,
    ACTIONS(344), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_binary_operator,
    ACTIONS(348), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_binary_operator,
    ACTIONS(309), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_binary_operator,
    ACTIONS(313), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12006] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    STATE(163), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(306), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(292), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_binary_operator,
    ACTIONS(354), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_binary_operator,
    ACTIONS(358), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_binary_operator,
    ACTIONS(362), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(295), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_binary_operator,
    ACTIONS(366), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_binary_operator,
    ACTIONS(370), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_binary_operator,
    ACTIONS(374), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_binary_operator,
    ACTIONS(317), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_binary_operator,
    ACTIONS(291), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_binary_operator,
    ACTIONS(287), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_binary_operator,
    ACTIONS(301), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_binary_operator,
    ACTIONS(374), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(305), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_binary_operator,
    ACTIONS(362), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_binary_operator,
    ACTIONS(366), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_binary_operator,
    ACTIONS(378), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_binary_operator,
    ACTIONS(382), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_binary_operator,
    ACTIONS(386), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      aux_sym_integer_type_token1,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(422), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      aux_sym_integer_type_token1,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(428), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_binary_operator,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_restrict,
    ACTIONS(435), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 1,
      sym_sym,
    STATE(210), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(443), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(144), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 1,
      sym_sym,
    STATE(210), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(454), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(295), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(533), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_array,
    STATE(177), 1,
      sym_core_object_type,
    ACTIONS(255), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(550), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(595), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13005] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_params_repeat1,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(433), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_binary_operator,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_binary_operator,
    ACTIONS(378), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_binary_operator,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ,
    ACTIONS(488), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ,
    ACTIONS(492), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(496), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_binary_operator,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_EQ,
    ACTIONS(500), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_binary_operator,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
    ACTIONS(504), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_binary_operator,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_binary_operator,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COLON_COLON,
    ACTIONS(512), 1,
      sym_binary_operator,
    ACTIONS(508), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(295), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_binary_operator,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_binary_operator,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_binary_operator,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_binary_operator,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(514), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(514), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ,
    ACTIONS(518), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(522), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_binary_operator,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
    ACTIONS(526), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_binary_operator,
    ACTIONS(382), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(530), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_binary_operator,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_binary_operator,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    STATE(394), 1,
      aux_sym_expr_repeat1,
  [13523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(540), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(548), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_expr_repeat4,
  [13581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    STATE(405), 1,
      aux_sym_expr_repeat1,
  [13634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_expr_repeat1,
  [13653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(560), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13685] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_expr_repeat1,
  [13704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    STATE(308), 1,
      aux_sym_expr_repeat1,
  [13723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(566), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    STATE(370), 1,
      aux_sym_expr_repeat1,
  [13755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(568), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(570), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_expr_repeat1,
  [13800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_expr_repeat1,
  [13819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_expr_repeat1,
  [13838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [13868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_expr_repeat1,
  [13887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(377), 1,
      aux_sym_expr_repeat1,
  [13906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [13953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_expr_repeat1,
  [13972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(594), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_expr_repeat1,
  [14004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
  [14034] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    STATE(342), 1,
      aux_sym_pattern_repeat1,
  [14050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(610), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      aux_sym_pattern_repeat1,
  [14066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(612), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DeriveCap,
    STATE(539), 1,
      sym_pure_memop_op,
    ACTIONS(620), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    ACTIONS(624), 1,
      anon_sym_COMMA,
  [14130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_expr_repeat1,
    ACTIONS(560), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_expr_repeat3,
  [14160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DeriveCap,
    STATE(610), 1,
      sym_pure_memop_op,
    ACTIONS(620), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(637), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(303), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(637), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_pattern_repeat1,
  [14264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_sym,
    STATE(298), 1,
      sym_def_fields,
    STATE(213), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [14278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(648), 1,
      anon_sym_RBRACK,
    STATE(337), 1,
      aux_sym_pattern_repeat1,
  [14304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [14317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(450), 1,
      sym_name,
    ACTIONS(650), 2,
      sym_sym,
      sym_impl,
  [14328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
  [14341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_COMMA,
  [14354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym_sym,
    ACTIONS(658), 1,
      anon_sym_LBRACK,
    STATE(622), 1,
      sym_attribute,
  [14367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(660), 1,
      anon_sym_COMMA,
  [14380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(662), 1,
      anon_sym_COMMA,
  [14393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [14406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_expr_repeat4,
  [14419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(668), 1,
      anon_sym_COMMA,
  [14432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [14445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [14458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(672), 1,
      anon_sym_PIPE,
    STATE(344), 1,
      aux_sym_pexpr_repeat1,
  [14471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      aux_sym_expr_repeat4,
  [14484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
  [14497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(679), 1,
      anon_sym_COMMA,
  [14510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(681), 1,
      anon_sym_then,
  [14523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(560), 1,
      sym_name,
    ACTIONS(650), 2,
      sym_sym,
      sym_impl,
  [14534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
  [14547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_params_repeat1,
  [14560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(382), 1,
      sym_member,
  [14573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
  [14586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
    ACTIONS(691), 1,
      anon_sym_ailname,
    STATE(338), 1,
      sym_attribute_pair,
  [14599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(693), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(699), 1,
      anon_sym_else,
  [14636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(701), 1,
      anon_sym_of,
  [14649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(703), 1,
      anon_sym_PIPE,
    STATE(357), 1,
      aux_sym_expr_repeat2,
  [14662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(705), 1,
      anon_sym_then,
  [14675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_pattern_repeat1,
  [14688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_attribute_repeat1,
  [14701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_pexpr_repeat2,
  [14714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(568), 1,
      sym_name,
    ACTIONS(650), 2,
      sym_sym,
      sym_impl,
  [14738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_pattern_repeat1,
  [14751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [14764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_PIPE,
    ACTIONS(723), 1,
      anon_sym_end,
    STATE(344), 1,
      aux_sym_pexpr_repeat1,
  [14777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [14790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(730), 1,
      anon_sym_of,
  [14816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_core_base_type_repeat1,
  [14829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(699), 1,
      anon_sym_in,
  [14842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(738), 1,
      anon_sym_COMMA,
  [14868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [14881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(303), 1,
      aux_sym_pattern_repeat1,
  [14894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(742), 1,
      anon_sym_in,
  [14907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_attribute_repeat1,
  [14933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(703), 1,
      anon_sym_PIPE,
    STATE(401), 1,
      aux_sym_expr_repeat2,
  [14946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_core_base_type_repeat1,
  [14972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      aux_sym_expr_repeat3,
  [14985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_impl,
    ACTIONS(752), 2,
      anon_sym_struct,
      anon_sym_union,
  [14996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [15009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_pexpr_repeat2,
  [15022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(760), 1,
      anon_sym_COMMA,
  [15035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_pexpr_repeat2,
  [15087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [15100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(368), 1,
      sym_member,
  [15126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(672), 1,
      anon_sym_PIPE,
    STATE(344), 1,
      aux_sym_pexpr_repeat1,
  [15165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_end,
    ACTIONS(672), 1,
      anon_sym_PIPE,
    STATE(320), 1,
      aux_sym_pexpr_repeat1,
  [15178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(773), 1,
      anon_sym_else,
  [15191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [15217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_params_repeat1,
  [15230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACK,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_attribute_repeat1,
  [15243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(773), 1,
      anon_sym_in,
  [15256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      aux_sym_pexpr_repeat2,
  [15269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_core_base_type_repeat1,
  [15282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [15295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_end,
    ACTIONS(672), 1,
      anon_sym_PIPE,
    STATE(374), 1,
      aux_sym_pexpr_repeat1,
  [15321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_core_base_type_repeat1,
  [15334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [15347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_pattern_repeat1,
  [15360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(797), 1,
      anon_sym_of,
  [15373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(799), 1,
      anon_sym_then,
  [15386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_pexpr_repeat2,
  [15399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [15438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(805), 1,
      anon_sym_COMMA,
  [15451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [15464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(809), 1,
      anon_sym_COMMA,
  [15477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(811), 1,
      anon_sym_COMMA,
  [15490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [15503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      anon_sym_end,
    STATE(401), 1,
      aux_sym_expr_repeat2,
  [15516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(818), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      aux_sym_expr_repeat3,
  [15540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(823), 1,
      anon_sym_COMMA,
  [15553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_expr_repeat1,
  [15566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(825), 1,
      anon_sym_COMMA,
  [15579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [15592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(827), 1,
      anon_sym_COMMA,
  [15605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
  [15618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON_COLON,
    ACTIONS(538), 1,
      sym_binary_operator,
    ACTIONS(829), 1,
      anon_sym_COMMA,
  [15631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_sym,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
  [15641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(835), 1,
      anon_sym_EQ_GT,
  [15651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(841), 1,
      anon_sym_in,
  [15685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [15693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(447), 1,
      sym_member,
  [15711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [15721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_EQ,
    ACTIONS(847), 1,
      anon_sym_COLON_COLON,
  [15731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(615), 1,
      sym_core_ctype,
  [15741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_sym,
    STATE(554), 1,
      sym_cabs_id,
  [15751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(534), 1,
      sym_core_ctype,
  [15769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_sym,
    STATE(506), 1,
      sym_cabs_id,
  [15779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(660), 1,
      sym_core_ctype,
  [15805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(659), 1,
      sym_core_ctype,
  [15815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(853), 1,
      anon_sym_COMMA,
  [15833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_sym,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
  [15875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(742), 1,
      anon_sym_else,
  [15885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_ailname,
    STATE(418), 1,
      sym_attribute_pair,
  [15895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_string_token1,
    STATE(415), 1,
      sym_cstring,
  [15905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LBRACK,
    STATE(567), 1,
      sym_glob_ctype_attribute,
  [15923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COLON_COLON,
    ACTIONS(863), 1,
      anon_sym_EQ,
  [15933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_EQ_GT,
  [15943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_SQUOTE,
    STATE(277), 1,
      sym_core_ctype,
  [15953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(869), 1,
      sym_int_const,
  [15963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [15981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(606), 1,
      sym_core_ctype,
  [15991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [16001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(584), 1,
      sym_member,
  [16011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_string_token1,
    STATE(549), 1,
      sym_string,
  [16021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym_sym,
    STATE(588), 1,
      sym_cabs_id,
  [16039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COLON_COLON,
    ACTIONS(877), 1,
      anon_sym_EQ,
  [16049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_DOT,
    STATE(573), 1,
      sym_member,
  [16059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(549), 1,
      sym_core_ctype,
  [16069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [16079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_LBRACK,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [16089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(465), 1,
      sym_core_ctype,
  [16099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      aux_sym_string_token1,
    STATE(634), 1,
      sym_string,
  [16109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(634), 1,
      sym_core_ctype,
  [16127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(638), 1,
      sym_core_ctype,
  [16137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
  [16144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_DOT,
  [16151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
  [16158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
  [16165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
  [16172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COMMA,
  [16179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COLON_EQ,
  [16186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
  [16193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
  [16200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym_memory_order,
  [16207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
  [16214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
  [16221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
  [16228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_sym,
  [16235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [16242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_sym,
  [16249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
  [16256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_memory_order,
  [16263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_in,
  [16270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym_sym,
  [16277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
  [16284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
  [16291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COLON,
  [16298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_in,
  [16305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      sym_memory_order,
  [16312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym_memory_order,
  [16319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_LPAREN,
  [16326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
  [16333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
  [16340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [16347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COLON_EQ,
  [16354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
  [16361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_EQ_GT,
  [16368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
  [16375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
  [16382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_COLON,
  [16389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_sym,
  [16396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COLON_EQ,
  [16403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_ub,
  [16410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COMMA,
  [16417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
  [16424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
  [16431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COLON_EQ,
  [16438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COLON,
  [16445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [16452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_sym,
  [16459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_sym,
  [16466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
  [16473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_sym,
  [16480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_eff,
  [16487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [16494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [16501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym_sym,
  [16508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_EQ,
  [16515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
  [16522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
  [16529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
  [16536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
  [16543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COLON,
  [16550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
  [16557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
  [16564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [16571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
  [16578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_LPAREN,
  [16585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
  [16592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
  [16599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [16606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [16613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [16620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_COMMA,
  [16627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LBRACK,
  [16634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
  [16641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_in,
  [16648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_COLON,
  [16655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
  [16662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COLON,
  [16669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COMMA,
  [16676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym_sym,
  [16683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_COLON,
  [16690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      sym_sym,
  [16697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_COLON,
  [16704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [16711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
  [16718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [16725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_COMMA,
  [16732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
  [16739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_sym,
  [16746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_COLON,
  [16753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
  [16760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_EQ,
  [16767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [16774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_COLON,
  [16781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COLON,
  [16788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_COLON_EQ,
  [16795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
  [16802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [16809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
  [16816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_COLON,
  [16823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_eff,
  [16830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
  [16837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [16844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_COLON,
  [16851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COLON_EQ,
  [16858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [16865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_ail_ctype,
  [16872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LBRACK,
  [16879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_COMMA,
  [16886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COLON,
  [16893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
  [16900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
  [16907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
  [16914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_eff,
  [16921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym_memory_order,
  [16928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COLON_EQ,
  [16935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
  [16942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_COLON,
  [16949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_eff,
  [16956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [16963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_COLON,
  [16970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [16977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_COLON,
  [16984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_COLON_EQ,
  [16991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [16998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [17005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_sym,
  [17012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COLON,
  [17019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_LBRACE,
  [17026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
  [17033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_LPAREN,
  [17040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
  [17047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [17054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      aux_sym_pure_memop_op_token1,
  [17061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_COLON,
  [17068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym_sym,
  [17075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
  [17082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      sym_sym,
  [17089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COLON,
  [17096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
  [17103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_LBRACK,
  [17110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_COMMA,
  [17117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      sym_ub,
  [17124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COMMA,
  [17131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_COLON_EQ,
  [17138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [17145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
  [17152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [17159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_sym,
  [17166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
  [17173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_sym,
  [17180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_LBRACE,
  [17187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [17194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_EQ,
  [17201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
  [17208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_COLON,
  [17215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      sym_sym,
  [17222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
  [17229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_COLON_EQ,
  [17236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_sym,
  [17243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
  [17250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
  [17257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
  [17264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
  [17271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
  [17278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
  [17285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
  [17292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COLON,
  [17299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
  [17306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LBRACK,
  [17313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [17320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
  [17327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
  [17334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [17341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LBRACE,
  [17348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
  [17355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_DOT,
  [17362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
  [17369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
  [17376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_COLON,
  [17383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      sym_sym,
  [17390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      sym_sym,
  [17397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_COLON,
  [17404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_eff,
  [17411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      ts_builtin_sym_end,
  [17418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_COLON_EQ,
  [17425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
  [17432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
  [17439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
  [17446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
  [17453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
  [17460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      anon_sym_LPAREN,
  [17467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
  [17474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_sym,
  [17481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
  [17488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_sym,
  [17495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
  [17502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
  [17509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
  [17516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym_sym,
  [17523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 339,
  [SMALL_STATE(6)] = 450,
  [SMALL_STATE(7)] = 561,
  [SMALL_STATE(8)] = 672,
  [SMALL_STATE(9)] = 783,
  [SMALL_STATE(10)] = 894,
  [SMALL_STATE(11)] = 1005,
  [SMALL_STATE(12)] = 1116,
  [SMALL_STATE(13)] = 1224,
  [SMALL_STATE(14)] = 1332,
  [SMALL_STATE(15)] = 1440,
  [SMALL_STATE(16)] = 1548,
  [SMALL_STATE(17)] = 1656,
  [SMALL_STATE(18)] = 1764,
  [SMALL_STATE(19)] = 1872,
  [SMALL_STATE(20)] = 1980,
  [SMALL_STATE(21)] = 2088,
  [SMALL_STATE(22)] = 2196,
  [SMALL_STATE(23)] = 2304,
  [SMALL_STATE(24)] = 2412,
  [SMALL_STATE(25)] = 2520,
  [SMALL_STATE(26)] = 2628,
  [SMALL_STATE(27)] = 2736,
  [SMALL_STATE(28)] = 2844,
  [SMALL_STATE(29)] = 2952,
  [SMALL_STATE(30)] = 3060,
  [SMALL_STATE(31)] = 3168,
  [SMALL_STATE(32)] = 3276,
  [SMALL_STATE(33)] = 3384,
  [SMALL_STATE(34)] = 3492,
  [SMALL_STATE(35)] = 3600,
  [SMALL_STATE(36)] = 3708,
  [SMALL_STATE(37)] = 3816,
  [SMALL_STATE(38)] = 3924,
  [SMALL_STATE(39)] = 4032,
  [SMALL_STATE(40)] = 4140,
  [SMALL_STATE(41)] = 4248,
  [SMALL_STATE(42)] = 4356,
  [SMALL_STATE(43)] = 4464,
  [SMALL_STATE(44)] = 4572,
  [SMALL_STATE(45)] = 4680,
  [SMALL_STATE(46)] = 4788,
  [SMALL_STATE(47)] = 4896,
  [SMALL_STATE(48)] = 5004,
  [SMALL_STATE(49)] = 5112,
  [SMALL_STATE(50)] = 5220,
  [SMALL_STATE(51)] = 5328,
  [SMALL_STATE(52)] = 5436,
  [SMALL_STATE(53)] = 5544,
  [SMALL_STATE(54)] = 5652,
  [SMALL_STATE(55)] = 5760,
  [SMALL_STATE(56)] = 5868,
  [SMALL_STATE(57)] = 5976,
  [SMALL_STATE(58)] = 6084,
  [SMALL_STATE(59)] = 6192,
  [SMALL_STATE(60)] = 6300,
  [SMALL_STATE(61)] = 6408,
  [SMALL_STATE(62)] = 6516,
  [SMALL_STATE(63)] = 6624,
  [SMALL_STATE(64)] = 6732,
  [SMALL_STATE(65)] = 6840,
  [SMALL_STATE(66)] = 6948,
  [SMALL_STATE(67)] = 7056,
  [SMALL_STATE(68)] = 7164,
  [SMALL_STATE(69)] = 7272,
  [SMALL_STATE(70)] = 7380,
  [SMALL_STATE(71)] = 7488,
  [SMALL_STATE(72)] = 7596,
  [SMALL_STATE(73)] = 7689,
  [SMALL_STATE(74)] = 7779,
  [SMALL_STATE(75)] = 7869,
  [SMALL_STATE(76)] = 7959,
  [SMALL_STATE(77)] = 8049,
  [SMALL_STATE(78)] = 8139,
  [SMALL_STATE(79)] = 8229,
  [SMALL_STATE(80)] = 8319,
  [SMALL_STATE(81)] = 8409,
  [SMALL_STATE(82)] = 8499,
  [SMALL_STATE(83)] = 8589,
  [SMALL_STATE(84)] = 8679,
  [SMALL_STATE(85)] = 8769,
  [SMALL_STATE(86)] = 8859,
  [SMALL_STATE(87)] = 8949,
  [SMALL_STATE(88)] = 9039,
  [SMALL_STATE(89)] = 9129,
  [SMALL_STATE(90)] = 9219,
  [SMALL_STATE(91)] = 9309,
  [SMALL_STATE(92)] = 9354,
  [SMALL_STATE(93)] = 9398,
  [SMALL_STATE(94)] = 9442,
  [SMALL_STATE(95)] = 9486,
  [SMALL_STATE(96)] = 9527,
  [SMALL_STATE(97)] = 9568,
  [SMALL_STATE(98)] = 9609,
  [SMALL_STATE(99)] = 9650,
  [SMALL_STATE(100)] = 9691,
  [SMALL_STATE(101)] = 9732,
  [SMALL_STATE(102)] = 9773,
  [SMALL_STATE(103)] = 9814,
  [SMALL_STATE(104)] = 9855,
  [SMALL_STATE(105)] = 9896,
  [SMALL_STATE(106)] = 9939,
  [SMALL_STATE(107)] = 9982,
  [SMALL_STATE(108)] = 10022,
  [SMALL_STATE(109)] = 10062,
  [SMALL_STATE(110)] = 10102,
  [SMALL_STATE(111)] = 10139,
  [SMALL_STATE(112)] = 10176,
  [SMALL_STATE(113)] = 10213,
  [SMALL_STATE(114)] = 10250,
  [SMALL_STATE(115)] = 10287,
  [SMALL_STATE(116)] = 10324,
  [SMALL_STATE(117)] = 10361,
  [SMALL_STATE(118)] = 10398,
  [SMALL_STATE(119)] = 10435,
  [SMALL_STATE(120)] = 10472,
  [SMALL_STATE(121)] = 10509,
  [SMALL_STATE(122)] = 10546,
  [SMALL_STATE(123)] = 10583,
  [SMALL_STATE(124)] = 10620,
  [SMALL_STATE(125)] = 10647,
  [SMALL_STATE(126)] = 10684,
  [SMALL_STATE(127)] = 10721,
  [SMALL_STATE(128)] = 10758,
  [SMALL_STATE(129)] = 10795,
  [SMALL_STATE(130)] = 10832,
  [SMALL_STATE(131)] = 10869,
  [SMALL_STATE(132)] = 10906,
  [SMALL_STATE(133)] = 10943,
  [SMALL_STATE(134)] = 10980,
  [SMALL_STATE(135)] = 11017,
  [SMALL_STATE(136)] = 11060,
  [SMALL_STATE(137)] = 11097,
  [SMALL_STATE(138)] = 11134,
  [SMALL_STATE(139)] = 11171,
  [SMALL_STATE(140)] = 11208,
  [SMALL_STATE(141)] = 11245,
  [SMALL_STATE(142)] = 11285,
  [SMALL_STATE(143)] = 11325,
  [SMALL_STATE(144)] = 11346,
  [SMALL_STATE(145)] = 11367,
  [SMALL_STATE(146)] = 11404,
  [SMALL_STATE(147)] = 11441,
  [SMALL_STATE(148)] = 11478,
  [SMALL_STATE(149)] = 11515,
  [SMALL_STATE(150)] = 11552,
  [SMALL_STATE(151)] = 11575,
  [SMALL_STATE(152)] = 11596,
  [SMALL_STATE(153)] = 11617,
  [SMALL_STATE(154)] = 11654,
  [SMALL_STATE(155)] = 11693,
  [SMALL_STATE(156)] = 11730,
  [SMALL_STATE(157)] = 11751,
  [SMALL_STATE(158)] = 11772,
  [SMALL_STATE(159)] = 11815,
  [SMALL_STATE(160)] = 11836,
  [SMALL_STATE(161)] = 11856,
  [SMALL_STATE(162)] = 11876,
  [SMALL_STATE(163)] = 11896,
  [SMALL_STATE(164)] = 11926,
  [SMALL_STATE(165)] = 11946,
  [SMALL_STATE(166)] = 11966,
  [SMALL_STATE(167)] = 11986,
  [SMALL_STATE(168)] = 12006,
  [SMALL_STATE(169)] = 12036,
  [SMALL_STATE(170)] = 12056,
  [SMALL_STATE(171)] = 12076,
  [SMALL_STATE(172)] = 12096,
  [SMALL_STATE(173)] = 12116,
  [SMALL_STATE(174)] = 12136,
  [SMALL_STATE(175)] = 12156,
  [SMALL_STATE(176)] = 12176,
  [SMALL_STATE(177)] = 12196,
  [SMALL_STATE(178)] = 12216,
  [SMALL_STATE(179)] = 12236,
  [SMALL_STATE(180)] = 12256,
  [SMALL_STATE(181)] = 12276,
  [SMALL_STATE(182)] = 12296,
  [SMALL_STATE(183)] = 12316,
  [SMALL_STATE(184)] = 12336,
  [SMALL_STATE(185)] = 12356,
  [SMALL_STATE(186)] = 12376,
  [SMALL_STATE(187)] = 12396,
  [SMALL_STATE(188)] = 12413,
  [SMALL_STATE(189)] = 12430,
  [SMALL_STATE(190)] = 12447,
  [SMALL_STATE(191)] = 12464,
  [SMALL_STATE(192)] = 12481,
  [SMALL_STATE(193)] = 12498,
  [SMALL_STATE(194)] = 12515,
  [SMALL_STATE(195)] = 12532,
  [SMALL_STATE(196)] = 12549,
  [SMALL_STATE(197)] = 12566,
  [SMALL_STATE(198)] = 12583,
  [SMALL_STATE(199)] = 12600,
  [SMALL_STATE(200)] = 12617,
  [SMALL_STATE(201)] = 12634,
  [SMALL_STATE(202)] = 12651,
  [SMALL_STATE(203)] = 12668,
  [SMALL_STATE(204)] = 12685,
  [SMALL_STATE(205)] = 12702,
  [SMALL_STATE(206)] = 12719,
  [SMALL_STATE(207)] = 12740,
  [SMALL_STATE(208)] = 12761,
  [SMALL_STATE(209)] = 12777,
  [SMALL_STATE(210)] = 12795,
  [SMALL_STATE(211)] = 12814,
  [SMALL_STATE(212)] = 12829,
  [SMALL_STATE(213)] = 12848,
  [SMALL_STATE(214)] = 12867,
  [SMALL_STATE(215)] = 12884,
  [SMALL_STATE(216)] = 12903,
  [SMALL_STATE(217)] = 12922,
  [SMALL_STATE(218)] = 12937,
  [SMALL_STATE(219)] = 12952,
  [SMALL_STATE(220)] = 12971,
  [SMALL_STATE(221)] = 12986,
  [SMALL_STATE(222)] = 13005,
  [SMALL_STATE(223)] = 13028,
  [SMALL_STATE(224)] = 13047,
  [SMALL_STATE(225)] = 13062,
  [SMALL_STATE(226)] = 13077,
  [SMALL_STATE(227)] = 13092,
  [SMALL_STATE(228)] = 13106,
  [SMALL_STATE(229)] = 13120,
  [SMALL_STATE(230)] = 13134,
  [SMALL_STATE(231)] = 13148,
  [SMALL_STATE(232)] = 13162,
  [SMALL_STATE(233)] = 13176,
  [SMALL_STATE(234)] = 13190,
  [SMALL_STATE(235)] = 13204,
  [SMALL_STATE(236)] = 13218,
  [SMALL_STATE(237)] = 13232,
  [SMALL_STATE(238)] = 13246,
  [SMALL_STATE(239)] = 13260,
  [SMALL_STATE(240)] = 13276,
  [SMALL_STATE(241)] = 13290,
  [SMALL_STATE(242)] = 13304,
  [SMALL_STATE(243)] = 13318,
  [SMALL_STATE(244)] = 13332,
  [SMALL_STATE(245)] = 13346,
  [SMALL_STATE(246)] = 13360,
  [SMALL_STATE(247)] = 13374,
  [SMALL_STATE(248)] = 13388,
  [SMALL_STATE(249)] = 13402,
  [SMALL_STATE(250)] = 13416,
  [SMALL_STATE(251)] = 13430,
  [SMALL_STATE(252)] = 13444,
  [SMALL_STATE(253)] = 13458,
  [SMALL_STATE(254)] = 13476,
  [SMALL_STATE(255)] = 13490,
  [SMALL_STATE(256)] = 13504,
  [SMALL_STATE(257)] = 13523,
  [SMALL_STATE(258)] = 13536,
  [SMALL_STATE(259)] = 13549,
  [SMALL_STATE(260)] = 13562,
  [SMALL_STATE(261)] = 13581,
  [SMALL_STATE(262)] = 13598,
  [SMALL_STATE(263)] = 13615,
  [SMALL_STATE(264)] = 13634,
  [SMALL_STATE(265)] = 13653,
  [SMALL_STATE(266)] = 13668,
  [SMALL_STATE(267)] = 13685,
  [SMALL_STATE(268)] = 13704,
  [SMALL_STATE(269)] = 13723,
  [SMALL_STATE(270)] = 13736,
  [SMALL_STATE(271)] = 13755,
  [SMALL_STATE(272)] = 13768,
  [SMALL_STATE(273)] = 13781,
  [SMALL_STATE(274)] = 13800,
  [SMALL_STATE(275)] = 13819,
  [SMALL_STATE(276)] = 13838,
  [SMALL_STATE(277)] = 13855,
  [SMALL_STATE(278)] = 13868,
  [SMALL_STATE(279)] = 13887,
  [SMALL_STATE(280)] = 13906,
  [SMALL_STATE(281)] = 13923,
  [SMALL_STATE(282)] = 13940,
  [SMALL_STATE(283)] = 13953,
  [SMALL_STATE(284)] = 13972,
  [SMALL_STATE(285)] = 13985,
  [SMALL_STATE(286)] = 14004,
  [SMALL_STATE(287)] = 14018,
  [SMALL_STATE(288)] = 14034,
  [SMALL_STATE(289)] = 14050,
  [SMALL_STATE(290)] = 14066,
  [SMALL_STATE(291)] = 14080,
  [SMALL_STATE(292)] = 14090,
  [SMALL_STATE(293)] = 14100,
  [SMALL_STATE(294)] = 14114,
  [SMALL_STATE(295)] = 14130,
  [SMALL_STATE(296)] = 14144,
  [SMALL_STATE(297)] = 14160,
  [SMALL_STATE(298)] = 14170,
  [SMALL_STATE(299)] = 14180,
  [SMALL_STATE(300)] = 14194,
  [SMALL_STATE(301)] = 14208,
  [SMALL_STATE(302)] = 14222,
  [SMALL_STATE(303)] = 14234,
  [SMALL_STATE(304)] = 14248,
  [SMALL_STATE(305)] = 14264,
  [SMALL_STATE(306)] = 14278,
  [SMALL_STATE(307)] = 14288,
  [SMALL_STATE(308)] = 14304,
  [SMALL_STATE(309)] = 14317,
  [SMALL_STATE(310)] = 14328,
  [SMALL_STATE(311)] = 14341,
  [SMALL_STATE(312)] = 14354,
  [SMALL_STATE(313)] = 14367,
  [SMALL_STATE(314)] = 14380,
  [SMALL_STATE(315)] = 14393,
  [SMALL_STATE(316)] = 14406,
  [SMALL_STATE(317)] = 14419,
  [SMALL_STATE(318)] = 14432,
  [SMALL_STATE(319)] = 14445,
  [SMALL_STATE(320)] = 14458,
  [SMALL_STATE(321)] = 14471,
  [SMALL_STATE(322)] = 14484,
  [SMALL_STATE(323)] = 14497,
  [SMALL_STATE(324)] = 14510,
  [SMALL_STATE(325)] = 14523,
  [SMALL_STATE(326)] = 14534,
  [SMALL_STATE(327)] = 14547,
  [SMALL_STATE(328)] = 14560,
  [SMALL_STATE(329)] = 14573,
  [SMALL_STATE(330)] = 14586,
  [SMALL_STATE(331)] = 14599,
  [SMALL_STATE(332)] = 14610,
  [SMALL_STATE(333)] = 14623,
  [SMALL_STATE(334)] = 14636,
  [SMALL_STATE(335)] = 14649,
  [SMALL_STATE(336)] = 14662,
  [SMALL_STATE(337)] = 14675,
  [SMALL_STATE(338)] = 14688,
  [SMALL_STATE(339)] = 14701,
  [SMALL_STATE(340)] = 14714,
  [SMALL_STATE(341)] = 14727,
  [SMALL_STATE(342)] = 14738,
  [SMALL_STATE(343)] = 14751,
  [SMALL_STATE(344)] = 14764,
  [SMALL_STATE(345)] = 14777,
  [SMALL_STATE(346)] = 14790,
  [SMALL_STATE(347)] = 14803,
  [SMALL_STATE(348)] = 14816,
  [SMALL_STATE(349)] = 14829,
  [SMALL_STATE(350)] = 14842,
  [SMALL_STATE(351)] = 14855,
  [SMALL_STATE(352)] = 14868,
  [SMALL_STATE(353)] = 14881,
  [SMALL_STATE(354)] = 14894,
  [SMALL_STATE(355)] = 14907,
  [SMALL_STATE(356)] = 14920,
  [SMALL_STATE(357)] = 14933,
  [SMALL_STATE(358)] = 14946,
  [SMALL_STATE(359)] = 14959,
  [SMALL_STATE(360)] = 14972,
  [SMALL_STATE(361)] = 14985,
  [SMALL_STATE(362)] = 14996,
  [SMALL_STATE(363)] = 15009,
  [SMALL_STATE(364)] = 15022,
  [SMALL_STATE(365)] = 15035,
  [SMALL_STATE(366)] = 15048,
  [SMALL_STATE(367)] = 15061,
  [SMALL_STATE(368)] = 15074,
  [SMALL_STATE(369)] = 15087,
  [SMALL_STATE(370)] = 15100,
  [SMALL_STATE(371)] = 15113,
  [SMALL_STATE(372)] = 15126,
  [SMALL_STATE(373)] = 15139,
  [SMALL_STATE(374)] = 15152,
  [SMALL_STATE(375)] = 15165,
  [SMALL_STATE(376)] = 15178,
  [SMALL_STATE(377)] = 15191,
  [SMALL_STATE(378)] = 15204,
  [SMALL_STATE(379)] = 15217,
  [SMALL_STATE(380)] = 15230,
  [SMALL_STATE(381)] = 15243,
  [SMALL_STATE(382)] = 15256,
  [SMALL_STATE(383)] = 15269,
  [SMALL_STATE(384)] = 15282,
  [SMALL_STATE(385)] = 15295,
  [SMALL_STATE(386)] = 15308,
  [SMALL_STATE(387)] = 15321,
  [SMALL_STATE(388)] = 15334,
  [SMALL_STATE(389)] = 15347,
  [SMALL_STATE(390)] = 15360,
  [SMALL_STATE(391)] = 15373,
  [SMALL_STATE(392)] = 15386,
  [SMALL_STATE(393)] = 15399,
  [SMALL_STATE(394)] = 15412,
  [SMALL_STATE(395)] = 15425,
  [SMALL_STATE(396)] = 15438,
  [SMALL_STATE(397)] = 15451,
  [SMALL_STATE(398)] = 15464,
  [SMALL_STATE(399)] = 15477,
  [SMALL_STATE(400)] = 15490,
  [SMALL_STATE(401)] = 15503,
  [SMALL_STATE(402)] = 15516,
  [SMALL_STATE(403)] = 15527,
  [SMALL_STATE(404)] = 15540,
  [SMALL_STATE(405)] = 15553,
  [SMALL_STATE(406)] = 15566,
  [SMALL_STATE(407)] = 15579,
  [SMALL_STATE(408)] = 15592,
  [SMALL_STATE(409)] = 15605,
  [SMALL_STATE(410)] = 15618,
  [SMALL_STATE(411)] = 15631,
  [SMALL_STATE(412)] = 15641,
  [SMALL_STATE(413)] = 15651,
  [SMALL_STATE(414)] = 15659,
  [SMALL_STATE(415)] = 15667,
  [SMALL_STATE(416)] = 15675,
  [SMALL_STATE(417)] = 15685,
  [SMALL_STATE(418)] = 15693,
  [SMALL_STATE(419)] = 15701,
  [SMALL_STATE(420)] = 15711,
  [SMALL_STATE(421)] = 15721,
  [SMALL_STATE(422)] = 15731,
  [SMALL_STATE(423)] = 15741,
  [SMALL_STATE(424)] = 15751,
  [SMALL_STATE(425)] = 15759,
  [SMALL_STATE(426)] = 15769,
  [SMALL_STATE(427)] = 15779,
  [SMALL_STATE(428)] = 15787,
  [SMALL_STATE(429)] = 15795,
  [SMALL_STATE(430)] = 15805,
  [SMALL_STATE(431)] = 15815,
  [SMALL_STATE(432)] = 15823,
  [SMALL_STATE(433)] = 15833,
  [SMALL_STATE(434)] = 15841,
  [SMALL_STATE(435)] = 15849,
  [SMALL_STATE(436)] = 15857,
  [SMALL_STATE(437)] = 15865,
  [SMALL_STATE(438)] = 15875,
  [SMALL_STATE(439)] = 15885,
  [SMALL_STATE(440)] = 15895,
  [SMALL_STATE(441)] = 15905,
  [SMALL_STATE(442)] = 15913,
  [SMALL_STATE(443)] = 15923,
  [SMALL_STATE(444)] = 15933,
  [SMALL_STATE(445)] = 15943,
  [SMALL_STATE(446)] = 15953,
  [SMALL_STATE(447)] = 15963,
  [SMALL_STATE(448)] = 15971,
  [SMALL_STATE(449)] = 15981,
  [SMALL_STATE(450)] = 15991,
  [SMALL_STATE(451)] = 16001,
  [SMALL_STATE(452)] = 16011,
  [SMALL_STATE(453)] = 16021,
  [SMALL_STATE(454)] = 16029,
  [SMALL_STATE(455)] = 16039,
  [SMALL_STATE(456)] = 16049,
  [SMALL_STATE(457)] = 16059,
  [SMALL_STATE(458)] = 16069,
  [SMALL_STATE(459)] = 16079,
  [SMALL_STATE(460)] = 16089,
  [SMALL_STATE(461)] = 16099,
  [SMALL_STATE(462)] = 16109,
  [SMALL_STATE(463)] = 16117,
  [SMALL_STATE(464)] = 16127,
  [SMALL_STATE(465)] = 16137,
  [SMALL_STATE(466)] = 16144,
  [SMALL_STATE(467)] = 16151,
  [SMALL_STATE(468)] = 16158,
  [SMALL_STATE(469)] = 16165,
  [SMALL_STATE(470)] = 16172,
  [SMALL_STATE(471)] = 16179,
  [SMALL_STATE(472)] = 16186,
  [SMALL_STATE(473)] = 16193,
  [SMALL_STATE(474)] = 16200,
  [SMALL_STATE(475)] = 16207,
  [SMALL_STATE(476)] = 16214,
  [SMALL_STATE(477)] = 16221,
  [SMALL_STATE(478)] = 16228,
  [SMALL_STATE(479)] = 16235,
  [SMALL_STATE(480)] = 16242,
  [SMALL_STATE(481)] = 16249,
  [SMALL_STATE(482)] = 16256,
  [SMALL_STATE(483)] = 16263,
  [SMALL_STATE(484)] = 16270,
  [SMALL_STATE(485)] = 16277,
  [SMALL_STATE(486)] = 16284,
  [SMALL_STATE(487)] = 16291,
  [SMALL_STATE(488)] = 16298,
  [SMALL_STATE(489)] = 16305,
  [SMALL_STATE(490)] = 16312,
  [SMALL_STATE(491)] = 16319,
  [SMALL_STATE(492)] = 16326,
  [SMALL_STATE(493)] = 16333,
  [SMALL_STATE(494)] = 16340,
  [SMALL_STATE(495)] = 16347,
  [SMALL_STATE(496)] = 16354,
  [SMALL_STATE(497)] = 16361,
  [SMALL_STATE(498)] = 16368,
  [SMALL_STATE(499)] = 16375,
  [SMALL_STATE(500)] = 16382,
  [SMALL_STATE(501)] = 16389,
  [SMALL_STATE(502)] = 16396,
  [SMALL_STATE(503)] = 16403,
  [SMALL_STATE(504)] = 16410,
  [SMALL_STATE(505)] = 16417,
  [SMALL_STATE(506)] = 16424,
  [SMALL_STATE(507)] = 16431,
  [SMALL_STATE(508)] = 16438,
  [SMALL_STATE(509)] = 16445,
  [SMALL_STATE(510)] = 16452,
  [SMALL_STATE(511)] = 16459,
  [SMALL_STATE(512)] = 16466,
  [SMALL_STATE(513)] = 16473,
  [SMALL_STATE(514)] = 16480,
  [SMALL_STATE(515)] = 16487,
  [SMALL_STATE(516)] = 16494,
  [SMALL_STATE(517)] = 16501,
  [SMALL_STATE(518)] = 16508,
  [SMALL_STATE(519)] = 16515,
  [SMALL_STATE(520)] = 16522,
  [SMALL_STATE(521)] = 16529,
  [SMALL_STATE(522)] = 16536,
  [SMALL_STATE(523)] = 16543,
  [SMALL_STATE(524)] = 16550,
  [SMALL_STATE(525)] = 16557,
  [SMALL_STATE(526)] = 16564,
  [SMALL_STATE(527)] = 16571,
  [SMALL_STATE(528)] = 16578,
  [SMALL_STATE(529)] = 16585,
  [SMALL_STATE(530)] = 16592,
  [SMALL_STATE(531)] = 16599,
  [SMALL_STATE(532)] = 16606,
  [SMALL_STATE(533)] = 16613,
  [SMALL_STATE(534)] = 16620,
  [SMALL_STATE(535)] = 16627,
  [SMALL_STATE(536)] = 16634,
  [SMALL_STATE(537)] = 16641,
  [SMALL_STATE(538)] = 16648,
  [SMALL_STATE(539)] = 16655,
  [SMALL_STATE(540)] = 16662,
  [SMALL_STATE(541)] = 16669,
  [SMALL_STATE(542)] = 16676,
  [SMALL_STATE(543)] = 16683,
  [SMALL_STATE(544)] = 16690,
  [SMALL_STATE(545)] = 16697,
  [SMALL_STATE(546)] = 16704,
  [SMALL_STATE(547)] = 16711,
  [SMALL_STATE(548)] = 16718,
  [SMALL_STATE(549)] = 16725,
  [SMALL_STATE(550)] = 16732,
  [SMALL_STATE(551)] = 16739,
  [SMALL_STATE(552)] = 16746,
  [SMALL_STATE(553)] = 16753,
  [SMALL_STATE(554)] = 16760,
  [SMALL_STATE(555)] = 16767,
  [SMALL_STATE(556)] = 16774,
  [SMALL_STATE(557)] = 16781,
  [SMALL_STATE(558)] = 16788,
  [SMALL_STATE(559)] = 16795,
  [SMALL_STATE(560)] = 16802,
  [SMALL_STATE(561)] = 16809,
  [SMALL_STATE(562)] = 16816,
  [SMALL_STATE(563)] = 16823,
  [SMALL_STATE(564)] = 16830,
  [SMALL_STATE(565)] = 16837,
  [SMALL_STATE(566)] = 16844,
  [SMALL_STATE(567)] = 16851,
  [SMALL_STATE(568)] = 16858,
  [SMALL_STATE(569)] = 16865,
  [SMALL_STATE(570)] = 16872,
  [SMALL_STATE(571)] = 16879,
  [SMALL_STATE(572)] = 16886,
  [SMALL_STATE(573)] = 16893,
  [SMALL_STATE(574)] = 16900,
  [SMALL_STATE(575)] = 16907,
  [SMALL_STATE(576)] = 16914,
  [SMALL_STATE(577)] = 16921,
  [SMALL_STATE(578)] = 16928,
  [SMALL_STATE(579)] = 16935,
  [SMALL_STATE(580)] = 16942,
  [SMALL_STATE(581)] = 16949,
  [SMALL_STATE(582)] = 16956,
  [SMALL_STATE(583)] = 16963,
  [SMALL_STATE(584)] = 16970,
  [SMALL_STATE(585)] = 16977,
  [SMALL_STATE(586)] = 16984,
  [SMALL_STATE(587)] = 16991,
  [SMALL_STATE(588)] = 16998,
  [SMALL_STATE(589)] = 17005,
  [SMALL_STATE(590)] = 17012,
  [SMALL_STATE(591)] = 17019,
  [SMALL_STATE(592)] = 17026,
  [SMALL_STATE(593)] = 17033,
  [SMALL_STATE(594)] = 17040,
  [SMALL_STATE(595)] = 17047,
  [SMALL_STATE(596)] = 17054,
  [SMALL_STATE(597)] = 17061,
  [SMALL_STATE(598)] = 17068,
  [SMALL_STATE(599)] = 17075,
  [SMALL_STATE(600)] = 17082,
  [SMALL_STATE(601)] = 17089,
  [SMALL_STATE(602)] = 17096,
  [SMALL_STATE(603)] = 17103,
  [SMALL_STATE(604)] = 17110,
  [SMALL_STATE(605)] = 17117,
  [SMALL_STATE(606)] = 17124,
  [SMALL_STATE(607)] = 17131,
  [SMALL_STATE(608)] = 17138,
  [SMALL_STATE(609)] = 17145,
  [SMALL_STATE(610)] = 17152,
  [SMALL_STATE(611)] = 17159,
  [SMALL_STATE(612)] = 17166,
  [SMALL_STATE(613)] = 17173,
  [SMALL_STATE(614)] = 17180,
  [SMALL_STATE(615)] = 17187,
  [SMALL_STATE(616)] = 17194,
  [SMALL_STATE(617)] = 17201,
  [SMALL_STATE(618)] = 17208,
  [SMALL_STATE(619)] = 17215,
  [SMALL_STATE(620)] = 17222,
  [SMALL_STATE(621)] = 17229,
  [SMALL_STATE(622)] = 17236,
  [SMALL_STATE(623)] = 17243,
  [SMALL_STATE(624)] = 17250,
  [SMALL_STATE(625)] = 17257,
  [SMALL_STATE(626)] = 17264,
  [SMALL_STATE(627)] = 17271,
  [SMALL_STATE(628)] = 17278,
  [SMALL_STATE(629)] = 17285,
  [SMALL_STATE(630)] = 17292,
  [SMALL_STATE(631)] = 17299,
  [SMALL_STATE(632)] = 17306,
  [SMALL_STATE(633)] = 17313,
  [SMALL_STATE(634)] = 17320,
  [SMALL_STATE(635)] = 17327,
  [SMALL_STATE(636)] = 17334,
  [SMALL_STATE(637)] = 17341,
  [SMALL_STATE(638)] = 17348,
  [SMALL_STATE(639)] = 17355,
  [SMALL_STATE(640)] = 17362,
  [SMALL_STATE(641)] = 17369,
  [SMALL_STATE(642)] = 17376,
  [SMALL_STATE(643)] = 17383,
  [SMALL_STATE(644)] = 17390,
  [SMALL_STATE(645)] = 17397,
  [SMALL_STATE(646)] = 17404,
  [SMALL_STATE(647)] = 17411,
  [SMALL_STATE(648)] = 17418,
  [SMALL_STATE(649)] = 17425,
  [SMALL_STATE(650)] = 17432,
  [SMALL_STATE(651)] = 17439,
  [SMALL_STATE(652)] = 17446,
  [SMALL_STATE(653)] = 17453,
  [SMALL_STATE(654)] = 17460,
  [SMALL_STATE(655)] = 17467,
  [SMALL_STATE(656)] = 17474,
  [SMALL_STATE(657)] = 17481,
  [SMALL_STATE(658)] = 17488,
  [SMALL_STATE(659)] = 17495,
  [SMALL_STATE(660)] = 17502,
  [SMALL_STATE(661)] = 17509,
  [SMALL_STATE(662)] = 17516,
  [SMALL_STATE(663)] = 17523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(361),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(662),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2), SHIFT_REPEAT(207),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2), SHIFT_REPEAT(590),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(52),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(98),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2), SHIFT_REPEAT(484),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2), SHIFT_REPEAT(419),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2), SHIFT_REPEAT(102),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2), SHIFT_REPEAT(113),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2), SHIFT_REPEAT(501),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(147),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(439),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2), SHIFT_REPEAT(99),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2), SHIFT_REPEAT(87),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
