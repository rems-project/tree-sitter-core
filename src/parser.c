#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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

enum ts_symbol_identifiers {
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
  [9] = 7,
  [10] = 4,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 18,
  [56] = 19,
  [57] = 35,
  [58] = 58,
  [59] = 54,
  [60] = 60,
  [61] = 60,
  [62] = 16,
  [63] = 24,
  [64] = 25,
  [65] = 26,
  [66] = 33,
  [67] = 44,
  [68] = 15,
  [69] = 58,
  [70] = 45,
  [71] = 71,
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
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 96,
  [102] = 102,
  [103] = 103,
  [104] = 97,
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
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 123,
  [124] = 116,
  [125] = 125,
  [126] = 110,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 110,
  [132] = 132,
  [133] = 125,
  [134] = 123,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 115,
  [140] = 122,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 150,
  [156] = 156,
  [157] = 157,
  [158] = 148,
  [159] = 150,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 146,
  [166] = 154,
  [167] = 160,
  [168] = 145,
  [169] = 169,
  [170] = 170,
  [171] = 147,
  [172] = 156,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 144,
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
  [208] = 208,
  [209] = 162,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 152,
  [216] = 216,
  [217] = 217,
  [218] = 216,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 149,
  [223] = 223,
  [224] = 224,
  [225] = 216,
  [226] = 221,
  [227] = 221,
  [228] = 228,
  [229] = 175,
  [230] = 230,
  [231] = 173,
  [232] = 177,
  [233] = 174,
  [234] = 161,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 178,
  [241] = 183,
  [242] = 242,
  [243] = 170,
  [244] = 181,
  [245] = 185,
  [246] = 246,
  [247] = 247,
  [248] = 184,
  [249] = 169,
  [250] = 186,
  [251] = 179,
  [252] = 182,
  [253] = 253,
  [254] = 180,
  [255] = 255,
  [256] = 256,
  [257] = 176,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 162,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 258,
  [267] = 263,
  [268] = 265,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 260,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 258,
  [278] = 278,
  [279] = 273,
  [280] = 275,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 271,
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
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 288,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 295,
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
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 370,
  [373] = 318,
  [374] = 374,
  [375] = 312,
  [376] = 340,
  [377] = 345,
  [378] = 349,
  [379] = 354,
  [380] = 380,
  [381] = 381,
  [382] = 380,
  [383] = 381,
  [384] = 384,
  [385] = 385,
  [386] = 316,
  [387] = 317,
  [388] = 388,
  [389] = 321,
  [390] = 327,
  [391] = 328,
  [392] = 341,
  [393] = 342,
  [394] = 384,
  [395] = 395,
  [396] = 370,
  [397] = 318,
  [398] = 385,
  [399] = 395,
  [400] = 400,
  [401] = 314,
  [402] = 374,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 388,
  [407] = 355,
  [408] = 408,
  [409] = 352,
  [410] = 410,
  [411] = 353,
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
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 146,
  [442] = 442,
  [443] = 443,
  [444] = 154,
  [445] = 445,
  [446] = 434,
  [447] = 160,
  [448] = 417,
  [449] = 145,
  [450] = 450,
  [451] = 144,
  [452] = 452,
  [453] = 415,
  [454] = 147,
  [455] = 156,
  [456] = 456,
  [457] = 457,
  [458] = 438,
  [459] = 445,
  [460] = 460,
  [461] = 420,
  [462] = 436,
  [463] = 463,
  [464] = 464,
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
  [547] = 515,
  [548] = 548,
  [549] = 549,
  [550] = 492,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 546,
  [557] = 557,
  [558] = 558,
  [559] = 557,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 473,
  [569] = 544,
  [570] = 570,
  [571] = 571,
  [572] = 553,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 477,
  [581] = 581,
  [582] = 519,
  [583] = 583,
  [584] = 488,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 544,
  [590] = 590,
  [591] = 591,
  [592] = 515,
  [593] = 593,
  [594] = 594,
  [595] = 492,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 562,
  [601] = 601,
  [602] = 474,
  [603] = 603,
  [604] = 604,
  [605] = 599,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 552,
  [610] = 594,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 532,
  [615] = 615,
  [616] = 616,
  [617] = 596,
  [618] = 618,
  [619] = 619,
  [620] = 588,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 469,
  [625] = 625,
  [626] = 509,
  [627] = 561,
  [628] = 625,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 573,
  [633] = 633,
  [634] = 634,
  [635] = 565,
  [636] = 533,
  [637] = 521,
  [638] = 501,
  [639] = 469,
  [640] = 499,
  [641] = 641,
  [642] = 642,
  [643] = 531,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 633,
  [648] = 574,
  [649] = 634,
  [650] = 525,
  [651] = 538,
  [652] = 541,
  [653] = 597,
  [654] = 606,
  [655] = 534,
  [656] = 656,
  [657] = 598,
  [658] = 658,
  [659] = 659,
  [660] = 549,
  [661] = 661,
  [662] = 558,
  [663] = 663,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(830);
      ADVANCE_MAP(
        '"', 2,
        '\'', 1269,
        '(', 1276,
        ')', 1277,
        '*', 1284,
        ',', 1287,
        '-', 1384,
        '.', 1381,
        '/', 1490,
        ':', 1268,
        ';', 1359,
        '<', 1487,
        '=', 1335,
        '>', 1488,
        'A', 655,
        'B', 391,
        'C', 108,
        'D', 257,
        'E', 530,
        'F', 113,
        'I', 529,
        'N', 68,
        'P', 462,
        'S', 45,
        'T', 657,
        'U', 517,
        '[', 1273,
        '\\', 26,
        ']', 1274,
        '_', 1420,
        'a', 172,
        'b', 578,
        'c', 109,
        'd', 259,
        'e', 345,
        'f', 268,
        'g', 463,
        'i', 333,
        'k', 396,
        'l', 261,
        'm', 229,
        'n', 199,
        'o', 335,
        'p', 125,
        'r', 230,
        's', 117,
        't', 382,
        'u', 519,
        'v', 579,
        'w', 263,
        '{', 1388,
        '|', 1351,
        '}', 1389,
        '+', 1485,
        '^', 1485,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
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
      ADVANCE_MAP(
        '\'', 1269,
        '(', 1276,
        ')', 1277,
        '*', 1284,
        ',', 1287,
        '-', 15,
        '[', 1272,
        'a', 1193,
        'b', 1148,
        'c', 1240,
        'f', 1081,
        'i', 1131,
        'l', 1157,
        'p', 1160,
        's', 1221,
        'u', 1118,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\'', 1269,
        '(', 1276,
        ')', 1277,
        '*', 1284,
        ',', 1287,
        '-', 15,
        '[', 1272,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\'', 1269,
        '(', 1275,
        ')', 1277,
        '+', 24,
        ',', 1287,
        '-', 1385,
        '.', 822,
        ':', 28,
        '<', 29,
        '=', 1335,
        'A', 1177,
        'B', 1026,
        'C', 999,
        'E', 1106,
        'F', 894,
        'I', 1104,
        'N', 872,
        'P', 1069,
        'S', 856,
        'T', 1179,
        'U', 1097,
        '[', 1273,
        ']', 1274,
        '_', 844,
        'a', 1067,
        'b', 1243,
        'c', 891,
        'e', 1182,
        'i', 994,
        'l', 957,
        'm', 948,
        'n', 1137,
        's', 1027,
        'u', 1098,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\'', 1269,
        '(', 1275,
        ')', 1277,
        '+', 24,
        '-', 1385,
        '.', 822,
        ':', 27,
        '=', 1334,
        'A', 1177,
        'B', 1026,
        'C', 999,
        'E', 1106,
        'F', 894,
        'I', 1104,
        'N', 872,
        'P', 1069,
        'S', 856,
        'T', 1179,
        'U', 1097,
        '[', 1273,
        ']', 1274,
        '_', 844,
        'a', 1067,
        'b', 1243,
        'c', 891,
        'e', 1182,
        'i', 994,
        'l', 957,
        'm', 948,
        'n', 1137,
        's', 1028,
        'u', 1126,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
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
      ADVANCE_MAP(
        '(', 1275,
        ')', 1277,
        ',', 1287,
        '-', 1486,
        '/', 1490,
        ':', 27,
        '<', 1488,
        '>', 1488,
        '\\', 26,
        ']', 1274,
        'e', 482,
        'i', 518,
        'o', 335,
        'r', 294,
        't', 382,
        '{', 16,
        '|', 1351,
        '}', 1389,
        '*', 1485,
        '+', 1485,
        '=', 1485,
        '^', 1485,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '(', 1275,
        ')', 1277,
        '-', 15,
        ':', 1267,
        'A', 1178,
        'F', 1248,
        'I', 1250,
        'S', 1163,
        'U', 1113,
        '[', 1273,
        ']', 1274,
        '_', 1421,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '(', 1275,
        '-', 15,
        ':', 27,
        '=', 30,
        'A', 1178,
        'F', 1248,
        'I', 1250,
        'S', 1163,
        'U', 1113,
        '[', 1273,
        '_', 1421,
        's', 1238,
        'w', 975,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        ')', 1277,
        '-', 15,
        '.', 20,
        '_', 1289,
        'c', 1317,
        'd', 1313,
        'f', 1307,
        'l', 1318,
        's', 1323,
        'u', 1309,
        'v', 1314,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        ')', 1277,
        '-', 15,
        'A', 1222,
        'B', 1026,
        'C', 1022,
        'E', 1106,
        'I', 1105,
        'P', 1069,
        'S', 857,
        '[', 1272,
        'a', 1068,
        'b', 1243,
        'c', 1209,
        's', 1028,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
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
      ADVANCE_MAP(
        'A', 54,
        'C', 56,
        'M', 112,
        'O', 62,
        'X', 58,
        'a', 469,
        'f', 686,
        'm', 116,
        's', 393,
      );
      END_STATE();
    case 35:
      ADVANCE_MAP(
        'A', 688,
        'E', 642,
        'F', 691,
        'G', 238,
        'L', 239,
        'M', 266,
        'N', 240,
        'V', 145,
        'W', 318,
        '_', 726,
        'd', 397,
      );
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
      ADVANCE_MAP(
        '\'', 1269,
        '(', 1276,
        ')', 1277,
        '*', 1284,
        ',', 1287,
        '-', 15,
        ':', 1267,
        '[', 1272,
        'd', 258,
        'g', 463,
        'p', 662,
        'r', 316,
        '{', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(826);
      END_STATE();
    case 827:
      if (eof) ADVANCE(830);
      ADVANCE_MAP(
        '(', 1275,
        ')', 1277,
        ',', 1287,
        '-', 1486,
        '.', 1380,
        '/', 1490,
        ':', 28,
        '<', 1488,
        '=', 1489,
        '>', 1488,
        'A', 743,
        'B', 391,
        'C', 381,
        'E', 530,
        'I', 570,
        'P', 461,
        'S', 44,
        '[', 1272,
        '\\', 26,
        ']', 1274,
        'a', 454,
        'b', 614,
        'c', 110,
        'd', 258,
        'f', 269,
        'g', 463,
        'i', 334,
        'k', 396,
        'l', 262,
        'm', 290,
        'n', 198,
        'p', 125,
        'r', 295,
        's', 118,
        'u', 531,
        '{', 16,
        '}', 1389,
        '*', 1485,
        '+', 1485,
        '^', 1485,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(843);
      END_STATE();
    case 828:
      if (eof) ADVANCE(830);
      ADVANCE_MAP(
        '(', 1275,
        ')', 1277,
        ',', 1287,
        '-', 1486,
        '/', 1490,
        ':', 27,
        '<', 1488,
        '>', 1488,
        '[', 1272,
        '\\', 26,
        ']', 1274,
        'a', 690,
        'b', 605,
        'c', 776,
        'd', 258,
        'e', 344,
        'f', 492,
        'g', 463,
        'i', 575,
        'l', 618,
        'o', 335,
        'p', 582,
        'r', 294,
        's', 747,
        't', 382,
        'u', 546,
        '{', 16,
        '|', 1351,
        '}', 1389,
        '*', 1485,
        '+', 1485,
        '=', 1485,
        '^', 1485,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(828);
      END_STATE();
    case 829:
      if (eof) ADVANCE(830);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(972);
      if (lookahead == 'g') ADVANCE(1072);
      if (lookahead == 'p') ADVANCE(1187);
      if (lookahead == '{') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(829);
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
      ADVANCE_MAP(
        'A', 864,
        'C', 866,
        'M', 892,
        'O', 869,
        'X', 867,
        'a', 1079,
        'f', 1191,
        'm', 896,
        's', 1050,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_sym);
      ADVANCE_MAP(
        'A', 864,
        'C', 866,
        'O', 869,
        'X', 867,
        'a', 1079,
        'f', 1191,
        'm', 896,
        's', 1050,
      );
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
  [91] = {.lex_state = 11},
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
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 828},
  [121] = {.lex_state = 828},
  [122] = {.lex_state = 828},
  [123] = {.lex_state = 828},
  [124] = {.lex_state = 828},
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
  [135] = {.lex_state = 828},
  [136] = {.lex_state = 828},
  [137] = {.lex_state = 828},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 828},
  [140] = {.lex_state = 828},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 827},
  [145] = {.lex_state = 827},
  [146] = {.lex_state = 827},
  [147] = {.lex_state = 827},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 827},
  [154] = {.lex_state = 827},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 827},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 827},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
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
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 828},
  [210] = {.lex_state = 826},
  [211] = {.lex_state = 829},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 828},
  [216] = {.lex_state = 827},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 827},
  [219] = {.lex_state = 829},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 827},
  [222] = {.lex_state = 828},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 827},
  [226] = {.lex_state = 827},
  [227] = {.lex_state = 827},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 828},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 828},
  [232] = {.lex_state = 828},
  [233] = {.lex_state = 828},
  [234] = {.lex_state = 828},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 828},
  [241] = {.lex_state = 828},
  [242] = {.lex_state = 828},
  [243] = {.lex_state = 828},
  [244] = {.lex_state = 828},
  [245] = {.lex_state = 828},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 828},
  [249] = {.lex_state = 828},
  [250] = {.lex_state = 828},
  [251] = {.lex_state = 828},
  [252] = {.lex_state = 828},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 828},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 828},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 829},
  [260] = {.lex_state = 828},
  [261] = {.lex_state = 829},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 828},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 828},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 828},
  [268] = {.lex_state = 828},
  [269] = {.lex_state = 828},
  [270] = {.lex_state = 828},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 828},
  [273] = {.lex_state = 828},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 828},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 828},
  [279] = {.lex_state = 828},
  [280] = {.lex_state = 828},
  [281] = {.lex_state = 828},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 826},
  [286] = {.lex_state = 828},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 828},
  [290] = {.lex_state = 13},
  [291] = {.lex_state = 828},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 828},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 828},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 828},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 828},
  [311] = {.lex_state = 828},
  [312] = {.lex_state = 828},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 13},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 827},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 828},
  [322] = {.lex_state = 9},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 828},
  [337] = {.lex_state = 828},
  [338] = {.lex_state = 828},
  [339] = {.lex_state = 828},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 828},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 828},
  [351] = {.lex_state = 828},
  [352] = {.lex_state = 828},
  [353] = {.lex_state = 828},
  [354] = {.lex_state = 828},
  [355] = {.lex_state = 828},
  [356] = {.lex_state = 828},
  [357] = {.lex_state = 828},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 828},
  [363] = {.lex_state = 828},
  [364] = {.lex_state = 13},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 827},
  [367] = {.lex_state = 13},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 828},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 828},
  [380] = {.lex_state = 9},
  [381] = {.lex_state = 828},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 828},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 827},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 828},
  [389] = {.lex_state = 828},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 828},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 828},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 828},
  [400] = {.lex_state = 828},
  [401] = {.lex_state = 13},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 828},
  [406] = {.lex_state = 828},
  [407] = {.lex_state = 828},
  [408] = {.lex_state = 828},
  [409] = {.lex_state = 828},
  [410] = {.lex_state = 828},
  [411] = {.lex_state = 828},
  [412] = {.lex_state = 828},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 827},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 13},
  [418] = {.lex_state = 11},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 5},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 13},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 13},
  [429] = {.lex_state = 13},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 827},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 11},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 6},
  [442] = {.lex_state = 827},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 827},
  [447] = {.lex_state = 6},
  [448] = {.lex_state = 13},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 6},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 6},
  [454] = {.lex_state = 6},
  [455] = {.lex_state = 6},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 827},
  [464] = {.lex_state = 827},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 13},
  [472] = {.lex_state = 10},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 10},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 13},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 13},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 10},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 5},
  [495] = {.lex_state = 5},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 10},
  [498] = {.lex_state = 5},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 827},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 10},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 13},
  [508] = {.lex_state = 827},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 13},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 13},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 10},
  [518] = {.lex_state = 10},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 13},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 5},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 6},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 827},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 13},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 13},
  [535] = {.lex_state = 5},
  [536] = {.lex_state = 13},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 19},
  [544] = {.lex_state = 13},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 10},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 13},
  [555] = {.lex_state = 5},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 13},
  [564] = {.lex_state = 6},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 13},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 13},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 13},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 5},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 827},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 13},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 13},
  [599] = {.lex_state = 5},
  [600] = {.lex_state = 10},
  [601] = {.lex_state = 5},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 13},
  [605] = {.lex_state = 5},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 10},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 827},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 5},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 5},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 827},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 10},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 13},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 11},
  [646] = {.lex_state = 10},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 13},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 13},
  [658] = {.lex_state = 13},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 5},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 10},
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
    [sym_source_file] = STATE(500),
    [sym_declaration] = STATE(163),
    [sym_def_aggregate_declaration] = STATE(302),
    [sym_glob_declaration] = STATE(302),
    [sym_proc_declaration] = STATE(302),
    [sym_proc_full_declaration] = STATE(299),
    [sym_proc_forward_declaration] = STATE(299),
    [sym_def_declaration] = STATE(302),
    [aux_sym_source_file_repeat1] = STATE(163),
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(268), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(265), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(260), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(286), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(281), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_core_ctype,
    STATE(263), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_core_ctype,
    STATE(280), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_core_ctype,
    STATE(267), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(272), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_core_ctype,
    STATE(275), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(409), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(352), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(353), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(354), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(355), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(232), 1,
      sym_pexpr,
    STATE(249), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(243), 2,
      sym_list_pexpr,
      sym_value,
    STATE(474), 2,
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
  [1872] = 28,
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
    STATE(240), 1,
      sym_pexpr,
    STATE(249), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(243), 2,
      sym_list_pexpr,
      sym_value,
    STATE(474), 2,
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
  [1980] = 28,
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
    STATE(242), 1,
      sym_pexpr,
    STATE(249), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(243), 2,
      sym_list_pexpr,
      sym_value,
    STATE(474), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(412), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(363), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(270), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(279), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(380), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(381), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(400), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      sym_core_ctype,
    STATE(410), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(405), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(362), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(311), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(321), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(322), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(248), 1,
      sym_pexpr,
    STATE(249), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(243), 2,
      sym_list_pexpr,
      sym_value,
    STATE(474), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(269), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(281), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(310), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(336), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(337), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(338), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      sym_core_ctype,
    STATE(339), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(342), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(388), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      sym_core_ctype,
    STATE(350), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(293), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(351), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(291), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(356), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(357), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(278), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(298), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(174), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
      sym_core_ctype,
    STATE(177), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
  [5868] = 28,
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
      sym_core_ctype,
    STATE(178), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(184), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(395), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(233), 1,
      sym_pexpr,
    STATE(249), 1,
      sym_core_ctype,
    ACTIONS(83), 2,
      sym_sym,
      sym_impl,
    ACTIONS(113), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(243), 2,
      sym_list_pexpr,
      sym_value,
    STATE(474), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(312), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(375), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(379), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(273), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(382), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(383), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(389), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(393), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(411), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(399), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(406), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(169), 1,
      sym_core_ctype,
    STATE(289), 1,
      sym_pexpr,
    ACTIONS(17), 2,
      sym_sym,
      sym_impl,
    ACTIONS(47), 2,
      anon_sym_is_signed_LPAREN,
      anon_sym_is_unsigned_LPAREN,
    STATE(170), 2,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(300), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(452), 1,
      sym_expr,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(435), 1,
      sym_expr,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(262), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(201), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(276), 1,
      sym_expr,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(264), 1,
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
    STATE(189), 1,
      sym_expr,
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(204), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(437), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(333), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(419), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(205), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(274), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(282), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(287), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(194), 1,
      sym_expr,
    STATE(199), 1,
      sym_paction,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(200), 1,
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
    STATE(191), 1,
      sym_action,
    STATE(199), 1,
      sym_paction,
    STATE(348), 1,
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
    STATE(256), 1,
      sym_list_pattern,
    STATE(423), 1,
      sym_pattern,
    STATE(570), 1,
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
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(309), 1,
      sym_pattern,
    STATE(570), 1,
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
      anon_sym_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(295), 1,
      sym_pattern,
    STATE(570), 1,
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
    STATE(256), 1,
      sym_list_pattern,
    STATE(308), 1,
      sym_pattern,
    STATE(570), 1,
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
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(294), 1,
      sym_pattern,
    STATE(570), 1,
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
  [9527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(415), 1,
      sym_pattern,
    STATE(570), 1,
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
  [9568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(239), 1,
      sym_pattern,
    STATE(256), 1,
      sym_list_pattern,
    STATE(570), 1,
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
  [9609] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(418), 1,
      sym_pattern,
    STATE(570), 1,
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
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(443), 1,
      sym_pattern,
    STATE(570), 1,
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
  [9691] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(424), 1,
      sym_pattern,
    STATE(570), 1,
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
  [9732] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(256), 1,
      sym_list_pattern,
    STATE(453), 1,
      sym_pattern,
    STATE(570), 1,
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
    STATE(256), 1,
      sym_list_pattern,
    STATE(297), 1,
      sym_pattern,
    STATE(570), 1,
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
    STATE(256), 1,
      sym_list_pattern,
    STATE(439), 1,
      sym_pattern,
    STATE(570), 1,
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
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACK_RBRACK,
    STATE(239), 1,
      sym_pattern,
    STATE(256), 1,
      sym_list_pattern,
    STATE(570), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(346), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(464), 1,
      sym_core_type,
    STATE(508), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(372), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(370), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(396), 1,
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
    STATE(146), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(577), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(661), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(631), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(440), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(230), 1,
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
    STATE(441), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(494), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(529), 1,
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
  [10435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(253), 1,
      aux_sym_memop_op_token1,
    STATE(612), 1,
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
  [10462] = 10,
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
    STATE(165), 1,
      sym_core_object_type,
    STATE(175), 1,
      sym_core_base_type,
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
  [10499] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(229), 1,
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
  [10536] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(238), 1,
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
  [10573] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(253), 1,
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
  [10610] = 10,
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
    STATE(146), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(235), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(515), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(360), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(422), 1,
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
    STATE(146), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(555), 1,
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
    STATE(146), 1,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(330), 1,
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
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(235), 1,
      sym_core_base_type,
    STATE(441), 1,
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
  [10980] = 10,
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
    STATE(253), 1,
      sym_core_base_type,
    STATE(441), 1,
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
  [11017] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(522), 1,
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
  [11054] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(498), 1,
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
  [11091] = 10,
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
    STATE(146), 1,
      sym_core_object_type,
    STATE(613), 1,
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
  [11128] = 13,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(213), 1,
      sym_ctype,
    STATE(228), 1,
      sym_integer_type,
    STATE(527), 1,
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
  [11171] = 10,
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
    STATE(230), 1,
      sym_core_base_type,
    STATE(441), 1,
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
  [11208] = 10,
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
    STATE(238), 1,
      sym_core_base_type,
    STATE(441), 1,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(237), 1,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(237), 1,
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
  [11325] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(237), 1,
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
  [11362] = 3,
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
  [11383] = 3,
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
  [11404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_binary_operator,
    ACTIONS(295), 12,
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
  [11425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_binary_operator,
    ACTIONS(299), 12,
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
  [11446] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(271), 1,
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
  [11483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(303), 11,
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
  [11506] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(258), 1,
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
  [11543] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(283), 1,
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
  [11580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
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
  [11603] = 14,
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
    STATE(542), 1,
      sym_action,
  [11646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_binary_operator,
    ACTIONS(315), 12,
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
  [11667] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(277), 1,
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
  [11704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_binary_operator,
    ACTIONS(319), 12,
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
  [11725] = 12,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(220), 1,
      sym_ctype_star,
    STATE(224), 1,
      sym_basic_type,
    STATE(228), 1,
      sym_integer_type,
    STATE(301), 1,
      sym_ctype,
    ACTIONS(269), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(275), 2,
      anon_sym_const,
      anon_sym_volatile,
  [11764] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
      sym_integer_type,
    STATE(284), 1,
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
  [11801] = 11,
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
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(228), 1,
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
  [11838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_binary_operator,
    ACTIONS(323), 12,
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
  [11859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_binary_operator,
    ACTIONS(327), 11,
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
  [11879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_binary_operator,
    ACTIONS(331), 11,
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
  [11899] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(164), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(299), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(302), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [11929] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      anon_sym_def,
    ACTIONS(342), 1,
      anon_sym_glob,
    ACTIONS(345), 1,
      anon_sym_proc,
    STATE(164), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(299), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(302), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [11959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
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
  [11979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_binary_operator,
    ACTIONS(315), 11,
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
  [11999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_binary_operator,
    ACTIONS(323), 11,
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
  [12019] = 3,
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
  [12039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
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
  [12059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(303), 11,
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
  [12079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_binary_operator,
    ACTIONS(299), 11,
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
  [12099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_binary_operator,
    ACTIONS(319), 11,
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
  [12119] = 3,
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
  [12139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_binary_operator,
    ACTIONS(352), 11,
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
  [12159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 11,
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
  [12179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 11,
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
  [12199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 11,
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
  [12219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 11,
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
  [12239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 11,
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
  [12259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_binary_operator,
    ACTIONS(368), 11,
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
  [12279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_binary_operator,
    ACTIONS(372), 11,
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
  [12299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 11,
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
  [12319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 11,
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
  [12339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 11,
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
  [12359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_binary_operator,
    ACTIONS(384), 11,
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
  [12379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_binary_operator,
    ACTIONS(388), 11,
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
  [12399] = 3,
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
  [12419] = 2,
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
  [12436] = 2,
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
  [12453] = 2,
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
  [12470] = 2,
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
  [12487] = 2,
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
  [12504] = 2,
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
  [12521] = 2,
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
  [12538] = 2,
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
  [12555] = 2,
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
  [12572] = 2,
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
  [12589] = 2,
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
  [12606] = 2,
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
  [12623] = 2,
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
  [12640] = 2,
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
  [12657] = 2,
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
  [12674] = 2,
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
  [12691] = 2,
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
  [12708] = 2,
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
  [12725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 11,
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
  [12742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      aux_sym_integer_type_token1,
    STATE(208), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(424), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      aux_sym_integer_type_token1,
    STATE(208), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(430), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_binary_operator,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_restrict,
    ACTIONS(437), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(445), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12852] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_params_repeat1,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [12875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(464), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_binary_operator,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12941] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_array,
    STATE(168), 1,
      sym_core_object_type,
    ACTIONS(255), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(476), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12994] = 5,
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
  [13013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13030] = 3,
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
  [13045] = 3,
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
  [13060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_array,
    STATE(492), 1,
      sym_core_object_type,
    ACTIONS(217), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(225), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13098] = 5,
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
  [13117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13146] = 3,
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
  [13160] = 3,
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
  [13174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_binary_operator,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_binary_operator,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13216] = 3,
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
  [13230] = 3,
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
  [13244] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(504), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(506), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(506), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COLON_COLON,
    ACTIONS(514), 1,
      sym_binary_operator,
    ACTIONS(510), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_binary_operator,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_binary_operator,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_binary_operator,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(516), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(520), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_binary_operator,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_binary_operator,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(524), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_binary_operator,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_EQ,
    ACTIONS(528), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(532), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [13574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    STATE(398), 1,
      aux_sym_expr_repeat1,
  [13593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 4,
      anon_sym_def,
      sym_sym,
      anon_sym_glob,
      anon_sym_proc,
  [13606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(550), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13619] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      aux_sym_expr_repeat1,
  [13638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(556), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_expr_repeat1,
  [13670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      aux_sym_expr_repeat1,
  [13706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_expr_repeat1,
  [13725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(343), 1,
      aux_sym_expr_repeat1,
  [13744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(568), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(385), 1,
      aux_sym_expr_repeat1,
  [13795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    STATE(387), 1,
      aux_sym_expr_repeat1,
  [13814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_expr_repeat1,
  [13846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(578), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_expr_repeat4,
  [13895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    STATE(317), 1,
      aux_sym_expr_repeat1,
  [13914] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(328), 1,
      aux_sym_expr_repeat1,
  [13933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_expr_repeat1,
  [13952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(590), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13982] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(596), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    STATE(335), 1,
      aux_sym_expr_repeat1,
  [14031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(600), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DeriveCap,
    STATE(594), 1,
      sym_pure_memop_op,
    ACTIONS(604), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(606), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14072] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_sym,
    STATE(303), 1,
      sym_def_fields,
    STATE(219), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [14086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14110] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_COMMA,
  [14126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(618), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(622), 1,
      anon_sym_RBRACK,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym_pattern_repeat1,
  [14154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(618), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_pattern_repeat1,
  [14184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(631), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_expr_repeat3,
  [14224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DeriveCap,
    STATE(610), 1,
      sym_pure_memop_op,
    ACTIONS(604), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COMMA,
  [14298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_expr_repeat1,
    ACTIONS(568), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14312] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_pattern_repeat1,
  [14328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_pattern_repeat1,
  [14344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_COMMA,
  [14357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [14370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
  [14383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_attribute_repeat1,
  [14396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(473), 1,
      sym_name,
    ACTIONS(663), 2,
      sym_sym,
      sym_impl,
  [14407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_params_repeat1,
  [14420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(327), 1,
      sym_member,
  [14433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_core_base_type_repeat1,
  [14459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_pattern_repeat1,
  [14472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_PIPE,
    ACTIONS(678), 1,
      anon_sym_end,
    STATE(320), 1,
      aux_sym_pexpr_repeat1,
  [14485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [14498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(680), 1,
      anon_sym_in,
  [14511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(682), 1,
      anon_sym_PIPE,
    STATE(332), 1,
      aux_sym_expr_repeat2,
  [14524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_expr_repeat3,
  [14537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    ACTIONS(686), 1,
      anon_sym_ailname,
    STATE(371), 1,
      sym_attribute_pair,
  [14550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      aux_sym_params_repeat1,
  [14563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      aux_sym_pexpr_repeat2,
  [14576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_pattern_repeat1,
  [14628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_PIPE,
    ACTIONS(704), 1,
      anon_sym_end,
    STATE(332), 1,
      aux_sym_expr_repeat2,
  [14641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(706), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_expr_repeat3,
  [14665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [14691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [14704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [14717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [14730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_pexpr_repeat2,
  [14756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
  [14769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [14808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_core_base_type_repeat1,
  [14821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_pexpr_repeat2,
  [14834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(732), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_end,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    STATE(394), 1,
      aux_sym_pexpr_repeat1,
  [14858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
  [14871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [14884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(738), 1,
      anon_sym_COMMA,
  [14897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(740), 1,
      anon_sym_COMMA,
  [14910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
  [14923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(742), 1,
      anon_sym_COMMA,
  [14936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [14949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(746), 1,
      anon_sym_COMMA,
  [14962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_expr_repeat4,
  [14975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_expr_repeat4,
  [14988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACK,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_attribute_repeat1,
  [15014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(761), 1,
      anon_sym_COMMA,
  [15027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(763), 1,
      anon_sym_of,
  [15040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(450), 1,
      sym_name,
    ACTIONS(663), 2,
      sym_sym,
      sym_impl,
  [15051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_core_base_type_repeat1,
  [15064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      sym_impl,
    ACTIONS(770), 2,
      anon_sym_struct,
      anon_sym_union,
  [15075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      sym_sym,
    ACTIONS(776), 1,
      anon_sym_LBRACK,
    STATE(658), 1,
      sym_attribute,
  [15088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_core_base_type_repeat1,
  [15127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      aux_sym_attribute_repeat1,
  [15140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_core_base_type_repeat1,
  [15153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_core_base_type_repeat1,
  [15166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_pattern_repeat1,
  [15179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
  [15192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_end,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    STATE(384), 1,
      aux_sym_pexpr_repeat1,
  [15231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [15244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(797), 1,
      anon_sym_in,
  [15257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(797), 1,
      anon_sym_else,
  [15270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(799), 1,
      anon_sym_in,
  [15283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(799), 1,
      anon_sym_else,
  [15296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_end,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    STATE(320), 1,
      aux_sym_pexpr_repeat1,
  [15309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(390), 1,
      sym_member,
  [15335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(801), 1,
      anon_sym_then,
  [15361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [15374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      aux_sym_pexpr_repeat2,
  [15387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_pexpr_repeat2,
  [15413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [15426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(734), 1,
      anon_sym_PIPE,
    STATE(320), 1,
      aux_sym_pexpr_repeat1,
  [15439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(807), 1,
      anon_sym_of,
  [15452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_core_base_type_repeat1,
  [15465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_core_base_type_repeat1,
  [15478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_expr_repeat1,
  [15491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(813), 1,
      anon_sym_of,
  [15504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
  [15517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(568), 1,
      sym_name,
    ACTIONS(663), 2,
      sym_sym,
      sym_impl,
  [15528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      aux_sym_pattern_repeat1,
  [15541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_core_base_type_repeat1,
  [15554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(682), 1,
      anon_sym_PIPE,
    STATE(323), 1,
      aux_sym_expr_repeat2,
  [15567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [15580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_then,
  [15593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(823), 1,
      anon_sym_COMMA,
  [15606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(825), 1,
      anon_sym_COMMA,
  [15619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(827), 1,
      anon_sym_COMMA,
  [15632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(829), 1,
      anon_sym_COMMA,
  [15645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(831), 1,
      anon_sym_COMMA,
  [15658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COLON_COLON,
    ACTIONS(548), 1,
      sym_binary_operator,
    ACTIONS(833), 1,
      anon_sym_then,
  [15671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(837), 1,
      sym_int_const,
  [15689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_EQ,
    ACTIONS(841), 1,
      anon_sym_COLON_COLON,
  [15699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_ailname,
    STATE(457), 1,
      sym_attribute_pair,
  [15709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_sym,
    STATE(620), 1,
      sym_cabs_id,
  [15719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(845), 1,
      anon_sym_EQ_GT,
  [15729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [15739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(647), 1,
      sym_core_ctype,
  [15749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(485), 1,
      sym_core_ctype,
  [15759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON_COLON,
    ACTIONS(847), 1,
      anon_sym_EQ,
  [15777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(849), 1,
      anon_sym_COMMA,
  [15787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_sym,
    STATE(564), 1,
      sym_cabs_id,
  [15805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(623), 1,
      sym_core_ctype,
  [15815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym_sym,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
  [15825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_sym,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
  [15835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      aux_sym_string_token1,
    STATE(456), 1,
      sym_cstring,
  [15845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(506), 1,
      sym_core_ctype,
  [15855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(575), 1,
      sym_core_ctype,
  [15865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(491), 1,
      sym_core_ctype,
  [15875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(488), 1,
      sym_member,
  [15885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(680), 1,
      anon_sym_else,
  [15895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(521), 1,
      sym_core_ctype,
  [15905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(861), 1,
      anon_sym_in,
  [15915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_string_token1,
    STATE(647), 1,
      sym_string,
  [15925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_COLON_COLON,
    ACTIONS(865), 1,
      anon_sym_EQ_GT,
  [15935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_LBRACK,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [15961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON_COLON,
    ACTIONS(873), 1,
      anon_sym_EQ,
  [15971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [15987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(584), 1,
      sym_member,
  [15997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_sym,
    STATE(588), 1,
      sym_cabs_id,
  [16015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      anon_sym_COMMA,
  [16033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [16051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_COLON_COLON,
    ACTIONS(879), 1,
      anon_sym_EQ,
  [16061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_string_token1,
    STATE(633), 1,
      sym_string,
  [16103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [16119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(633), 1,
      sym_core_ctype,
  [16129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(637), 1,
      sym_core_ctype,
  [16139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(425), 1,
      sym_member,
  [16149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    STATE(535), 1,
      sym_glob_ctype_attribute,
  [16159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_core_ctype,
  [16177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_eff,
  [16184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
  [16191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
  [16198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym_memory_order,
  [16205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_sym,
  [16212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COLON,
  [16219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [16226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
  [16233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [16240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
  [16247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COLON,
  [16254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_EQ,
  [16261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_sym,
  [16268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_memory_order,
  [16275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_in,
  [16282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_sym,
  [16289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
  [16296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COMMA,
  [16303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
  [16310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COLON,
  [16317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_in,
  [16324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RBRACE,
  [16331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_memory_order,
  [16338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_COMMA,
  [16345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_COMMA,
  [16352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [16359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
  [16366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COLON_EQ,
  [16373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_COLON_EQ,
  [16380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LPAREN,
  [16387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_COLON,
  [16394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON_EQ,
  [16401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
  [16408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
  [16415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_DOT,
  [16422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COMMA,
  [16429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_COLON,
  [16436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
  [16443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_COLON,
  [16450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COMMA,
  [16457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_sym,
  [16464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACK,
  [16471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
  [16478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [16485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_sym,
  [16492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_eff,
  [16499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      sym_memory_order,
  [16506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_sym,
  [16513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
  [16520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_eff,
  [16527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COLON,
  [16534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_COLON,
  [16541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [16548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      sym_sym,
  [16555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
  [16562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON_EQ,
  [16569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
  [16576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
  [16583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_COMMA,
  [16590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_EQ,
  [16597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [16604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
  [16611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LBRACK,
  [16618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_ail_ctype,
  [16625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_sym,
  [16632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_LBRACE,
  [16639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LBRACE,
  [16646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_sym,
  [16653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COLON_EQ,
  [16660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym_sym,
  [16667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
  [16674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [16681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [16688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [16695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
  [16702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
  [16709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      aux_sym_pure_memop_op_token1,
  [16716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_sym,
  [16723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [16730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COLON,
  [16737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACK,
  [16744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COLON,
  [16751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [16758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [16765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_eff,
  [16772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_COLON,
  [16779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_COLON,
  [16786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      sym_sym,
  [16793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_COLON_EQ,
  [16800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_COLON,
  [16807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_COLON,
  [16814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
  [16821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_COLON,
  [16828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [16835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
  [16842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_COLON,
  [16849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      sym_sym,
  [16856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_EQ,
  [16863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [16870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
  [16877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      sym_sym,
  [16884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [16891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      sym_sym,
  [16898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
  [16905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
  [16912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_COLON,
  [16919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [16926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
  [16933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
  [16940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON,
  [16947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
  [16954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      sym_sym,
  [16961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
  [16968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COLON,
  [16975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
  [16982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [16989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_COLON_EQ,
  [16996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
  [17003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
  [17010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
  [17017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
  [17024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
  [17031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym_sym,
  [17038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
  [17045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_COLON,
  [17052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
  [17059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_in,
  [17066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
  [17073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
  [17080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
  [17087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
  [17094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym_sym,
  [17101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      sym_ub,
  [17108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COLON,
  [17115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_COLON_EQ,
  [17122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
  [17129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      sym_memory_order,
  [17136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      sym_sym,
  [17143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      sym_ub,
  [17150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LPAREN,
  [17157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [17164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
  [17171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COLON,
  [17178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
  [17185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LBRACK,
  [17192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COMMA,
  [17199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_COLON_EQ,
  [17206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_LBRACE,
  [17213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_LPAREN,
  [17220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
  [17227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
  [17234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
  [17241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_LPAREN,
  [17248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
  [17255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
  [17262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
  [17269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COMMA,
  [17276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
  [17283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
  [17290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_LPAREN,
  [17297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      anon_sym_LPAREN,
  [17304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN,
  [17311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
  [17318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_LPAREN,
  [17325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_COLON_EQ,
  [17332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
  [17339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_COMMA,
  [17346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
  [17353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [17360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 1,
      anon_sym_LBRACE,
  [17367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
  [17374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_DOT,
  [17381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_LPAREN,
  [17388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1199), 1,
      anon_sym_LPAREN,
  [17395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_COLON,
  [17402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
  [17409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 1,
      sym_sym,
  [17416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
  [17423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_EQ_GT,
  [17430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 1,
      anon_sym_COLON,
  [17437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_COMMA,
  [17444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
  [17451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
  [17458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
  [17465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
  [17472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_LPAREN,
  [17479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_LPAREN,
  [17486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
  [17493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_sym,
  [17500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_eff,
  [17507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym_sym,
  [17514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      sym_sym,
  [17521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
  [17528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
  [17535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      anon_sym_COLON_EQ,
  [17542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
  [17549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      anon_sym_COLON,
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
  [SMALL_STATE(120)] = 10462,
  [SMALL_STATE(121)] = 10499,
  [SMALL_STATE(122)] = 10536,
  [SMALL_STATE(123)] = 10573,
  [SMALL_STATE(124)] = 10610,
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
  [SMALL_STATE(136)] = 11054,
  [SMALL_STATE(137)] = 11091,
  [SMALL_STATE(138)] = 11128,
  [SMALL_STATE(139)] = 11171,
  [SMALL_STATE(140)] = 11208,
  [SMALL_STATE(141)] = 11245,
  [SMALL_STATE(142)] = 11285,
  [SMALL_STATE(143)] = 11325,
  [SMALL_STATE(144)] = 11362,
  [SMALL_STATE(145)] = 11383,
  [SMALL_STATE(146)] = 11404,
  [SMALL_STATE(147)] = 11425,
  [SMALL_STATE(148)] = 11446,
  [SMALL_STATE(149)] = 11483,
  [SMALL_STATE(150)] = 11506,
  [SMALL_STATE(151)] = 11543,
  [SMALL_STATE(152)] = 11580,
  [SMALL_STATE(153)] = 11603,
  [SMALL_STATE(154)] = 11646,
  [SMALL_STATE(155)] = 11667,
  [SMALL_STATE(156)] = 11704,
  [SMALL_STATE(157)] = 11725,
  [SMALL_STATE(158)] = 11764,
  [SMALL_STATE(159)] = 11801,
  [SMALL_STATE(160)] = 11838,
  [SMALL_STATE(161)] = 11859,
  [SMALL_STATE(162)] = 11879,
  [SMALL_STATE(163)] = 11899,
  [SMALL_STATE(164)] = 11929,
  [SMALL_STATE(165)] = 11959,
  [SMALL_STATE(166)] = 11979,
  [SMALL_STATE(167)] = 11999,
  [SMALL_STATE(168)] = 12019,
  [SMALL_STATE(169)] = 12039,
  [SMALL_STATE(170)] = 12059,
  [SMALL_STATE(171)] = 12079,
  [SMALL_STATE(172)] = 12099,
  [SMALL_STATE(173)] = 12119,
  [SMALL_STATE(174)] = 12139,
  [SMALL_STATE(175)] = 12159,
  [SMALL_STATE(176)] = 12179,
  [SMALL_STATE(177)] = 12199,
  [SMALL_STATE(178)] = 12219,
  [SMALL_STATE(179)] = 12239,
  [SMALL_STATE(180)] = 12259,
  [SMALL_STATE(181)] = 12279,
  [SMALL_STATE(182)] = 12299,
  [SMALL_STATE(183)] = 12319,
  [SMALL_STATE(184)] = 12339,
  [SMALL_STATE(185)] = 12359,
  [SMALL_STATE(186)] = 12379,
  [SMALL_STATE(187)] = 12399,
  [SMALL_STATE(188)] = 12419,
  [SMALL_STATE(189)] = 12436,
  [SMALL_STATE(190)] = 12453,
  [SMALL_STATE(191)] = 12470,
  [SMALL_STATE(192)] = 12487,
  [SMALL_STATE(193)] = 12504,
  [SMALL_STATE(194)] = 12521,
  [SMALL_STATE(195)] = 12538,
  [SMALL_STATE(196)] = 12555,
  [SMALL_STATE(197)] = 12572,
  [SMALL_STATE(198)] = 12589,
  [SMALL_STATE(199)] = 12606,
  [SMALL_STATE(200)] = 12623,
  [SMALL_STATE(201)] = 12640,
  [SMALL_STATE(202)] = 12657,
  [SMALL_STATE(203)] = 12674,
  [SMALL_STATE(204)] = 12691,
  [SMALL_STATE(205)] = 12708,
  [SMALL_STATE(206)] = 12725,
  [SMALL_STATE(207)] = 12742,
  [SMALL_STATE(208)] = 12763,
  [SMALL_STATE(209)] = 12784,
  [SMALL_STATE(210)] = 12800,
  [SMALL_STATE(211)] = 12818,
  [SMALL_STATE(212)] = 12837,
  [SMALL_STATE(213)] = 12852,
  [SMALL_STATE(214)] = 12875,
  [SMALL_STATE(215)] = 12890,
  [SMALL_STATE(216)] = 12907,
  [SMALL_STATE(217)] = 12926,
  [SMALL_STATE(218)] = 12941,
  [SMALL_STATE(219)] = 12960,
  [SMALL_STATE(220)] = 12979,
  [SMALL_STATE(221)] = 12994,
  [SMALL_STATE(222)] = 13013,
  [SMALL_STATE(223)] = 13030,
  [SMALL_STATE(224)] = 13045,
  [SMALL_STATE(225)] = 13060,
  [SMALL_STATE(226)] = 13079,
  [SMALL_STATE(227)] = 13098,
  [SMALL_STATE(228)] = 13117,
  [SMALL_STATE(229)] = 13132,
  [SMALL_STATE(230)] = 13146,
  [SMALL_STATE(231)] = 13160,
  [SMALL_STATE(232)] = 13174,
  [SMALL_STATE(233)] = 13188,
  [SMALL_STATE(234)] = 13202,
  [SMALL_STATE(235)] = 13216,
  [SMALL_STATE(236)] = 13230,
  [SMALL_STATE(237)] = 13244,
  [SMALL_STATE(238)] = 13262,
  [SMALL_STATE(239)] = 13276,
  [SMALL_STATE(240)] = 13290,
  [SMALL_STATE(241)] = 13304,
  [SMALL_STATE(242)] = 13318,
  [SMALL_STATE(243)] = 13334,
  [SMALL_STATE(244)] = 13348,
  [SMALL_STATE(245)] = 13362,
  [SMALL_STATE(246)] = 13376,
  [SMALL_STATE(247)] = 13390,
  [SMALL_STATE(248)] = 13404,
  [SMALL_STATE(249)] = 13418,
  [SMALL_STATE(250)] = 13432,
  [SMALL_STATE(251)] = 13446,
  [SMALL_STATE(252)] = 13460,
  [SMALL_STATE(253)] = 13474,
  [SMALL_STATE(254)] = 13488,
  [SMALL_STATE(255)] = 13502,
  [SMALL_STATE(256)] = 13516,
  [SMALL_STATE(257)] = 13530,
  [SMALL_STATE(258)] = 13544,
  [SMALL_STATE(259)] = 13561,
  [SMALL_STATE(260)] = 13574,
  [SMALL_STATE(261)] = 13593,
  [SMALL_STATE(262)] = 13606,
  [SMALL_STATE(263)] = 13619,
  [SMALL_STATE(264)] = 13638,
  [SMALL_STATE(265)] = 13651,
  [SMALL_STATE(266)] = 13670,
  [SMALL_STATE(267)] = 13687,
  [SMALL_STATE(268)] = 13706,
  [SMALL_STATE(269)] = 13725,
  [SMALL_STATE(270)] = 13744,
  [SMALL_STATE(271)] = 13759,
  [SMALL_STATE(272)] = 13776,
  [SMALL_STATE(273)] = 13795,
  [SMALL_STATE(274)] = 13814,
  [SMALL_STATE(275)] = 13827,
  [SMALL_STATE(276)] = 13846,
  [SMALL_STATE(277)] = 13859,
  [SMALL_STATE(278)] = 13876,
  [SMALL_STATE(279)] = 13895,
  [SMALL_STATE(280)] = 13914,
  [SMALL_STATE(281)] = 13933,
  [SMALL_STATE(282)] = 13952,
  [SMALL_STATE(283)] = 13965,
  [SMALL_STATE(284)] = 13982,
  [SMALL_STATE(285)] = 13999,
  [SMALL_STATE(286)] = 14012,
  [SMALL_STATE(287)] = 14031,
  [SMALL_STATE(288)] = 14044,
  [SMALL_STATE(289)] = 14058,
  [SMALL_STATE(290)] = 14072,
  [SMALL_STATE(291)] = 14086,
  [SMALL_STATE(292)] = 14100,
  [SMALL_STATE(293)] = 14110,
  [SMALL_STATE(294)] = 14126,
  [SMALL_STATE(295)] = 14138,
  [SMALL_STATE(296)] = 14154,
  [SMALL_STATE(297)] = 14168,
  [SMALL_STATE(298)] = 14184,
  [SMALL_STATE(299)] = 14198,
  [SMALL_STATE(300)] = 14208,
  [SMALL_STATE(301)] = 14224,
  [SMALL_STATE(302)] = 14238,
  [SMALL_STATE(303)] = 14248,
  [SMALL_STATE(304)] = 14258,
  [SMALL_STATE(305)] = 14272,
  [SMALL_STATE(306)] = 14282,
  [SMALL_STATE(307)] = 14298,
  [SMALL_STATE(308)] = 14312,
  [SMALL_STATE(309)] = 14328,
  [SMALL_STATE(310)] = 14344,
  [SMALL_STATE(311)] = 14357,
  [SMALL_STATE(312)] = 14370,
  [SMALL_STATE(313)] = 14383,
  [SMALL_STATE(314)] = 14396,
  [SMALL_STATE(315)] = 14407,
  [SMALL_STATE(316)] = 14420,
  [SMALL_STATE(317)] = 14433,
  [SMALL_STATE(318)] = 14446,
  [SMALL_STATE(319)] = 14459,
  [SMALL_STATE(320)] = 14472,
  [SMALL_STATE(321)] = 14485,
  [SMALL_STATE(322)] = 14498,
  [SMALL_STATE(323)] = 14511,
  [SMALL_STATE(324)] = 14524,
  [SMALL_STATE(325)] = 14537,
  [SMALL_STATE(326)] = 14550,
  [SMALL_STATE(327)] = 14563,
  [SMALL_STATE(328)] = 14576,
  [SMALL_STATE(329)] = 14589,
  [SMALL_STATE(330)] = 14602,
  [SMALL_STATE(331)] = 14615,
  [SMALL_STATE(332)] = 14628,
  [SMALL_STATE(333)] = 14641,
  [SMALL_STATE(334)] = 14652,
  [SMALL_STATE(335)] = 14665,
  [SMALL_STATE(336)] = 14678,
  [SMALL_STATE(337)] = 14691,
  [SMALL_STATE(338)] = 14704,
  [SMALL_STATE(339)] = 14717,
  [SMALL_STATE(340)] = 14730,
  [SMALL_STATE(341)] = 14743,
  [SMALL_STATE(342)] = 14756,
  [SMALL_STATE(343)] = 14769,
  [SMALL_STATE(344)] = 14782,
  [SMALL_STATE(345)] = 14795,
  [SMALL_STATE(346)] = 14808,
  [SMALL_STATE(347)] = 14821,
  [SMALL_STATE(348)] = 14834,
  [SMALL_STATE(349)] = 14845,
  [SMALL_STATE(350)] = 14858,
  [SMALL_STATE(351)] = 14871,
  [SMALL_STATE(352)] = 14884,
  [SMALL_STATE(353)] = 14897,
  [SMALL_STATE(354)] = 14910,
  [SMALL_STATE(355)] = 14923,
  [SMALL_STATE(356)] = 14936,
  [SMALL_STATE(357)] = 14949,
  [SMALL_STATE(358)] = 14962,
  [SMALL_STATE(359)] = 14975,
  [SMALL_STATE(360)] = 14988,
  [SMALL_STATE(361)] = 15001,
  [SMALL_STATE(362)] = 15014,
  [SMALL_STATE(363)] = 15027,
  [SMALL_STATE(364)] = 15040,
  [SMALL_STATE(365)] = 15051,
  [SMALL_STATE(366)] = 15064,
  [SMALL_STATE(367)] = 15075,
  [SMALL_STATE(368)] = 15088,
  [SMALL_STATE(369)] = 15101,
  [SMALL_STATE(370)] = 15114,
  [SMALL_STATE(371)] = 15127,
  [SMALL_STATE(372)] = 15140,
  [SMALL_STATE(373)] = 15153,
  [SMALL_STATE(374)] = 15166,
  [SMALL_STATE(375)] = 15179,
  [SMALL_STATE(376)] = 15192,
  [SMALL_STATE(377)] = 15205,
  [SMALL_STATE(378)] = 15218,
  [SMALL_STATE(379)] = 15231,
  [SMALL_STATE(380)] = 15244,
  [SMALL_STATE(381)] = 15257,
  [SMALL_STATE(382)] = 15270,
  [SMALL_STATE(383)] = 15283,
  [SMALL_STATE(384)] = 15296,
  [SMALL_STATE(385)] = 15309,
  [SMALL_STATE(386)] = 15322,
  [SMALL_STATE(387)] = 15335,
  [SMALL_STATE(388)] = 15348,
  [SMALL_STATE(389)] = 15361,
  [SMALL_STATE(390)] = 15374,
  [SMALL_STATE(391)] = 15387,
  [SMALL_STATE(392)] = 15400,
  [SMALL_STATE(393)] = 15413,
  [SMALL_STATE(394)] = 15426,
  [SMALL_STATE(395)] = 15439,
  [SMALL_STATE(396)] = 15452,
  [SMALL_STATE(397)] = 15465,
  [SMALL_STATE(398)] = 15478,
  [SMALL_STATE(399)] = 15491,
  [SMALL_STATE(400)] = 15504,
  [SMALL_STATE(401)] = 15517,
  [SMALL_STATE(402)] = 15528,
  [SMALL_STATE(403)] = 15541,
  [SMALL_STATE(404)] = 15554,
  [SMALL_STATE(405)] = 15567,
  [SMALL_STATE(406)] = 15580,
  [SMALL_STATE(407)] = 15593,
  [SMALL_STATE(408)] = 15606,
  [SMALL_STATE(409)] = 15619,
  [SMALL_STATE(410)] = 15632,
  [SMALL_STATE(411)] = 15645,
  [SMALL_STATE(412)] = 15658,
  [SMALL_STATE(413)] = 15671,
  [SMALL_STATE(414)] = 15679,
  [SMALL_STATE(415)] = 15689,
  [SMALL_STATE(416)] = 15699,
  [SMALL_STATE(417)] = 15709,
  [SMALL_STATE(418)] = 15719,
  [SMALL_STATE(419)] = 15729,
  [SMALL_STATE(420)] = 15739,
  [SMALL_STATE(421)] = 15749,
  [SMALL_STATE(422)] = 15759,
  [SMALL_STATE(423)] = 15767,
  [SMALL_STATE(424)] = 15777,
  [SMALL_STATE(425)] = 15787,
  [SMALL_STATE(426)] = 15795,
  [SMALL_STATE(427)] = 15805,
  [SMALL_STATE(428)] = 15815,
  [SMALL_STATE(429)] = 15825,
  [SMALL_STATE(430)] = 15835,
  [SMALL_STATE(431)] = 15845,
  [SMALL_STATE(432)] = 15855,
  [SMALL_STATE(433)] = 15865,
  [SMALL_STATE(434)] = 15875,
  [SMALL_STATE(435)] = 15885,
  [SMALL_STATE(436)] = 15895,
  [SMALL_STATE(437)] = 15905,
  [SMALL_STATE(438)] = 15915,
  [SMALL_STATE(439)] = 15925,
  [SMALL_STATE(440)] = 15935,
  [SMALL_STATE(441)] = 15943,
  [SMALL_STATE(442)] = 15951,
  [SMALL_STATE(443)] = 15961,
  [SMALL_STATE(444)] = 15971,
  [SMALL_STATE(445)] = 15979,
  [SMALL_STATE(446)] = 15987,
  [SMALL_STATE(447)] = 15997,
  [SMALL_STATE(448)] = 16005,
  [SMALL_STATE(449)] = 16015,
  [SMALL_STATE(450)] = 16023,
  [SMALL_STATE(451)] = 16033,
  [SMALL_STATE(452)] = 16041,
  [SMALL_STATE(453)] = 16051,
  [SMALL_STATE(454)] = 16061,
  [SMALL_STATE(455)] = 16069,
  [SMALL_STATE(456)] = 16077,
  [SMALL_STATE(457)] = 16085,
  [SMALL_STATE(458)] = 16093,
  [SMALL_STATE(459)] = 16103,
  [SMALL_STATE(460)] = 16111,
  [SMALL_STATE(461)] = 16119,
  [SMALL_STATE(462)] = 16129,
  [SMALL_STATE(463)] = 16139,
  [SMALL_STATE(464)] = 16149,
  [SMALL_STATE(465)] = 16159,
  [SMALL_STATE(466)] = 16167,
  [SMALL_STATE(467)] = 16177,
  [SMALL_STATE(468)] = 16184,
  [SMALL_STATE(469)] = 16191,
  [SMALL_STATE(470)] = 16198,
  [SMALL_STATE(471)] = 16205,
  [SMALL_STATE(472)] = 16212,
  [SMALL_STATE(473)] = 16219,
  [SMALL_STATE(474)] = 16226,
  [SMALL_STATE(475)] = 16233,
  [SMALL_STATE(476)] = 16240,
  [SMALL_STATE(477)] = 16247,
  [SMALL_STATE(478)] = 16254,
  [SMALL_STATE(479)] = 16261,
  [SMALL_STATE(480)] = 16268,
  [SMALL_STATE(481)] = 16275,
  [SMALL_STATE(482)] = 16282,
  [SMALL_STATE(483)] = 16289,
  [SMALL_STATE(484)] = 16296,
  [SMALL_STATE(485)] = 16303,
  [SMALL_STATE(486)] = 16310,
  [SMALL_STATE(487)] = 16317,
  [SMALL_STATE(488)] = 16324,
  [SMALL_STATE(489)] = 16331,
  [SMALL_STATE(490)] = 16338,
  [SMALL_STATE(491)] = 16345,
  [SMALL_STATE(492)] = 16352,
  [SMALL_STATE(493)] = 16359,
  [SMALL_STATE(494)] = 16366,
  [SMALL_STATE(495)] = 16373,
  [SMALL_STATE(496)] = 16380,
  [SMALL_STATE(497)] = 16387,
  [SMALL_STATE(498)] = 16394,
  [SMALL_STATE(499)] = 16401,
  [SMALL_STATE(500)] = 16408,
  [SMALL_STATE(501)] = 16415,
  [SMALL_STATE(502)] = 16422,
  [SMALL_STATE(503)] = 16429,
  [SMALL_STATE(504)] = 16436,
  [SMALL_STATE(505)] = 16443,
  [SMALL_STATE(506)] = 16450,
  [SMALL_STATE(507)] = 16457,
  [SMALL_STATE(508)] = 16464,
  [SMALL_STATE(509)] = 16471,
  [SMALL_STATE(510)] = 16478,
  [SMALL_STATE(511)] = 16485,
  [SMALL_STATE(512)] = 16492,
  [SMALL_STATE(513)] = 16499,
  [SMALL_STATE(514)] = 16506,
  [SMALL_STATE(515)] = 16513,
  [SMALL_STATE(516)] = 16520,
  [SMALL_STATE(517)] = 16527,
  [SMALL_STATE(518)] = 16534,
  [SMALL_STATE(519)] = 16541,
  [SMALL_STATE(520)] = 16548,
  [SMALL_STATE(521)] = 16555,
  [SMALL_STATE(522)] = 16562,
  [SMALL_STATE(523)] = 16569,
  [SMALL_STATE(524)] = 16576,
  [SMALL_STATE(525)] = 16583,
  [SMALL_STATE(526)] = 16590,
  [SMALL_STATE(527)] = 16597,
  [SMALL_STATE(528)] = 16604,
  [SMALL_STATE(529)] = 16611,
  [SMALL_STATE(530)] = 16618,
  [SMALL_STATE(531)] = 16625,
  [SMALL_STATE(532)] = 16632,
  [SMALL_STATE(533)] = 16639,
  [SMALL_STATE(534)] = 16646,
  [SMALL_STATE(535)] = 16653,
  [SMALL_STATE(536)] = 16660,
  [SMALL_STATE(537)] = 16667,
  [SMALL_STATE(538)] = 16674,
  [SMALL_STATE(539)] = 16681,
  [SMALL_STATE(540)] = 16688,
  [SMALL_STATE(541)] = 16695,
  [SMALL_STATE(542)] = 16702,
  [SMALL_STATE(543)] = 16709,
  [SMALL_STATE(544)] = 16716,
  [SMALL_STATE(545)] = 16723,
  [SMALL_STATE(546)] = 16730,
  [SMALL_STATE(547)] = 16737,
  [SMALL_STATE(548)] = 16744,
  [SMALL_STATE(549)] = 16751,
  [SMALL_STATE(550)] = 16758,
  [SMALL_STATE(551)] = 16765,
  [SMALL_STATE(552)] = 16772,
  [SMALL_STATE(553)] = 16779,
  [SMALL_STATE(554)] = 16786,
  [SMALL_STATE(555)] = 16793,
  [SMALL_STATE(556)] = 16800,
  [SMALL_STATE(557)] = 16807,
  [SMALL_STATE(558)] = 16814,
  [SMALL_STATE(559)] = 16821,
  [SMALL_STATE(560)] = 16828,
  [SMALL_STATE(561)] = 16835,
  [SMALL_STATE(562)] = 16842,
  [SMALL_STATE(563)] = 16849,
  [SMALL_STATE(564)] = 16856,
  [SMALL_STATE(565)] = 16863,
  [SMALL_STATE(566)] = 16870,
  [SMALL_STATE(567)] = 16877,
  [SMALL_STATE(568)] = 16884,
  [SMALL_STATE(569)] = 16891,
  [SMALL_STATE(570)] = 16898,
  [SMALL_STATE(571)] = 16905,
  [SMALL_STATE(572)] = 16912,
  [SMALL_STATE(573)] = 16919,
  [SMALL_STATE(574)] = 16926,
  [SMALL_STATE(575)] = 16933,
  [SMALL_STATE(576)] = 16940,
  [SMALL_STATE(577)] = 16947,
  [SMALL_STATE(578)] = 16954,
  [SMALL_STATE(579)] = 16961,
  [SMALL_STATE(580)] = 16968,
  [SMALL_STATE(581)] = 16975,
  [SMALL_STATE(582)] = 16982,
  [SMALL_STATE(583)] = 16989,
  [SMALL_STATE(584)] = 16996,
  [SMALL_STATE(585)] = 17003,
  [SMALL_STATE(586)] = 17010,
  [SMALL_STATE(587)] = 17017,
  [SMALL_STATE(588)] = 17024,
  [SMALL_STATE(589)] = 17031,
  [SMALL_STATE(590)] = 17038,
  [SMALL_STATE(591)] = 17045,
  [SMALL_STATE(592)] = 17052,
  [SMALL_STATE(593)] = 17059,
  [SMALL_STATE(594)] = 17066,
  [SMALL_STATE(595)] = 17073,
  [SMALL_STATE(596)] = 17080,
  [SMALL_STATE(597)] = 17087,
  [SMALL_STATE(598)] = 17094,
  [SMALL_STATE(599)] = 17101,
  [SMALL_STATE(600)] = 17108,
  [SMALL_STATE(601)] = 17115,
  [SMALL_STATE(602)] = 17122,
  [SMALL_STATE(603)] = 17129,
  [SMALL_STATE(604)] = 17136,
  [SMALL_STATE(605)] = 17143,
  [SMALL_STATE(606)] = 17150,
  [SMALL_STATE(607)] = 17157,
  [SMALL_STATE(608)] = 17164,
  [SMALL_STATE(609)] = 17171,
  [SMALL_STATE(610)] = 17178,
  [SMALL_STATE(611)] = 17185,
  [SMALL_STATE(612)] = 17192,
  [SMALL_STATE(613)] = 17199,
  [SMALL_STATE(614)] = 17206,
  [SMALL_STATE(615)] = 17213,
  [SMALL_STATE(616)] = 17220,
  [SMALL_STATE(617)] = 17227,
  [SMALL_STATE(618)] = 17234,
  [SMALL_STATE(619)] = 17241,
  [SMALL_STATE(620)] = 17248,
  [SMALL_STATE(621)] = 17255,
  [SMALL_STATE(622)] = 17262,
  [SMALL_STATE(623)] = 17269,
  [SMALL_STATE(624)] = 17276,
  [SMALL_STATE(625)] = 17283,
  [SMALL_STATE(626)] = 17290,
  [SMALL_STATE(627)] = 17297,
  [SMALL_STATE(628)] = 17304,
  [SMALL_STATE(629)] = 17311,
  [SMALL_STATE(630)] = 17318,
  [SMALL_STATE(631)] = 17325,
  [SMALL_STATE(632)] = 17332,
  [SMALL_STATE(633)] = 17339,
  [SMALL_STATE(634)] = 17346,
  [SMALL_STATE(635)] = 17353,
  [SMALL_STATE(636)] = 17360,
  [SMALL_STATE(637)] = 17367,
  [SMALL_STATE(638)] = 17374,
  [SMALL_STATE(639)] = 17381,
  [SMALL_STATE(640)] = 17388,
  [SMALL_STATE(641)] = 17395,
  [SMALL_STATE(642)] = 17402,
  [SMALL_STATE(643)] = 17409,
  [SMALL_STATE(644)] = 17416,
  [SMALL_STATE(645)] = 17423,
  [SMALL_STATE(646)] = 17430,
  [SMALL_STATE(647)] = 17437,
  [SMALL_STATE(648)] = 17444,
  [SMALL_STATE(649)] = 17451,
  [SMALL_STATE(650)] = 17458,
  [SMALL_STATE(651)] = 17465,
  [SMALL_STATE(652)] = 17472,
  [SMALL_STATE(653)] = 17479,
  [SMALL_STATE(654)] = 17486,
  [SMALL_STATE(655)] = 17493,
  [SMALL_STATE(656)] = 17500,
  [SMALL_STATE(657)] = 17507,
  [SMALL_STATE(658)] = 17514,
  [SMALL_STATE(659)] = 17521,
  [SMALL_STATE(660)] = 17528,
  [SMALL_STATE(661)] = 17535,
  [SMALL_STATE(662)] = 17542,
  [SMALL_STATE(663)] = 17549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(511),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2, 0, 0), SHIFT_REPEAT(505),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(416),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0), SHIFT_REPEAT(98),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2, 0, 0), SHIFT_REPEAT(82),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0), SHIFT_REPEAT(463),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2, 0, 0), SHIFT_REPEAT(482),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4, 0, 0),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1, 0, 0),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [951] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2, 0, 0),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4, 0, 0),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_core(void) {
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
