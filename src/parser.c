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
#define STATE_COUNT 639
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
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
  aux_sym_sym_token1 = 8,
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
  sym_floating_type = 24,
  anon_sym_ail_ctype = 25,
  anon_sym_EQ = 26,
  anon_sym_glob = 27,
  anon_sym_pure = 28,
  anon_sym_memop = 29,
  anon_sym_let = 30,
  anon_sym_in = 31,
  anon_sym_if = 32,
  anon_sym_then = 33,
  anon_sym_else = 34,
  anon_sym_case = 35,
  anon_sym_of = 36,
  anon_sym_PIPE = 37,
  anon_sym_EQ_GT = 38,
  anon_sym_end = 39,
  anon_sym_pcall = 40,
  anon_sym_ccall = 41,
  anon_sym_unseq = 42,
  anon_sym_weak = 43,
  anon_sym_SEMI = 44,
  anon_sym_strong = 45,
  anon_sym_bound = 46,
  anon_sym_save = 47,
  anon_sym_run = 48,
  anon_sym_nd = 49,
  anon_sym_par = 50,
  anon_sym_eff = 51,
  anon_sym_undef = 52,
  anon_sym_error = 53,
  anon_sym_array_shift = 54,
  anon_sym_member_shift = 55,
  anon_sym_DOT = 56,
  anon_sym_not = 57,
  anon_sym_DASH = 58,
  anon_sym_cfunction = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  anon_sym_is_scalar = 62,
  anon_sym_is_integer = 63,
  anon_sym_is_signed = 64,
  anon_sym_is_unsigned = 65,
  anon_sym_are_compatible = 66,
  anon_sym_LBRACK_RBRACK = 67,
  anon_sym_COLON_COLON = 68,
  anon_sym_DeriveCap = 69,
  anon_sym_CapAssignValue = 70,
  anon_sym_Ptr_tIntValue = 71,
  anon_sym_PtrEq = 72,
  anon_sym_PtrNe = 73,
  anon_sym_PtrLt = 74,
  anon_sym_PtrGt = 75,
  anon_sym_PtrLe = 76,
  anon_sym_PtrGe = 77,
  anon_sym_Ptrdiff = 78,
  anon_sym_IntFromPtr = 79,
  anon_sym_PtrFromInt = 80,
  anon_sym_PtrValidForDeref = 81,
  anon_sym_PtrWellAligned = 82,
  anon_sym_PtrArrayShift = 83,
  anon_sym_PtrMemberShift = 84,
  anon_sym__ = 85,
  anon_sym_unit = 86,
  anon_sym_boolean = 87,
  anon_sym_ctype = 88,
  anon_sym_loaded = 89,
  anon_sym_storable = 90,
  anon_sym_integer = 91,
  anon_sym_floating = 92,
  anon_sym_pointer = 93,
  anon_sym_array = 94,
  sym_memory_order = 95,
  anon_sym_create_readonly = 96,
  anon_sym_create = 97,
  anon_sym_alloc = 98,
  anon_sym_free = 99,
  anon_sym_kill = 100,
  anon_sym_store = 101,
  anon_sym_store_lock = 102,
  anon_sym_load = 103,
  anon_sym_seq_rmw = 104,
  anon_sym_seq_rmw_with_forward = 105,
  anon_sym_rmw = 106,
  anon_sym_fence = 107,
  anon_sym_neg = 108,
  sym_ub = 109,
  aux_sym_string_token1 = 110,
  anon_sym_Array = 111,
  anon_sym_Ivmax = 112,
  anon_sym_Ivmin = 113,
  anon_sym_Ivsizeof = 114,
  anon_sym_Ivalignof = 115,
  anon_sym_Specified = 116,
  anon_sym_Unspecified = 117,
  anon_sym_Fvfromint = 118,
  anon_sym_Ivfromfloat = 119,
  anon_sym_IvCOMPL = 120,
  anon_sym_IvAND = 121,
  anon_sym_IvOR = 122,
  anon_sym_IvXOR = 123,
  sym_binary_operator = 124,
  sym_bool_literal = 125,
  anon_sym_IvMaxAlignment = 126,
  anon_sym_NULL = 127,
  anon_sym_Cfunction = 128,
  anon_sym_Unit = 129,
  sym_impl = 130,
  anon_sym_ailname = 131,
  anon_sym_proc = 132,
  sym_source_file = 133,
  sym_declaration = 134,
  sym_def_aggregate_declaration = 135,
  sym_sym = 136,
  sym_def_fields = 137,
  sym_def_field = 138,
  sym_core_ctype = 139,
  sym_ctype = 140,
  sym_ctype_star = 141,
  sym_params = 142,
  sym_integer_type = 143,
  sym_basic_type = 144,
  sym_glob_ctype_attribute = 145,
  sym_glob_declaration = 146,
  sym_expr = 147,
  sym_core_type = 148,
  sym_pexpr = 149,
  sym_list_pexpr = 150,
  sym_pure_memop_op = 151,
  sym_memop_op = 152,
  sym_pattern = 153,
  sym_list_pattern = 154,
  sym_name = 155,
  sym_core_base_type = 156,
  sym_core_object_type = 157,
  sym_action = 158,
  sym_paction = 159,
  sym_string = 160,
  sym_cstring = 161,
  sym_ctor = 162,
  sym_cabs_id = 163,
  sym_member = 164,
  sym_value = 165,
  sym_attribute = 166,
  sym_attribute_pair = 167,
  sym_proc_declaration = 168,
  sym_proc_full_declaration = 169,
  sym_proc_forward_declaration = 170,
  sym_def_declaration = 171,
  aux_sym_source_file_repeat1 = 172,
  aux_sym_def_fields_repeat1 = 173,
  aux_sym_params_repeat1 = 174,
  aux_sym_integer_type_repeat1 = 175,
  aux_sym_expr_repeat1 = 176,
  aux_sym_expr_repeat2 = 177,
  aux_sym_expr_repeat3 = 178,
  aux_sym_expr_repeat4 = 179,
  aux_sym_pexpr_repeat1 = 180,
  aux_sym_pexpr_repeat2 = 181,
  aux_sym_pattern_repeat1 = 182,
  aux_sym_core_base_type_repeat1 = 183,
  aux_sym_attribute_repeat1 = 184,
  aux_sym_proc_full_declaration_repeat1 = 185,
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
  [aux_sym_sym_token1] = "sym_token1",
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
  [anon_sym_is_signed] = "is_signed",
  [anon_sym_is_unsigned] = "is_unsigned",
  [anon_sym_are_compatible] = "are_compatible",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DeriveCap] = "DeriveCap",
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
  [sym_sym] = "sym",
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
  [aux_sym_sym_token1] = aux_sym_sym_token1,
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
  [anon_sym_is_signed] = anon_sym_is_signed,
  [anon_sym_is_unsigned] = anon_sym_is_unsigned,
  [anon_sym_are_compatible] = anon_sym_are_compatible,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DeriveCap] = anon_sym_DeriveCap,
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
  [sym_sym] = sym_sym,
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
  [aux_sym_sym_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_is_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are_compatible] = {
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
  [sym_sym] = {
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
  [7] = 6,
  [8] = 8,
  [9] = 5,
  [10] = 10,
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
  [21] = 14,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 16,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 22,
  [39] = 39,
  [40] = 15,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 41,
  [52] = 52,
  [53] = 53,
  [54] = 29,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 37,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 31,
  [66] = 64,
  [67] = 67,
  [68] = 39,
  [69] = 58,
  [70] = 26,
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
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 106,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 112,
  [117] = 117,
  [118] = 111,
  [119] = 119,
  [120] = 120,
  [121] = 113,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 119,
  [128] = 128,
  [129] = 129,
  [130] = 126,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 112,
  [139] = 139,
  [140] = 140,
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
  [151] = 140,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 158,
  [159] = 144,
  [160] = 156,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 153,
  [175] = 154,
  [176] = 176,
  [177] = 177,
  [178] = 145,
  [179] = 179,
  [180] = 146,
  [181] = 181,
  [182] = 182,
  [183] = 150,
  [184] = 155,
  [185] = 185,
  [186] = 186,
  [187] = 149,
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
  [207] = 140,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 176,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 148,
  [219] = 216,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 215,
  [224] = 224,
  [225] = 215,
  [226] = 226,
  [227] = 227,
  [228] = 216,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 177,
  [234] = 234,
  [235] = 186,
  [236] = 236,
  [237] = 164,
  [238] = 238,
  [239] = 179,
  [240] = 169,
  [241] = 165,
  [242] = 173,
  [243] = 163,
  [244] = 162,
  [245] = 245,
  [246] = 246,
  [247] = 171,
  [248] = 248,
  [249] = 185,
  [250] = 166,
  [251] = 251,
  [252] = 172,
  [253] = 181,
  [254] = 168,
  [255] = 255,
  [256] = 167,
  [257] = 161,
  [258] = 258,
  [259] = 259,
  [260] = 259,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 263,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 261,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 263,
  [277] = 277,
  [278] = 278,
  [279] = 269,
  [280] = 267,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 258,
  [286] = 176,
  [287] = 277,
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
  [300] = 289,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 294,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 296,
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
  [325] = 314,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 332,
  [336] = 336,
  [337] = 337,
  [338] = 318,
  [339] = 339,
  [340] = 313,
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
  [352] = 321,
  [353] = 349,
  [354] = 342,
  [355] = 355,
  [356] = 334,
  [357] = 357,
  [358] = 351,
  [359] = 359,
  [360] = 319,
  [361] = 324,
  [362] = 362,
  [363] = 316,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 357,
  [370] = 370,
  [371] = 362,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 348,
  [381] = 381,
  [382] = 381,
  [383] = 355,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 394,
  [398] = 398,
  [399] = 399,
  [400] = 336,
  [401] = 401,
  [402] = 402,
  [403] = 370,
  [404] = 336,
  [405] = 405,
  [406] = 365,
  [407] = 372,
  [408] = 343,
  [409] = 409,
  [410] = 365,
  [411] = 411,
  [412] = 412,
  [413] = 378,
  [414] = 414,
  [415] = 415,
  [416] = 146,
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
  [427] = 419,
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
  [439] = 153,
  [440] = 433,
  [441] = 154,
  [442] = 149,
  [443] = 443,
  [444] = 155,
  [445] = 150,
  [446] = 436,
  [447] = 447,
  [448] = 448,
  [449] = 145,
  [450] = 428,
  [451] = 422,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 435,
  [456] = 453,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 422,
  [461] = 461,
  [462] = 462,
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
  [478] = 472,
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
  [547] = 545,
  [548] = 548,
  [549] = 549,
  [550] = 544,
  [551] = 551,
  [552] = 552,
  [553] = 539,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 510,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 513,
  [566] = 566,
  [567] = 567,
  [568] = 506,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 482,
  [573] = 573,
  [574] = 533,
  [575] = 575,
  [576] = 576,
  [577] = 536,
  [578] = 543,
  [579] = 542,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 583,
  [585] = 585,
  [586] = 575,
  [587] = 587,
  [588] = 588,
  [589] = 538,
  [590] = 590,
  [591] = 546,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 525,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 536,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 597,
  [607] = 592,
  [608] = 587,
  [609] = 585,
  [610] = 610,
  [611] = 611,
  [612] = 533,
  [613] = 551,
  [614] = 540,
  [615] = 615,
  [616] = 524,
  [617] = 512,
  [618] = 505,
  [619] = 604,
  [620] = 598,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 604,
  [626] = 549,
  [627] = 627,
  [628] = 511,
  [629] = 596,
  [630] = 590,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 594,
  [637] = 637,
  [638] = 593,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(801);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1255);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*') ADVANCE(1263);
      if (lookahead == '+' ||
          lookahead == '^') ADVANCE(1417);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(1317);
      if (lookahead == '.') ADVANCE(1314);
      if (lookahead == '/') ADVANCE(1422);
      if (lookahead == ':') ADVANCE(1247);
      if (lookahead == ';') ADVANCE(1296);
      if (lookahead == '<') ADVANCE(1419);
      if (lookahead == '=') ADVANCE(1272);
      if (lookahead == '>') ADVANCE(1420);
      if (lookahead == 'A') ADVANCE(630);
      if (lookahead == 'B') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(247);
      if (lookahead == 'E') ADVANCE(497);
      if (lookahead == 'F') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(509);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'P') ADVANCE(443);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(632);
      if (lookahead == 'U') ADVANCE(498);
      if (lookahead == '[') ADVANCE(1252);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == '_') ADVANCE(1351);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(555);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == 'v') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(253);
      if (lookahead == '{') ADVANCE(1321);
      if (lookahead == '|') ADVANCE(1288);
      if (lookahead == '}') ADVANCE(1322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1390);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1255);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*') ADVANCE(1263);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '=') ADVANCE(1271);
      if (lookahead == '[') ADVANCE(1251);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == 'b') ADVANCE(1122);
      if (lookahead == 'c') ADVANCE(1219);
      if (lookahead == 'f') ADVANCE(1051);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == 'l') ADVANCE(1125);
      if (lookahead == 'p') ADVANCE(1137);
      if (lookahead == 's') ADVANCE(1197);
      if (lookahead == 'u') ADVANCE(1091);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1255);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*') ADVANCE(1263);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(1199);
      if (lookahead == 'B') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(1068);
      if (lookahead == 'I') ADVANCE(1077);
      if (lookahead == 'P') ADVANCE(1037);
      if (lookahead == 'S') ADVANCE(825);
      if (lookahead == '[') ADVANCE(1251);
      if (lookahead == 'a') ADVANCE(1036);
      if (lookahead == 'b') ADVANCE(1223);
      if (lookahead == 'c') ADVANCE(1186);
      if (lookahead == 's') ADVANCE(993);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(794);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(1272);
      if (lookahead == 'A') ADVANCE(1153);
      if (lookahead == 'B') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(963);
      if (lookahead == 'E') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(857);
      if (lookahead == 'I') ADVANCE(1076);
      if (lookahead == 'N') ADVANCE(837);
      if (lookahead == 'P') ADVANCE(1037);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'T') ADVANCE(1155);
      if (lookahead == 'U') ADVANCE(1069);
      if (lookahead == '[') ADVANCE(1252);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead == 'b') ADVANCE(1223);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'i') ADVANCE(958);
      if (lookahead == 'l') ADVANCE(922);
      if (lookahead == 'm') ADVANCE(912);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead == 's') ADVANCE(992);
      if (lookahead == 'u') ADVANCE(1070);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(794);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '=') ADVANCE(1271);
      if (lookahead == 'A') ADVANCE(1153);
      if (lookahead == 'B') ADVANCE(991);
      if (lookahead == 'C') ADVANCE(963);
      if (lookahead == 'E') ADVANCE(1068);
      if (lookahead == 'F') ADVANCE(857);
      if (lookahead == 'I') ADVANCE(1076);
      if (lookahead == 'N') ADVANCE(837);
      if (lookahead == 'P') ADVANCE(1037);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'T') ADVANCE(1155);
      if (lookahead == 'U') ADVANCE(1069);
      if (lookahead == '[') ADVANCE(1252);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == '_') ADVANCE(813);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead == 'b') ADVANCE(1223);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead == 'e') ADVANCE(1158);
      if (lookahead == 'i') ADVANCE(958);
      if (lookahead == 'l') ADVANCE(922);
      if (lookahead == 'm') ADVANCE(912);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead == 's') ADVANCE(993);
      if (lookahead == 'u') ADVANCE(1088);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '>') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1246);
      if (lookahead == 'A') ADVANCE(1154);
      if (lookahead == 'F') ADVANCE(1229);
      if (lookahead == 'I') ADVANCE(1230);
      if (lookahead == 'S') ADVANCE(1139);
      if (lookahead == 'U') ADVANCE(1083);
      if (lookahead == '[') ADVANCE(1252);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == '_') ADVANCE(1352);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(1154);
      if (lookahead == 'F') ADVANCE(1229);
      if (lookahead == 'I') ADVANCE(1230);
      if (lookahead == 'S') ADVANCE(1139);
      if (lookahead == 'U') ADVANCE(1083);
      if (lookahead == '[') ADVANCE(1252);
      if (lookahead == '_') ADVANCE(1352);
      if (lookahead == 's') ADVANCE(1217);
      if (lookahead == 'w') ADVANCE(939);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '_') ADVANCE(821);
      if (lookahead == 'c') ADVANCE(1130);
      if (lookahead == 'd') ADVANCE(1113);
      if (lookahead == 'f') ADVANCE(1053);
      if (lookahead == 'l') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1209);
      if (lookahead == 'u') ADVANCE(1099);
      if (lookahead == 'v') ADVANCE(1106);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(1264);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '>') ADVANCE(1389);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '}') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(1267);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(683);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(1417);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(1334);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1334);
      if (lookahead == '=') ADVANCE(810);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(1289);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == 'Y') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(1388);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'X') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'f') ADVANCE(660);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(693);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead == 'E') ADVANCE(617);
      if (lookahead == 'F') ADVANCE(665);
      if (lookahead == 'G') ADVANCE(228);
      if (lookahead == 'L') ADVANCE(229);
      if (lookahead == 'M') ADVANCE(255);
      if (lookahead == 'N') ADVANCE(230);
      if (lookahead == 'V') ADVANCE(141);
      if (lookahead == 'W') ADVANCE(303);
      if (lookahead == '_') ADVANCE(700);
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(473);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(474);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(1411);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(304);
      END_STATE();
    case 46:
      if (lookahead == 'F') ADVANCE(584);
      END_STATE();
    case 47:
      if (lookahead == 'F') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 48:
      if (lookahead == 'H') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(524);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(528);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(1426);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(1409);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(1433);
      END_STATE();
    case 59:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 61:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'P') ADVANCE(726);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(1413);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(1415);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'S') ADVANCE(369);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(370);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == 'p') ADVANCE(470);
      END_STATE();
    case 69:
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'V') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'V') ADVANCE(152);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(406);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(793);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(795);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(542);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(769);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(686);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(614);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(588);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(340);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(387);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(546);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(653);
      if (lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(397);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(537);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(684);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(685);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(186);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(745);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(691);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(692);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(763);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 't') ADVANCE(784);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 't') ADVANCE(789);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(774);
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(1273);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(786);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(393);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(457);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(460);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(289);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(461);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(431);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(1436);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(1376);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(1261);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(680);
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(591);
      if (lookahead == 'd') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(723);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(704);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(1302);
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(1302);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(1290);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(1382);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(1249);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(1299);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(1360);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1432);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1373);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1401);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1327);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1403);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1329);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1348);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1384);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1381);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(1284);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(1275);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead == 't') ADVANCE(1341);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == 't') ADVANCE(1340);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(1339);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1432);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1259);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1270);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1337);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1336);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1331);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1357);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(676);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 318:
      if (lookahead == 'f') ADVANCE(1281);
      if (lookahead == 'n') ADVANCE(1280);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 319:
      if (lookahead == 'f') ADVANCE(1281);
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 320:
      if (lookahead == 'f') ADVANCE(1287);
      END_STATE();
    case 321:
      if (lookahead == 'f') ADVANCE(804);
      END_STATE();
    case 322:
      if (lookahead == 'f') ADVANCE(1304);
      END_STATE();
    case 323:
      if (lookahead == 'f') ADVANCE(1305);
      END_STATE();
    case 324:
      if (lookahead == 'f') ADVANCE(1432);
      END_STATE();
    case 325:
      if (lookahead == 'f') ADVANCE(1344);
      END_STATE();
    case 326:
      if (lookahead == 'f') ADVANCE(1397);
      END_STATE();
    case 327:
      if (lookahead == 'f') ADVANCE(1399);
      END_STATE();
    case 328:
      if (lookahead == 'f') ADVANCE(1347);
      END_STATE();
    case 329:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 330:
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'w') ADVANCE(415);
      END_STATE();
    case 332:
      if (lookahead == 'f') ADVANCE(667);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(711);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(712);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(713);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(715);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(396);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(471);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(586);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 344:
      if (lookahead == 'g') ADVANCE(1387);
      END_STATE();
    case 345:
      if (lookahead == 'g') ADVANCE(1297);
      END_STATE();
    case 346:
      if (lookahead == 'g') ADVANCE(1366);
      END_STATE();
    case 347:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 348:
      if (lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 349:
      if (lookahead == 'g') ADVANCE(540);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(530);
      END_STATE();
    case 351:
      if (lookahead == 'g') ADVANCE(550);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 353:
      if (lookahead == 'g') ADVANCE(532);
      END_STATE();
    case 354:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 355:
      if (lookahead == 'g') ADVANCE(534);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(536);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 364:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 365:
      if (lookahead == 'h') ADVANCE(268);
      END_STATE();
    case 366:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 367:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 368:
      if (lookahead == 'h') ADVANCE(408);
      END_STATE();
    case 369:
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 370:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 371:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 372:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 373:
      if (lookahead == 'h') ADVANCE(156);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(694);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(746);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(792);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(766);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(553);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(767);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(458);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 433:
      if (lookahead == 'k') ADVANCE(1294);
      END_STATE();
    case 434:
      if (lookahead == 'k') ADVANCE(1380);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(1378);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(1292);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(1291);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(1373);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(782);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(678);
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(598);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 476:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 477:
      if (lookahead == 'm') ADVANCE(771);
      END_STATE();
    case 478:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 479:
      if (lookahead == 'm') ADVANCE(611);
      END_STATE();
    case 480:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(612);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(417);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(1280);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(1301);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(1283);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(1395);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(808);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(1432);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(1355);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(1428);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(1319);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(709);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 't') ADVANCE(788);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(752);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(633);
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead == 't') ADVANCE(1353);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 601:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 602:
      if (lookahead == 'p') ADVANCE(1276);
      END_STATE();
    case 603:
      if (lookahead == 'p') ADVANCE(1335);
      END_STATE();
    case 604:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 605:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 606:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 607:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 608:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 609:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 610:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 611:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 612:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(658);
      END_STATE();
    case 614:
      if (lookahead == 'p') ADVANCE(295);
      END_STATE();
    case 615:
      if (lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 616:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 617:
      if (lookahead == 'q') ADVANCE(1338);
      END_STATE();
    case 618:
      if (lookahead == 'q') ADVANCE(1293);
      END_STATE();
    case 619:
      if (lookahead == 'q') ADVANCE(74);
      END_STATE();
    case 620:
      if (lookahead == 'q') ADVANCE(90);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(1303);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(1307);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(1432);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(1368);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(1345);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(1325);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(1364);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 631:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(674);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 671:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 672:
      if (lookahead == 's') ADVANCE(1432);
      END_STATE();
    case 673:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 674:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 675:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 677:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 678:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(705);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(733);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(421);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(1278);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(1315);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(1430);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(1257);
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(1269);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(1432);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(1407);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(1311);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(1349);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(1424);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(785);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(787);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(790);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 753:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(515);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 758:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 761:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 762:
      if (lookahead == 'u') ADVANCE(747);
      END_STATE();
    case 763:
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 764:
      if (lookahead == 'v') ADVANCE(405);
      END_STATE();
    case 765:
      if (lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 766:
      if (lookahead == 'v') ADVANCE(234);
      END_STATE();
    case 767:
      if (lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 768:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 769:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 770:
      if (lookahead == 'w') ADVANCE(1385);
      END_STATE();
    case 771:
      if (lookahead == 'w') ADVANCE(1383);
      END_STATE();
    case 772:
      if (lookahead == 'w') ADVANCE(394);
      END_STATE();
    case 773:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 774:
      if (lookahead == 'x') ADVANCE(1393);
      END_STATE();
    case 775:
      if (lookahead == 'x') ADVANCE(1432);
      END_STATE();
    case 776:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 777:
      if (lookahead == 'x') ADVANCE(261);
      END_STATE();
    case 778:
      if (lookahead == 'x') ADVANCE(273);
      END_STATE();
    case 779:
      if (lookahead == 'y') ADVANCE(1391);
      END_STATE();
    case 780:
      if (lookahead == 'y') ADVANCE(1371);
      END_STATE();
    case 781:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 782:
      if (lookahead == 'y') ADVANCE(1374);
      END_STATE();
    case 783:
      if (lookahead == 'y') ADVANCE(1370);
      END_STATE();
    case 784:
      if (lookahead == 'y') ADVANCE(605);
      END_STATE();
    case 785:
      if (lookahead == 'y') ADVANCE(606);
      END_STATE();
    case 786:
      if (lookahead == 'y') ADVANCE(730);
      END_STATE();
    case 787:
      if (lookahead == 'y') ADVANCE(608);
      END_STATE();
    case 788:
      if (lookahead == 'y') ADVANCE(607);
      END_STATE();
    case 789:
      if (lookahead == 'y') ADVANCE(609);
      END_STATE();
    case 790:
      if (lookahead == 'y') ADVANCE(610);
      END_STATE();
    case 791:
      if (lookahead == 'z') ADVANCE(263);
      END_STATE();
    case 792:
      if (lookahead == 'z') ADVANCE(269);
      END_STATE();
    case 793:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1417);
      END_STATE();
    case 794:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 795:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1434);
      END_STATE();
    case 796:
      if (eof) ADVANCE(801);
      if (lookahead == '\'') ADVANCE(1248);
      if (lookahead == '(') ADVANCE(1255);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*') ADVANCE(1263);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1246);
      if (lookahead == '[') ADVANCE(1251);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(796)
      END_STATE();
    case 797:
      if (eof) ADVANCE(801);
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1417);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(1418);
      if (lookahead == '.') ADVANCE(1313);
      if (lookahead == '/') ADVANCE(1422);
      if (lookahead == ':') ADVANCE(1247);
      if (lookahead == '<') ADVANCE(1420);
      if (lookahead == '=') ADVANCE(1421);
      if (lookahead == '>') ADVANCE(1420);
      if (lookahead == 'A') ADVANCE(716);
      if (lookahead == 'B') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(497);
      if (lookahead == 'I') ADVANCE(548);
      if (lookahead == 'P') ADVANCE(442);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == '[') ADVANCE(1251);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'b') ADVANCE(592);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'k') ADVANCE(378);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(510);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(1322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(797)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(812);
      END_STATE();
    case 798:
      if (eof) ADVANCE(801);
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1417);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(1418);
      if (lookahead == '/') ADVANCE(1422);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(1420);
      if (lookahead == '=') ADVANCE(1421);
      if (lookahead == '>') ADVANCE(1420);
      if (lookahead == '[') ADVANCE(1251);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'b') ADVANCE(582);
      if (lookahead == 'c') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(472);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(525);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(798)
      END_STATE();
    case 799:
      if (eof) ADVANCE(801);
      if (lookahead == '(') ADVANCE(1254);
      if (lookahead == ')') ADVANCE(1256);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '^') ADVANCE(1417);
      if (lookahead == ',') ADVANCE(1266);
      if (lookahead == '-') ADVANCE(1418);
      if (lookahead == '/') ADVANCE(1422);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(1420);
      if (lookahead == '>') ADVANCE(1420);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(1253);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'p') ADVANCE(637);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(1288);
      if (lookahead == '}') ADVANCE(1322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(799)
      END_STATE();
    case 800:
      if (eof) ADVANCE(801);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(937);
      if (lookahead == 'g') ADVANCE(1041);
      if (lookahead == 'p') ADVANCE(1165);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(800)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(815);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(830);
      if (lookahead == 'C') ADVANCE(831);
      if (lookahead == 'M') ADVANCE(855);
      if (lookahead == 'O') ADVANCE(834);
      if (lookahead == 'X') ADVANCE(832);
      if (lookahead == 'a') ADVANCE(1049);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'm') ADVANCE(859);
      if (lookahead == 's') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(830);
      if (lookahead == 'C') ADVANCE(831);
      if (lookahead == 'O') ADVANCE(834);
      if (lookahead == 'X') ADVANCE(832);
      if (lookahead == 'a') ADVANCE(1049);
      if (lookahead == 'f') ADVANCE(1167);
      if (lookahead == 'm') ADVANCE(859);
      if (lookahead == 's') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'D') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(836);
      if (lookahead == 'p') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'M') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'N') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'P') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'U') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1178);
      if (lookahead == 'f') ADVANCE(1228);
      if (lookahead == 't') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1048);
      if (lookahead == 'v') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead == 'i') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1233);
      if (lookahead == 'i') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(934);
      if (lookahead == 'o') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(870);
      if (lookahead == 'i') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(919);
      if (lookahead == 'i') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == 'r') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1282);
      if (lookahead == 's') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1224);
      if (lookahead == 'h') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1010);
      if (lookahead == 'w') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1242);
      if (lookahead == 't') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 's') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1101);
      if (lookahead == 's') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(902);
      if (lookahead == 'l') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'k') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(994);
      if (lookahead == 'r') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1202);
      if (lookahead == 'v') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1072);
      if (lookahead == 't') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == 'r') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead == 't') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1245);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1245);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1334);
      if (lookahead == '=') ADVANCE(810);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1333);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1289);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_is_signed);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_is_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(812);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(673);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(666);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(452);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(772);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_ub);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '=') ADVANCE(1417);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1417);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1289);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1417);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1433);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1434);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
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
  [71] = {.lex_state = 797},
  [72] = {.lex_state = 797},
  [73] = {.lex_state = 797},
  [74] = {.lex_state = 797},
  [75] = {.lex_state = 797},
  [76] = {.lex_state = 797},
  [77] = {.lex_state = 797},
  [78] = {.lex_state = 797},
  [79] = {.lex_state = 797},
  [80] = {.lex_state = 797},
  [81] = {.lex_state = 797},
  [82] = {.lex_state = 797},
  [83] = {.lex_state = 797},
  [84] = {.lex_state = 797},
  [85] = {.lex_state = 797},
  [86] = {.lex_state = 797},
  [87] = {.lex_state = 797},
  [88] = {.lex_state = 797},
  [89] = {.lex_state = 797},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 798},
  [106] = {.lex_state = 798},
  [107] = {.lex_state = 798},
  [108] = {.lex_state = 798},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 798},
  [111] = {.lex_state = 798},
  [112] = {.lex_state = 798},
  [113] = {.lex_state = 798},
  [114] = {.lex_state = 798},
  [115] = {.lex_state = 798},
  [116] = {.lex_state = 798},
  [117] = {.lex_state = 798},
  [118] = {.lex_state = 798},
  [119] = {.lex_state = 798},
  [120] = {.lex_state = 798},
  [121] = {.lex_state = 798},
  [122] = {.lex_state = 798},
  [123] = {.lex_state = 798},
  [124] = {.lex_state = 798},
  [125] = {.lex_state = 798},
  [126] = {.lex_state = 798},
  [127] = {.lex_state = 798},
  [128] = {.lex_state = 798},
  [129] = {.lex_state = 798},
  [130] = {.lex_state = 798},
  [131] = {.lex_state = 798},
  [132] = {.lex_state = 798},
  [133] = {.lex_state = 798},
  [134] = {.lex_state = 798},
  [135] = {.lex_state = 798},
  [136] = {.lex_state = 798},
  [137] = {.lex_state = 798},
  [138] = {.lex_state = 798},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 797},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 797},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 798},
  [146] = {.lex_state = 798},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 799},
  [149] = {.lex_state = 798},
  [150] = {.lex_state = 798},
  [151] = {.lex_state = 799},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 798},
  [154] = {.lex_state = 798},
  [155] = {.lex_state = 798},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 799},
  [162] = {.lex_state = 799},
  [163] = {.lex_state = 799},
  [164] = {.lex_state = 799},
  [165] = {.lex_state = 799},
  [166] = {.lex_state = 799},
  [167] = {.lex_state = 799},
  [168] = {.lex_state = 799},
  [169] = {.lex_state = 799},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 799},
  [172] = {.lex_state = 799},
  [173] = {.lex_state = 799},
  [174] = {.lex_state = 799},
  [175] = {.lex_state = 799},
  [176] = {.lex_state = 799},
  [177] = {.lex_state = 799},
  [178] = {.lex_state = 799},
  [179] = {.lex_state = 799},
  [180] = {.lex_state = 799},
  [181] = {.lex_state = 799},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 799},
  [184] = {.lex_state = 799},
  [185] = {.lex_state = 799},
  [186] = {.lex_state = 799},
  [187] = {.lex_state = 799},
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
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 796},
  [211] = {.lex_state = 800},
  [212] = {.lex_state = 799},
  [213] = {.lex_state = 800},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 797},
  [216] = {.lex_state = 797},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 799},
  [219] = {.lex_state = 797},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 797},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 797},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 797},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 799},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 799},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 799},
  [238] = {.lex_state = 799},
  [239] = {.lex_state = 799},
  [240] = {.lex_state = 799},
  [241] = {.lex_state = 799},
  [242] = {.lex_state = 799},
  [243] = {.lex_state = 799},
  [244] = {.lex_state = 799},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 799},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 799},
  [250] = {.lex_state = 799},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 799},
  [253] = {.lex_state = 799},
  [254] = {.lex_state = 799},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 799},
  [257] = {.lex_state = 799},
  [258] = {.lex_state = 799},
  [259] = {.lex_state = 799},
  [260] = {.lex_state = 799},
  [261] = {.lex_state = 799},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 796},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 799},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 799},
  [273] = {.lex_state = 799},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 800},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 799},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 799},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 799},
  [283] = {.lex_state = 799},
  [284] = {.lex_state = 799},
  [285] = {.lex_state = 799},
  [286] = {.lex_state = 800},
  [287] = {.lex_state = 799},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 799},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 799},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 799},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 799},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 799},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 799},
  [315] = {.lex_state = 799},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 797},
  [319] = {.lex_state = 799},
  [320] = {.lex_state = 799},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 799},
  [323] = {.lex_state = 799},
  [324] = {.lex_state = 799},
  [325] = {.lex_state = 799},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 799},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 799},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 799},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 799},
  [335] = {.lex_state = 799},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 799},
  [338] = {.lex_state = 797},
  [339] = {.lex_state = 799},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 799},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 797},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 799},
  [356] = {.lex_state = 799},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 799},
  [361] = {.lex_state = 799},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 799},
  [373] = {.lex_state = 799},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 799},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 799},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 799},
  [382] = {.lex_state = 799},
  [383] = {.lex_state = 799},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 799},
  [392] = {.lex_state = 799},
  [393] = {.lex_state = 799},
  [394] = {.lex_state = 799},
  [395] = {.lex_state = 799},
  [396] = {.lex_state = 799},
  [397] = {.lex_state = 799},
  [398] = {.lex_state = 799},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 799},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 799},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 799},
  [414] = {.lex_state = 799},
  [415] = {.lex_state = 799},
  [416] = {.lex_state = 6},
  [417] = {.lex_state = 4},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 797},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 4},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 4},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 4},
  [432] = {.lex_state = 6},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 4},
  [437] = {.lex_state = 9},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 6},
  [442] = {.lex_state = 6},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 6},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 797},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 6},
  [451] = {.lex_state = 4},
  [452] = {.lex_state = 4},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 4},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 5},
  [459] = {.lex_state = 4},
  [460] = {.lex_state = 4},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 797},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 4},
  [466] = {.lex_state = 6},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 797},
  [471] = {.lex_state = 9},
  [472] = {.lex_state = 797},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 4},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 4},
  [478] = {.lex_state = 797},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 9},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 5},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 5},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 8},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 5},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 5},
  [501] = {.lex_state = 8},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 797},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 5},
  [510] = {.lex_state = 8},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 8},
  [514] = {.lex_state = 8},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 5},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 5},
  [529] = {.lex_state = 8},
  [530] = {.lex_state = 8},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 8},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 8},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 8},
  [543] = {.lex_state = 8},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 8},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 8},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 8},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 5},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 8},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 8},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 5},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 8},
  [579] = {.lex_state = 8},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 6},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 5},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 8},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 8},
  [601] = {.lex_state = 8},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 4},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 5},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 797},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 8},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 797},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 8},
  [622] = {.lex_state = 4},
  [623] = {.lex_state = 797},
  [624] = {.lex_state = 5},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 6},
  [632] = {.lex_state = 4},
  [633] = {.lex_state = 5},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 8},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 8},
  [638] = {.lex_state = 0},
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
    [anon_sym_is_signed] = ACTIONS(1),
    [anon_sym_is_unsigned] = ACTIONS(1),
    [anon_sym_are_compatible] = ACTIONS(1),
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
    [sym_source_file] = STATE(573),
    [sym_declaration] = STATE(182),
    [sym_def_aggregate_declaration] = STATE(308),
    [sym_glob_declaration] = STATE(308),
    [sym_proc_declaration] = STATE(308),
    [sym_proc_full_declaration] = STATE(291),
    [sym_proc_forward_declaration] = STATE(291),
    [sym_def_declaration] = STATE(308),
    [aux_sym_source_file_repeat1] = STATE(182),
    [sym_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [anon_sym_glob] = ACTIONS(7),
    [anon_sym_proc] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_union,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(279), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [111] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(57), 1,
      anon_sym_struct,
    ACTIONS(59), 1,
      anon_sym_union,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(269), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [222] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(283), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [330] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(258), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [438] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(259), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [546] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(260), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [654] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(277), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [762] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(285), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [870] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(273), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [978] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(287), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1086] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(315), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1191] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(339), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1296] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(272), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1401] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(381), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1506] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(166), 1,
      sym_pexpr,
    STATE(186), 1,
      sym_core_ctype,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1611] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(284), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1716] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(282), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1821] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(373), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [1926] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(376), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2031] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(261), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2136] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(355), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2241] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_memop,
    ACTIONS(89), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_case,
    ACTIONS(95), 1,
      anon_sym_undef,
    ACTIONS(97), 1,
      anon_sym_error,
    ACTIONS(99), 1,
      anon_sym_array_shift,
    ACTIONS(101), 1,
      anon_sym_member_shift,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_are_compatible,
    ACTIONS(109), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(111), 1,
      anon_sym_NULL,
    ACTIONS(113), 1,
      anon_sym_Cfunction,
    ACTIONS(115), 1,
      sym_impl,
    STATE(218), 1,
      sym_sym,
    STATE(235), 1,
      sym_core_ctype,
    STATE(252), 1,
      sym_pexpr,
    STATE(239), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(77), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(103), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2346] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(415), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2451] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(414), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2556] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(361), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2661] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(397), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2766] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(301), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2871] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_memop,
    ACTIONS(89), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_case,
    ACTIONS(95), 1,
      anon_sym_undef,
    ACTIONS(97), 1,
      anon_sym_error,
    ACTIONS(99), 1,
      anon_sym_array_shift,
    ACTIONS(101), 1,
      anon_sym_member_shift,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_are_compatible,
    ACTIONS(109), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(111), 1,
      anon_sym_NULL,
    ACTIONS(113), 1,
      anon_sym_Cfunction,
    ACTIONS(115), 1,
      sym_impl,
    STATE(218), 1,
      sym_sym,
    STATE(235), 1,
      sym_core_ctype,
    STATE(256), 1,
      sym_pexpr,
    STATE(239), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(77), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(103), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [2976] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_memop,
    ACTIONS(89), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_case,
    ACTIONS(95), 1,
      anon_sym_undef,
    ACTIONS(97), 1,
      anon_sym_error,
    ACTIONS(99), 1,
      anon_sym_array_shift,
    ACTIONS(101), 1,
      anon_sym_member_shift,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_are_compatible,
    ACTIONS(109), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(111), 1,
      anon_sym_NULL,
    ACTIONS(113), 1,
      anon_sym_Cfunction,
    ACTIONS(115), 1,
      sym_impl,
    STATE(218), 1,
      sym_sym,
    STATE(235), 1,
      sym_core_ctype,
    STATE(250), 1,
      sym_pexpr,
    STATE(239), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(77), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(103), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3081] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(360), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3186] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(394), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3291] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(398), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3396] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(172), 1,
      sym_pexpr,
    STATE(186), 1,
      sym_core_ctype,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3501] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3606] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(401), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3711] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(314), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3816] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(383), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [3921] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(378), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4026] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(382), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4131] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(356), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4236] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(328), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4341] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(330), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4446] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(337), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4551] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(320), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4656] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4761] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(372), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4866] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(295), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [4971] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(322), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5076] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(323), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5181] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(334), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5286] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(341), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5391] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(311), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5496] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(167), 1,
      sym_pexpr,
    STATE(186), 1,
      sym_core_ctype,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5601] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(396), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5706] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_memop,
    ACTIONS(89), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_case,
    ACTIONS(95), 1,
      anon_sym_undef,
    ACTIONS(97), 1,
      anon_sym_error,
    ACTIONS(99), 1,
      anon_sym_array_shift,
    ACTIONS(101), 1,
      anon_sym_member_shift,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_are_compatible,
    ACTIONS(109), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(111), 1,
      anon_sym_NULL,
    ACTIONS(113), 1,
      anon_sym_Cfunction,
    ACTIONS(115), 1,
      sym_impl,
    STATE(218), 1,
      sym_sym,
    STATE(235), 1,
      sym_core_ctype,
    STATE(238), 1,
      sym_pexpr,
    STATE(239), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(77), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(103), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5811] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(395), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [5916] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(335), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6021] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(325), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6126] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(298), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6231] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(393), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6336] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(392), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6441] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(391), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6546] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_memop,
    ACTIONS(89), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_case,
    ACTIONS(95), 1,
      anon_sym_undef,
    ACTIONS(97), 1,
      anon_sym_error,
    ACTIONS(99), 1,
      anon_sym_array_shift,
    ACTIONS(101), 1,
      anon_sym_member_shift,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_are_compatible,
    ACTIONS(109), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(111), 1,
      anon_sym_NULL,
    ACTIONS(113), 1,
      anon_sym_Cfunction,
    ACTIONS(115), 1,
      sym_impl,
    STATE(218), 1,
      sym_sym,
    STATE(235), 1,
      sym_core_ctype,
    STATE(247), 1,
      sym_pexpr,
    STATE(239), 2,
      sym_list_pexpr,
      sym_value,
    STATE(584), 2,
      sym_name,
      sym_ctor,
    ACTIONS(77), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(103), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6651] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(319), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6756] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(171), 1,
      sym_pexpr,
    STATE(186), 1,
      sym_core_ctype,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6861] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(283), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [6966] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(413), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [7071] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(332), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [7176] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
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
      anon_sym_array_shift,
    ACTIONS(39), 1,
      anon_sym_member_shift,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_are_compatible,
    ACTIONS(47), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(51), 1,
      anon_sym_NULL,
    ACTIONS(53), 1,
      anon_sym_Cfunction,
    ACTIONS(55), 1,
      sym_impl,
    STATE(148), 1,
      sym_sym,
    STATE(186), 1,
      sym_core_ctype,
    STATE(324), 1,
      sym_pexpr,
    STATE(179), 2,
      sym_list_pexpr,
      sym_value,
    STATE(583), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(41), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(49), 13,
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
  [7281] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(292), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7374] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(281), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7464] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(475), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7554] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(271), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7644] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(274), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7734] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(201), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7824] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(438), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7914] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(429), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8004] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(199), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8094] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(467), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8184] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(188), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8274] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(405), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8364] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(278), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8454] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(196), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8544] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(268), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8634] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(191), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8724] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_expr,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8814] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(270), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8904] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_pure,
    ACTIONS(123), 1,
      anon_sym_memop,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_if,
    ACTIONS(129), 1,
      anon_sym_case,
    ACTIONS(131), 1,
      anon_sym_pcall,
    ACTIONS(133), 1,
      anon_sym_ccall,
    ACTIONS(137), 1,
      anon_sym_bound,
    ACTIONS(139), 1,
      anon_sym_save,
    ACTIONS(141), 1,
      anon_sym_run,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    ACTIONS(167), 1,
      anon_sym_neg,
    STATE(202), 1,
      sym_paction,
    STATE(205), 1,
      sym_action,
    STATE(387), 1,
      sym_expr,
    ACTIONS(135), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8994] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(424), 1,
      sym_pattern,
    STATE(576), 1,
      sym_ctor,
    STATE(578), 1,
      sym_sym,
    ACTIONS(173), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(49), 13,
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
  [9044] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(294), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9093] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      sym_list_pattern,
    STATE(305), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9142] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      sym_list_pattern,
    STATE(302), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9191] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(466), 1,
      sym_pattern,
    STATE(576), 1,
      sym_ctor,
    STATE(578), 1,
      sym_sym,
    ACTIONS(49), 13,
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
  [9237] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 1,
      anon_sym__,
    STATE(229), 1,
      sym_pattern,
    STATE(231), 1,
      sym_list_pattern,
    STATE(576), 1,
      sym_ctor,
    STATE(578), 1,
      sym_sym,
    ACTIONS(49), 13,
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
  [9283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(229), 1,
      sym_pattern,
    STATE(231), 1,
      sym_list_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9329] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(450), 1,
      sym_pattern,
    STATE(576), 1,
      sym_ctor,
    STATE(578), 1,
      sym_sym,
    ACTIONS(49), 13,
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
  [9375] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(458), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9421] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(177), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(428), 1,
      sym_pattern,
    STATE(576), 1,
      sym_ctor,
    STATE(578), 1,
      sym_sym,
    ACTIONS(49), 13,
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
  [9467] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(471), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9513] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(310), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9559] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(437), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(185), 1,
      anon_sym__,
    STATE(231), 1,
      sym_list_pattern,
    STATE(307), 1,
      sym_pattern,
    STATE(543), 1,
      sym_sym,
    STATE(576), 1,
      sym_ctor,
    ACTIONS(49), 13,
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
  [9651] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_loaded,
    ACTIONS(205), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(384), 1,
      sym_core_base_type,
    STATE(621), 1,
      sym_sym,
    ACTIONS(191), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(203), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(199), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9697] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_eff,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(420), 1,
      sym_core_type,
    STATE(623), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9740] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_core_object_type,
    STATE(406), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9780] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_core_object_type,
    STATE(410), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9820] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_core_object_type,
    STATE(365), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9860] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(220), 1,
      sym_ctype,
    STATE(526), 1,
      sym_params,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [9903] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(624), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9940] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_loaded,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(230), 1,
      sym_core_base_type,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(245), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9977] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(533), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10014] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_loaded,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(246), 1,
      sym_core_base_type,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(245), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10051] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(327), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10088] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(494), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10125] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(574), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10162] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(329), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10199] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(230), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10236] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_loaded,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(232), 1,
      sym_core_base_type,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(245), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10273] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(528), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10310] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(246), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10347] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(473), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10384] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(503), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10421] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(554), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10458] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(485), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_loaded,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(236), 1,
      sym_core_base_type,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(245), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10532] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(232), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10569] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(488), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10606] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(509), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10643] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(236), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10680] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(454), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10717] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(500), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10754] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      anon_sym_loaded,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(251), 1,
      sym_core_base_type,
    STATE(449), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(245), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10791] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(251), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10828] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(611), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10865] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(240), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10902] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_loaded,
    ACTIONS(265), 1,
      anon_sym_array,
    STATE(169), 1,
      sym_core_base_type,
    STATE(178), 1,
      sym_core_object_type,
    ACTIONS(253), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(263), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(259), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10939] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_loaded,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(145), 1,
      sym_core_object_type,
    STATE(612), 1,
      sym_core_base_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(211), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10976] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    ACTIONS(267), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(255), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COLON,
      sym_binary_operator,
    ACTIONS(269), 12,
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
  [11038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_PtrArrayShift,
    STATE(520), 1,
      sym_memop_op,
    ACTIONS(273), 12,
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
  [11062] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    ACTIONS(277), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(255), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11102] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_create_readonly,
    ACTIONS(145), 1,
      anon_sym_create,
    ACTIONS(147), 1,
      anon_sym_alloc,
    ACTIONS(149), 1,
      anon_sym_free,
    ACTIONS(151), 1,
      anon_sym_kill,
    ACTIONS(153), 1,
      anon_sym_store,
    ACTIONS(155), 1,
      anon_sym_store_lock,
    ACTIONS(157), 1,
      anon_sym_load,
    ACTIONS(159), 1,
      anon_sym_seq_rmw,
    ACTIONS(161), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(163), 1,
      anon_sym_rmw,
    ACTIONS(165), 1,
      anon_sym_fence,
    STATE(516), 1,
      sym_action,
  [11145] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(267), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_binary_operator,
    ACTIONS(279), 12,
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
  [11203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_binary_operator,
    ACTIONS(283), 12,
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
  [11224] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(255), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
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
  [11284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_binary_operator,
    ACTIONS(293), 12,
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
  [11305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(297), 12,
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
  [11326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_binary_operator,
    ACTIONS(269), 12,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
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
  [11347] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(224), 1,
      sym_ctype_star,
    STATE(227), 1,
      sym_basic_type,
    STATE(293), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
  [11386] = 3,
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
  [11407] = 3,
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
  [11428] = 3,
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
  [11449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(276), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11486] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(265), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11523] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(264), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11560] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(280), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11597] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sym_token1,
    ACTIONS(229), 1,
      anon_sym_void,
    ACTIONS(235), 1,
      anon_sym__Atomic,
    ACTIONS(237), 1,
      sym_floating_type,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    STATE(214), 1,
      sym_integer_type,
    STATE(263), 1,
      sym_ctype,
    ACTIONS(225), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(233), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(227), 2,
      sym_ctype_star,
      sym_basic_type,
  [11634] = 3,
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
  [11654] = 3,
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
  [11674] = 3,
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
  [11694] = 3,
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
  [11714] = 3,
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
  [11734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 11,
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
  [11754] = 3,
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
  [11774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_binary_operator,
    ACTIONS(337), 11,
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
  [11794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 11,
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
  [11814] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      anon_sym_def,
    ACTIONS(346), 1,
      anon_sym_glob,
    ACTIONS(349), 1,
      anon_sym_proc,
    STATE(170), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(291), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(308), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [11844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_binary_operator,
    ACTIONS(337), 11,
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
  [11864] = 3,
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
  [11884] = 3,
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
  [11904] = 3,
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
  [11924] = 3,
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
  [11944] = 3,
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
  [11964] = 3,
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
  [11984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_binary_operator,
    ACTIONS(279), 11,
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
  [12004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
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
  [12024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym_binary_operator,
    ACTIONS(283), 11,
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
  [12044] = 3,
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
  [12064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    STATE(170), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(291), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(308), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(297), 11,
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
  [12114] = 3,
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
  [12134] = 3,
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
  [12154] = 3,
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
  [12174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_binary_operator,
    ACTIONS(293), 11,
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
  [12194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 11,
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
  [12211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 11,
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
  [12228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 11,
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
  [12245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 11,
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
  [12262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 11,
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
  [12279] = 2,
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
  [12296] = 2,
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
  [12313] = 2,
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
  [12330] = 2,
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
  [12347] = 2,
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
  [12364] = 2,
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
  [12381] = 2,
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
  [12398] = 2,
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
  [12415] = 2,
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
  [12432] = 2,
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
  [12449] = 2,
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
  [12466] = 2,
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
  [12483] = 2,
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
  [12500] = 2,
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
  [12517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 8,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [12534] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      aux_sym_sym_token1,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(417), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym_sym_token1,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(423), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      anon_sym_restrict,
    ACTIONS(427), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      aux_sym_sym_token1,
    STATE(615), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(435), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    STATE(615), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(442), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_array,
    STATE(444), 1,
      sym_core_object_type,
    ACTIONS(239), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(249), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(536), 1,
      sym_core_object_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12707] = 3,
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
  [12722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_binary_operator,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(599), 1,
      sym_core_object_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12758] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_params_repeat1,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [12781] = 3,
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
  [12796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(155), 1,
      sym_core_object_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12830] = 3,
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
  [12845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_array,
    STATE(184), 1,
      sym_core_object_type,
    ACTIONS(253), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(263), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12864] = 3,
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
  [12879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_array,
    STATE(577), 1,
      sym_core_object_type,
    ACTIONS(207), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(215), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_EQ,
    ACTIONS(478), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [12927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_EQ,
    ACTIONS(482), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [12941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(486), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [12955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(490), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [12969] = 3,
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
  [12983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
    ACTIONS(494), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [12997] = 3,
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
  [13011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(498), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13025] = 3,
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
  [13039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COLON_COLON,
    ACTIONS(506), 1,
      sym_binary_operator,
    ACTIONS(502), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_binary_operator,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13083] = 3,
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
  [13097] = 3,
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
  [13111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_binary_operator,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_binary_operator,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(508), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_EQ,
    ACTIONS(478), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_binary_operator,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(512), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13195] = 3,
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
  [13209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13223] = 3,
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
  [13237] = 3,
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
  [13251] = 3,
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
  [13265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_binary_operator,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(520), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13297] = 3,
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
  [13311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_binary_operator,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    STATE(362), 1,
      aux_sym_expr_repeat1,
  [13344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      aux_sym_expr_repeat1,
  [13363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_expr_repeat1,
  [13382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    STATE(313), 1,
      aux_sym_expr_repeat1,
  [13401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(303), 1,
      sym_def_fields,
    STATE(615), 1,
      sym_sym,
    STATE(213), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [13418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(542), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(548), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_expr_repeat1,
  [13531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(554), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(556), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13557] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    STATE(340), 1,
      aux_sym_expr_repeat1,
  [13576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    STATE(390), 1,
      aux_sym_expr_repeat1,
  [13595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(558), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [13621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(354), 1,
      aux_sym_expr_repeat1,
  [13657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(568), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_expr_repeat1,
  [13689] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(574), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13719] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_expr_repeat4,
  [13738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_expr_repeat1,
  [13757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(582), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_expr_repeat1,
  [13791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [13804] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(342), 1,
      aux_sym_expr_repeat1,
  [13823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(588), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [13837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(593), 1,
      sym_impl,
    STATE(434), 1,
      sym_sym,
    STATE(553), 1,
      sym_name,
  [13853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_expr_repeat3,
  [13889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACK,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    STATE(363), 1,
      aux_sym_pattern_repeat1,
  [13919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(607), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [13933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(591), 1,
      sym_pure_memop_op,
    ACTIONS(609), 3,
      anon_sym_DeriveCap,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [13945] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(593), 1,
      sym_impl,
    STATE(434), 1,
      sym_sym,
    STATE(476), 1,
      sym_name,
  [13961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_sym_token1,
    ACTIONS(593), 1,
      sym_impl,
    STATE(434), 1,
      sym_sym,
    STATE(539), 1,
      sym_name,
  [14003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_pattern_repeat1,
  [14033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_expr_repeat1,
    ACTIONS(582), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_pattern_repeat1,
  [14073] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [14089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(588), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(546), 1,
      sym_pure_memop_op,
    ACTIONS(609), 3,
      anon_sym_DeriveCap,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_pattern_repeat1,
  [14139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(636), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    STATE(417), 1,
      sym_attribute,
    STATE(634), 1,
      sym_sym,
  [14169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [14195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(640), 1,
      anon_sym_COMMA,
  [14208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_pattern_repeat1,
  [14221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_params_repeat1,
  [14234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(369), 1,
      sym_member,
  [14247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_else,
  [14260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [14273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_COMMA,
  [14299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [14312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_in,
  [14325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [14338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    STATE(326), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(664), 1,
      anon_sym_COMMA,
  [14377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(666), 1,
      anon_sym_COMMA,
  [14403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_pattern_repeat1,
  [14416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(668), 1,
      anon_sym_of,
  [14429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_PIPE,
    ACTIONS(673), 1,
      anon_sym_end,
    STATE(333), 1,
      aux_sym_pexpr_repeat1,
  [14442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [14455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(675), 1,
      anon_sym_of,
  [14468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [14494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(357), 1,
      sym_member,
  [14507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
  [14520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(683), 1,
      anon_sym_in,
  [14546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(432), 1,
      sym_sym,
    STATE(572), 1,
      sym_cabs_id,
  [14572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(687), 1,
      anon_sym_PIPE,
    STATE(386), 1,
      aux_sym_expr_repeat2,
  [14585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [14611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
  [14624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_end,
    ACTIONS(696), 1,
      anon_sym_PIPE,
    STATE(351), 1,
      aux_sym_pexpr_repeat1,
  [14637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_impl,
    ACTIONS(698), 2,
      anon_sym_struct,
      anon_sym_union,
  [14661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(696), 1,
      anon_sym_PIPE,
    STATE(333), 1,
      aux_sym_pexpr_repeat1,
  [14674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(704), 1,
      anon_sym_COMMA,
  [14726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
  [14739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      aux_sym_pexpr_repeat2,
  [14752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_end,
    ACTIONS(696), 1,
      anon_sym_PIPE,
    STATE(333), 1,
      aux_sym_pexpr_repeat1,
  [14765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    ACTIONS(712), 1,
      anon_sym_ailname,
    STATE(402), 1,
      sym_attribute_pair,
  [14778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(714), 1,
      anon_sym_else,
  [14791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(714), 1,
      anon_sym_in,
  [14804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(288), 1,
      aux_sym_pattern_repeat1,
  [14830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_expr_repeat4,
  [14843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      aux_sym_core_base_type_repeat1,
  [14856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_params_repeat1,
  [14869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_sym_token1,
    STATE(432), 1,
      sym_sym,
    STATE(484), 1,
      sym_cabs_id,
  [14882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_expr_repeat4,
  [14895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(403), 1,
      aux_sym_pexpr_repeat2,
  [14908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      aux_sym_pexpr_repeat2,
  [14921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [14934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [14947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(736), 1,
      anon_sym_COMMA,
  [14960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_proc_full_declaration_repeat1,
  [14973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_pattern_repeat1,
  [14986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [14999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(749), 1,
      anon_sym_then,
  [15025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(600), 1,
      sym_sym,
  [15038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_end,
    ACTIONS(696), 1,
      anon_sym_PIPE,
    STATE(358), 1,
      aux_sym_pexpr_repeat1,
  [15051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(753), 1,
      anon_sym_COMMA,
  [15064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(755), 1,
      anon_sym_COMMA,
  [15077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(757), 1,
      anon_sym_COMMA,
  [15090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      aux_sym_core_base_type_repeat1,
  [15103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(687), 1,
      anon_sym_PIPE,
    STATE(344), 1,
      aux_sym_expr_repeat2,
  [15116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_PIPE,
    ACTIONS(764), 1,
      anon_sym_end,
    STATE(386), 1,
      aux_sym_expr_repeat2,
  [15129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(766), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_expr_repeat3,
  [15153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_sym,
  [15166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [15179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(773), 1,
      anon_sym_COMMA,
  [15192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [15205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(775), 1,
      anon_sym_COMMA,
  [15218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(777), 1,
      anon_sym_COMMA,
  [15231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(779), 1,
      anon_sym_COMMA,
  [15244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(781), 1,
      anon_sym_COMMA,
  [15257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(783), 1,
      anon_sym_COMMA,
  [15270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(785), 1,
      anon_sym_COMMA,
  [15283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym_attribute_repeat1,
  [15296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [15309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [15322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACK,
    STATE(399), 1,
      aux_sym_attribute_repeat1,
  [15335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      aux_sym_pexpr_repeat2,
  [15348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_core_base_type_repeat1,
  [15361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(799), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [15372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      aux_sym_core_base_type_repeat1,
  [15385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
  [15398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(432), 1,
      sym_sym,
    STATE(482), 1,
      sym_cabs_id,
  [15411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym_attribute_repeat1,
  [15424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_core_base_type_repeat1,
  [15437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      aux_sym_expr_repeat1,
  [15450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
    STATE(412), 1,
      aux_sym_pexpr_repeat2,
  [15463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(817), 1,
      anon_sym_then,
  [15476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_then,
  [15489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON_COLON,
    ACTIONS(528), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_of,
  [15502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(627), 1,
      sym_sym,
  [15520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(480), 1,
      sym_sym,
  [15530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_string_token1,
    STATE(614), 1,
      sym_string,
  [15540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_LBRACK,
    STATE(605), 1,
      sym_glob_ctype_attribute,
  [15550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym_string_token1,
    STATE(461), 1,
      sym_cstring,
  [15560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(150), 1,
      sym_sym,
  [15570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_EQ,
    ACTIONS(831), 1,
      anon_sym_COLON_COLON,
  [15588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_ailname,
    STATE(462), 1,
      sym_attribute_pair,
  [15598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(483), 1,
      sym_sym,
  [15608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_string_token1,
    STATE(540), 1,
      sym_string,
  [15618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COLON_COLON,
    ACTIONS(833), 1,
      anon_sym_EQ,
  [15628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [15638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(518), 1,
      sym_core_ctype,
  [15648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(492), 1,
      sym_sym,
  [15658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [15666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(549), 1,
      sym_sym,
  [15676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(617), 1,
      sym_core_ctype,
  [15694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(551), 1,
      sym_sym,
  [15704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(837), 1,
      anon_sym_EQ_GT,
  [15714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(839), 1,
      anon_sym_in,
  [15724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(626), 1,
      sym_sym,
  [15742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(537), 1,
      sym_core_ctype,
  [15768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(613), 1,
      sym_sym,
  [15794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(519), 1,
      sym_core_ctype,
  [15804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(423), 1,
      sym_member,
  [15814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COLON_COLON,
    ACTIONS(841), 1,
      anon_sym_EQ,
  [15832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_sym_token1,
    STATE(445), 1,
      sym_sym,
  [15842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      aux_sym_sym_token1,
    STATE(221), 1,
      sym_sym,
  [15852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(628), 1,
      sym_sym,
  [15862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    STATE(512), 1,
      sym_core_ctype,
  [15880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(511), 1,
      sym_sym,
  [15890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(847), 1,
      anon_sym_COMMA,
  [15908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(633), 1,
      sym_sym,
  [15918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      aux_sym_sym_token1,
    STATE(183), 1,
      sym_sym,
  [15928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [15944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_LBRACK,
    ACTIONS(855), 1,
      anon_sym_COMMA,
  [15954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(535), 1,
      sym_sym,
  [15964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(534), 1,
      sym_sym,
  [15974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_COLON_COLON,
    ACTIONS(857), 1,
      anon_sym_EQ,
  [15984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(683), 1,
      anon_sym_else,
  [15994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_core_ctype,
  [16004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(504), 1,
      sym_sym,
  [16014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      sym_int_const,
  [16024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(863), 1,
      anon_sym_EQ_GT,
  [16034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(568), 1,
      sym_member,
  [16044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(530), 1,
      sym_sym,
  [16062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [16072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_COMMA,
  [16082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_sym_token1,
    STATE(635), 1,
      sym_sym,
  [16092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(506), 1,
      sym_member,
  [16102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
  [16109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ_GT,
  [16116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [16123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
  [16130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACK,
  [16137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_EQ,
  [16144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COLON_EQ,
  [16151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_memory_order,
  [16158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_in,
  [16165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COLON_EQ,
  [16172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_COMMA,
  [16179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_COMMA,
  [16186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
  [16193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COLON,
  [16200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_in,
  [16207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_COLON_EQ,
  [16214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      sym_memory_order,
  [16221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_memory_order,
  [16228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_memory_order,
  [16235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_in,
  [16242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
  [16249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COLON_EQ,
  [16256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_COLON,
  [16263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [16270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
  [16277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_COMMA,
  [16284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_DOT,
  [16291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
  [16298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [16305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_eff,
  [16312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_COLON_EQ,
  [16319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COLON,
  [16326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
  [16333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_COMMA,
  [16340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COLON,
  [16347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_COLON,
  [16354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_eff,
  [16361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [16368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [16375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_COMMA,
  [16382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
  [16389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [16396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
  [16403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_COLON_EQ,
  [16410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
  [16417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
  [16424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LBRACE,
  [16431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [16438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
  [16445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COLON_EQ,
  [16452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COLON,
  [16459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COLON,
  [16466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_eff,
  [16473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_memory_order,
  [16480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACK,
  [16487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
  [16494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_COLON,
  [16501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
  [16508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RBRACK,
  [16515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COLON,
  [16522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [16529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
  [16536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_COMMA,
  [16543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COLON,
  [16550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [16557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [16564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_COLON,
  [16571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COMMA,
  [16578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COLON,
  [16585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COMMA,
  [16592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
  [16599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [16606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
  [16613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COLON,
  [16620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [16627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON_EQ,
  [16634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
  [16641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
  [16648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
  [16655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
  [16662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
  [16669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
  [16676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
  [16683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
  [16690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
  [16697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
  [16704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COLON,
  [16711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
  [16718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
  [16725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
  [16732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [16739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
  [16746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
  [16753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [16760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
  [16767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
  [16774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      sym_ub,
  [16781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
  [16788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
  [16795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_COLON,
  [16802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_COLON,
  [16809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [16816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_eff,
  [16823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_EQ,
  [16830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
  [16837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
  [16844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
  [16851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym_ub,
  [16858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
  [16865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [16872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_COLON,
  [16879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
  [16886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_COMMA,
  [16893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
  [16900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
  [16907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
  [16914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_LBRACE,
  [16921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
  [16928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
  [16935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
  [16942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
  [16949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_COLON,
  [16956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_COLON,
  [16963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_eff,
  [16970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      aux_sym_sym_token1,
  [16977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [16984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_COLON_EQ,
  [16991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LPAREN,
  [16998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
  [17005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
  [17012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
  [17019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_ail_ctype,
  [17026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_LBRACK,
  [17033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [17040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
  [17047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_COMMA,
  [17054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_COLON,
  [17061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_LBRACE,
  [17068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
  [17075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_DOT,
  [17082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_LPAREN,
  [17089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
  [17096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_COLON,
  [17103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      aux_sym_sym_token1,
  [17110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LBRACK,
  [17117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_COLON_EQ,
  [17124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
  [17131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
  [17138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
  [17145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_COMMA,
  [17152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
  [17159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_LPAREN,
  [17166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_EQ,
  [17173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      aux_sym_sym_token1,
  [17180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON_EQ,
  [17187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LPAREN,
  [17194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_COLON,
  [17201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_LPAREN,
  [17208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_COLON,
  [17215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 111,
  [SMALL_STATE(4)] = 222,
  [SMALL_STATE(5)] = 330,
  [SMALL_STATE(6)] = 438,
  [SMALL_STATE(7)] = 546,
  [SMALL_STATE(8)] = 654,
  [SMALL_STATE(9)] = 762,
  [SMALL_STATE(10)] = 870,
  [SMALL_STATE(11)] = 978,
  [SMALL_STATE(12)] = 1086,
  [SMALL_STATE(13)] = 1191,
  [SMALL_STATE(14)] = 1296,
  [SMALL_STATE(15)] = 1401,
  [SMALL_STATE(16)] = 1506,
  [SMALL_STATE(17)] = 1611,
  [SMALL_STATE(18)] = 1716,
  [SMALL_STATE(19)] = 1821,
  [SMALL_STATE(20)] = 1926,
  [SMALL_STATE(21)] = 2031,
  [SMALL_STATE(22)] = 2136,
  [SMALL_STATE(23)] = 2241,
  [SMALL_STATE(24)] = 2346,
  [SMALL_STATE(25)] = 2451,
  [SMALL_STATE(26)] = 2556,
  [SMALL_STATE(27)] = 2661,
  [SMALL_STATE(28)] = 2766,
  [SMALL_STATE(29)] = 2871,
  [SMALL_STATE(30)] = 2976,
  [SMALL_STATE(31)] = 3081,
  [SMALL_STATE(32)] = 3186,
  [SMALL_STATE(33)] = 3291,
  [SMALL_STATE(34)] = 3396,
  [SMALL_STATE(35)] = 3501,
  [SMALL_STATE(36)] = 3606,
  [SMALL_STATE(37)] = 3711,
  [SMALL_STATE(38)] = 3816,
  [SMALL_STATE(39)] = 3921,
  [SMALL_STATE(40)] = 4026,
  [SMALL_STATE(41)] = 4131,
  [SMALL_STATE(42)] = 4236,
  [SMALL_STATE(43)] = 4341,
  [SMALL_STATE(44)] = 4446,
  [SMALL_STATE(45)] = 4551,
  [SMALL_STATE(46)] = 4656,
  [SMALL_STATE(47)] = 4761,
  [SMALL_STATE(48)] = 4866,
  [SMALL_STATE(49)] = 4971,
  [SMALL_STATE(50)] = 5076,
  [SMALL_STATE(51)] = 5181,
  [SMALL_STATE(52)] = 5286,
  [SMALL_STATE(53)] = 5391,
  [SMALL_STATE(54)] = 5496,
  [SMALL_STATE(55)] = 5601,
  [SMALL_STATE(56)] = 5706,
  [SMALL_STATE(57)] = 5811,
  [SMALL_STATE(58)] = 5916,
  [SMALL_STATE(59)] = 6021,
  [SMALL_STATE(60)] = 6126,
  [SMALL_STATE(61)] = 6231,
  [SMALL_STATE(62)] = 6336,
  [SMALL_STATE(63)] = 6441,
  [SMALL_STATE(64)] = 6546,
  [SMALL_STATE(65)] = 6651,
  [SMALL_STATE(66)] = 6756,
  [SMALL_STATE(67)] = 6861,
  [SMALL_STATE(68)] = 6966,
  [SMALL_STATE(69)] = 7071,
  [SMALL_STATE(70)] = 7176,
  [SMALL_STATE(71)] = 7281,
  [SMALL_STATE(72)] = 7374,
  [SMALL_STATE(73)] = 7464,
  [SMALL_STATE(74)] = 7554,
  [SMALL_STATE(75)] = 7644,
  [SMALL_STATE(76)] = 7734,
  [SMALL_STATE(77)] = 7824,
  [SMALL_STATE(78)] = 7914,
  [SMALL_STATE(79)] = 8004,
  [SMALL_STATE(80)] = 8094,
  [SMALL_STATE(81)] = 8184,
  [SMALL_STATE(82)] = 8274,
  [SMALL_STATE(83)] = 8364,
  [SMALL_STATE(84)] = 8454,
  [SMALL_STATE(85)] = 8544,
  [SMALL_STATE(86)] = 8634,
  [SMALL_STATE(87)] = 8724,
  [SMALL_STATE(88)] = 8814,
  [SMALL_STATE(89)] = 8904,
  [SMALL_STATE(90)] = 8994,
  [SMALL_STATE(91)] = 9044,
  [SMALL_STATE(92)] = 9093,
  [SMALL_STATE(93)] = 9142,
  [SMALL_STATE(94)] = 9191,
  [SMALL_STATE(95)] = 9237,
  [SMALL_STATE(96)] = 9283,
  [SMALL_STATE(97)] = 9329,
  [SMALL_STATE(98)] = 9375,
  [SMALL_STATE(99)] = 9421,
  [SMALL_STATE(100)] = 9467,
  [SMALL_STATE(101)] = 9513,
  [SMALL_STATE(102)] = 9559,
  [SMALL_STATE(103)] = 9605,
  [SMALL_STATE(104)] = 9651,
  [SMALL_STATE(105)] = 9697,
  [SMALL_STATE(106)] = 9740,
  [SMALL_STATE(107)] = 9780,
  [SMALL_STATE(108)] = 9820,
  [SMALL_STATE(109)] = 9860,
  [SMALL_STATE(110)] = 9903,
  [SMALL_STATE(111)] = 9940,
  [SMALL_STATE(112)] = 9977,
  [SMALL_STATE(113)] = 10014,
  [SMALL_STATE(114)] = 10051,
  [SMALL_STATE(115)] = 10088,
  [SMALL_STATE(116)] = 10125,
  [SMALL_STATE(117)] = 10162,
  [SMALL_STATE(118)] = 10199,
  [SMALL_STATE(119)] = 10236,
  [SMALL_STATE(120)] = 10273,
  [SMALL_STATE(121)] = 10310,
  [SMALL_STATE(122)] = 10347,
  [SMALL_STATE(123)] = 10384,
  [SMALL_STATE(124)] = 10421,
  [SMALL_STATE(125)] = 10458,
  [SMALL_STATE(126)] = 10495,
  [SMALL_STATE(127)] = 10532,
  [SMALL_STATE(128)] = 10569,
  [SMALL_STATE(129)] = 10606,
  [SMALL_STATE(130)] = 10643,
  [SMALL_STATE(131)] = 10680,
  [SMALL_STATE(132)] = 10717,
  [SMALL_STATE(133)] = 10754,
  [SMALL_STATE(134)] = 10791,
  [SMALL_STATE(135)] = 10828,
  [SMALL_STATE(136)] = 10865,
  [SMALL_STATE(137)] = 10902,
  [SMALL_STATE(138)] = 10939,
  [SMALL_STATE(139)] = 10976,
  [SMALL_STATE(140)] = 11016,
  [SMALL_STATE(141)] = 11038,
  [SMALL_STATE(142)] = 11062,
  [SMALL_STATE(143)] = 11102,
  [SMALL_STATE(144)] = 11145,
  [SMALL_STATE(145)] = 11182,
  [SMALL_STATE(146)] = 11203,
  [SMALL_STATE(147)] = 11224,
  [SMALL_STATE(148)] = 11261,
  [SMALL_STATE(149)] = 11284,
  [SMALL_STATE(150)] = 11305,
  [SMALL_STATE(151)] = 11326,
  [SMALL_STATE(152)] = 11347,
  [SMALL_STATE(153)] = 11386,
  [SMALL_STATE(154)] = 11407,
  [SMALL_STATE(155)] = 11428,
  [SMALL_STATE(156)] = 11449,
  [SMALL_STATE(157)] = 11486,
  [SMALL_STATE(158)] = 11523,
  [SMALL_STATE(159)] = 11560,
  [SMALL_STATE(160)] = 11597,
  [SMALL_STATE(161)] = 11634,
  [SMALL_STATE(162)] = 11654,
  [SMALL_STATE(163)] = 11674,
  [SMALL_STATE(164)] = 11694,
  [SMALL_STATE(165)] = 11714,
  [SMALL_STATE(166)] = 11734,
  [SMALL_STATE(167)] = 11754,
  [SMALL_STATE(168)] = 11774,
  [SMALL_STATE(169)] = 11794,
  [SMALL_STATE(170)] = 11814,
  [SMALL_STATE(171)] = 11844,
  [SMALL_STATE(172)] = 11864,
  [SMALL_STATE(173)] = 11884,
  [SMALL_STATE(174)] = 11904,
  [SMALL_STATE(175)] = 11924,
  [SMALL_STATE(176)] = 11944,
  [SMALL_STATE(177)] = 11964,
  [SMALL_STATE(178)] = 11984,
  [SMALL_STATE(179)] = 12004,
  [SMALL_STATE(180)] = 12024,
  [SMALL_STATE(181)] = 12044,
  [SMALL_STATE(182)] = 12064,
  [SMALL_STATE(183)] = 12094,
  [SMALL_STATE(184)] = 12114,
  [SMALL_STATE(185)] = 12134,
  [SMALL_STATE(186)] = 12154,
  [SMALL_STATE(187)] = 12174,
  [SMALL_STATE(188)] = 12194,
  [SMALL_STATE(189)] = 12211,
  [SMALL_STATE(190)] = 12228,
  [SMALL_STATE(191)] = 12245,
  [SMALL_STATE(192)] = 12262,
  [SMALL_STATE(193)] = 12279,
  [SMALL_STATE(194)] = 12296,
  [SMALL_STATE(195)] = 12313,
  [SMALL_STATE(196)] = 12330,
  [SMALL_STATE(197)] = 12347,
  [SMALL_STATE(198)] = 12364,
  [SMALL_STATE(199)] = 12381,
  [SMALL_STATE(200)] = 12398,
  [SMALL_STATE(201)] = 12415,
  [SMALL_STATE(202)] = 12432,
  [SMALL_STATE(203)] = 12449,
  [SMALL_STATE(204)] = 12466,
  [SMALL_STATE(205)] = 12483,
  [SMALL_STATE(206)] = 12500,
  [SMALL_STATE(207)] = 12517,
  [SMALL_STATE(208)] = 12534,
  [SMALL_STATE(209)] = 12555,
  [SMALL_STATE(210)] = 12576,
  [SMALL_STATE(211)] = 12594,
  [SMALL_STATE(212)] = 12616,
  [SMALL_STATE(213)] = 12632,
  [SMALL_STATE(214)] = 12654,
  [SMALL_STATE(215)] = 12669,
  [SMALL_STATE(216)] = 12688,
  [SMALL_STATE(217)] = 12707,
  [SMALL_STATE(218)] = 12722,
  [SMALL_STATE(219)] = 12739,
  [SMALL_STATE(220)] = 12758,
  [SMALL_STATE(221)] = 12781,
  [SMALL_STATE(222)] = 12796,
  [SMALL_STATE(223)] = 12811,
  [SMALL_STATE(224)] = 12830,
  [SMALL_STATE(225)] = 12845,
  [SMALL_STATE(226)] = 12864,
  [SMALL_STATE(227)] = 12879,
  [SMALL_STATE(228)] = 12894,
  [SMALL_STATE(229)] = 12913,
  [SMALL_STATE(230)] = 12927,
  [SMALL_STATE(231)] = 12941,
  [SMALL_STATE(232)] = 12955,
  [SMALL_STATE(233)] = 12969,
  [SMALL_STATE(234)] = 12983,
  [SMALL_STATE(235)] = 12997,
  [SMALL_STATE(236)] = 13011,
  [SMALL_STATE(237)] = 13025,
  [SMALL_STATE(238)] = 13039,
  [SMALL_STATE(239)] = 13055,
  [SMALL_STATE(240)] = 13069,
  [SMALL_STATE(241)] = 13083,
  [SMALL_STATE(242)] = 13097,
  [SMALL_STATE(243)] = 13111,
  [SMALL_STATE(244)] = 13125,
  [SMALL_STATE(245)] = 13139,
  [SMALL_STATE(246)] = 13153,
  [SMALL_STATE(247)] = 13167,
  [SMALL_STATE(248)] = 13181,
  [SMALL_STATE(249)] = 13195,
  [SMALL_STATE(250)] = 13209,
  [SMALL_STATE(251)] = 13223,
  [SMALL_STATE(252)] = 13237,
  [SMALL_STATE(253)] = 13251,
  [SMALL_STATE(254)] = 13265,
  [SMALL_STATE(255)] = 13279,
  [SMALL_STATE(256)] = 13297,
  [SMALL_STATE(257)] = 13311,
  [SMALL_STATE(258)] = 13325,
  [SMALL_STATE(259)] = 13344,
  [SMALL_STATE(260)] = 13363,
  [SMALL_STATE(261)] = 13382,
  [SMALL_STATE(262)] = 13401,
  [SMALL_STATE(263)] = 13418,
  [SMALL_STATE(264)] = 13435,
  [SMALL_STATE(265)] = 13452,
  [SMALL_STATE(266)] = 13469,
  [SMALL_STATE(267)] = 13482,
  [SMALL_STATE(268)] = 13499,
  [SMALL_STATE(269)] = 13512,
  [SMALL_STATE(270)] = 13531,
  [SMALL_STATE(271)] = 13544,
  [SMALL_STATE(272)] = 13557,
  [SMALL_STATE(273)] = 13576,
  [SMALL_STATE(274)] = 13595,
  [SMALL_STATE(275)] = 13608,
  [SMALL_STATE(276)] = 13621,
  [SMALL_STATE(277)] = 13638,
  [SMALL_STATE(278)] = 13657,
  [SMALL_STATE(279)] = 13670,
  [SMALL_STATE(280)] = 13689,
  [SMALL_STATE(281)] = 13706,
  [SMALL_STATE(282)] = 13719,
  [SMALL_STATE(283)] = 13738,
  [SMALL_STATE(284)] = 13757,
  [SMALL_STATE(285)] = 13772,
  [SMALL_STATE(286)] = 13791,
  [SMALL_STATE(287)] = 13804,
  [SMALL_STATE(288)] = 13823,
  [SMALL_STATE(289)] = 13837,
  [SMALL_STATE(290)] = 13853,
  [SMALL_STATE(291)] = 13863,
  [SMALL_STATE(292)] = 13873,
  [SMALL_STATE(293)] = 13889,
  [SMALL_STATE(294)] = 13903,
  [SMALL_STATE(295)] = 13919,
  [SMALL_STATE(296)] = 13933,
  [SMALL_STATE(297)] = 13945,
  [SMALL_STATE(298)] = 13961,
  [SMALL_STATE(299)] = 13977,
  [SMALL_STATE(300)] = 13987,
  [SMALL_STATE(301)] = 14003,
  [SMALL_STATE(302)] = 14017,
  [SMALL_STATE(303)] = 14033,
  [SMALL_STATE(304)] = 14043,
  [SMALL_STATE(305)] = 14057,
  [SMALL_STATE(306)] = 14073,
  [SMALL_STATE(307)] = 14089,
  [SMALL_STATE(308)] = 14101,
  [SMALL_STATE(309)] = 14111,
  [SMALL_STATE(310)] = 14123,
  [SMALL_STATE(311)] = 14139,
  [SMALL_STATE(312)] = 14153,
  [SMALL_STATE(313)] = 14169,
  [SMALL_STATE(314)] = 14182,
  [SMALL_STATE(315)] = 14195,
  [SMALL_STATE(316)] = 14208,
  [SMALL_STATE(317)] = 14221,
  [SMALL_STATE(318)] = 14234,
  [SMALL_STATE(319)] = 14247,
  [SMALL_STATE(320)] = 14260,
  [SMALL_STATE(321)] = 14273,
  [SMALL_STATE(322)] = 14286,
  [SMALL_STATE(323)] = 14299,
  [SMALL_STATE(324)] = 14312,
  [SMALL_STATE(325)] = 14325,
  [SMALL_STATE(326)] = 14338,
  [SMALL_STATE(327)] = 14351,
  [SMALL_STATE(328)] = 14364,
  [SMALL_STATE(329)] = 14377,
  [SMALL_STATE(330)] = 14390,
  [SMALL_STATE(331)] = 14403,
  [SMALL_STATE(332)] = 14416,
  [SMALL_STATE(333)] = 14429,
  [SMALL_STATE(334)] = 14442,
  [SMALL_STATE(335)] = 14455,
  [SMALL_STATE(336)] = 14468,
  [SMALL_STATE(337)] = 14481,
  [SMALL_STATE(338)] = 14494,
  [SMALL_STATE(339)] = 14507,
  [SMALL_STATE(340)] = 14520,
  [SMALL_STATE(341)] = 14533,
  [SMALL_STATE(342)] = 14546,
  [SMALL_STATE(343)] = 14559,
  [SMALL_STATE(344)] = 14572,
  [SMALL_STATE(345)] = 14585,
  [SMALL_STATE(346)] = 14598,
  [SMALL_STATE(347)] = 14611,
  [SMALL_STATE(348)] = 14624,
  [SMALL_STATE(349)] = 14637,
  [SMALL_STATE(350)] = 14650,
  [SMALL_STATE(351)] = 14661,
  [SMALL_STATE(352)] = 14674,
  [SMALL_STATE(353)] = 14687,
  [SMALL_STATE(354)] = 14700,
  [SMALL_STATE(355)] = 14713,
  [SMALL_STATE(356)] = 14726,
  [SMALL_STATE(357)] = 14739,
  [SMALL_STATE(358)] = 14752,
  [SMALL_STATE(359)] = 14765,
  [SMALL_STATE(360)] = 14778,
  [SMALL_STATE(361)] = 14791,
  [SMALL_STATE(362)] = 14804,
  [SMALL_STATE(363)] = 14817,
  [SMALL_STATE(364)] = 14830,
  [SMALL_STATE(365)] = 14843,
  [SMALL_STATE(366)] = 14856,
  [SMALL_STATE(367)] = 14869,
  [SMALL_STATE(368)] = 14882,
  [SMALL_STATE(369)] = 14895,
  [SMALL_STATE(370)] = 14908,
  [SMALL_STATE(371)] = 14921,
  [SMALL_STATE(372)] = 14934,
  [SMALL_STATE(373)] = 14947,
  [SMALL_STATE(374)] = 14960,
  [SMALL_STATE(375)] = 14973,
  [SMALL_STATE(376)] = 14986,
  [SMALL_STATE(377)] = 14999,
  [SMALL_STATE(378)] = 15012,
  [SMALL_STATE(379)] = 15025,
  [SMALL_STATE(380)] = 15038,
  [SMALL_STATE(381)] = 15051,
  [SMALL_STATE(382)] = 15064,
  [SMALL_STATE(383)] = 15077,
  [SMALL_STATE(384)] = 15090,
  [SMALL_STATE(385)] = 15103,
  [SMALL_STATE(386)] = 15116,
  [SMALL_STATE(387)] = 15129,
  [SMALL_STATE(388)] = 15140,
  [SMALL_STATE(389)] = 15153,
  [SMALL_STATE(390)] = 15166,
  [SMALL_STATE(391)] = 15179,
  [SMALL_STATE(392)] = 15192,
  [SMALL_STATE(393)] = 15205,
  [SMALL_STATE(394)] = 15218,
  [SMALL_STATE(395)] = 15231,
  [SMALL_STATE(396)] = 15244,
  [SMALL_STATE(397)] = 15257,
  [SMALL_STATE(398)] = 15270,
  [SMALL_STATE(399)] = 15283,
  [SMALL_STATE(400)] = 15296,
  [SMALL_STATE(401)] = 15309,
  [SMALL_STATE(402)] = 15322,
  [SMALL_STATE(403)] = 15335,
  [SMALL_STATE(404)] = 15348,
  [SMALL_STATE(405)] = 15361,
  [SMALL_STATE(406)] = 15372,
  [SMALL_STATE(407)] = 15385,
  [SMALL_STATE(408)] = 15398,
  [SMALL_STATE(409)] = 15411,
  [SMALL_STATE(410)] = 15424,
  [SMALL_STATE(411)] = 15437,
  [SMALL_STATE(412)] = 15450,
  [SMALL_STATE(413)] = 15463,
  [SMALL_STATE(414)] = 15476,
  [SMALL_STATE(415)] = 15489,
  [SMALL_STATE(416)] = 15502,
  [SMALL_STATE(417)] = 15510,
  [SMALL_STATE(418)] = 15520,
  [SMALL_STATE(419)] = 15530,
  [SMALL_STATE(420)] = 15540,
  [SMALL_STATE(421)] = 15550,
  [SMALL_STATE(422)] = 15560,
  [SMALL_STATE(423)] = 15570,
  [SMALL_STATE(424)] = 15578,
  [SMALL_STATE(425)] = 15588,
  [SMALL_STATE(426)] = 15598,
  [SMALL_STATE(427)] = 15608,
  [SMALL_STATE(428)] = 15618,
  [SMALL_STATE(429)] = 15628,
  [SMALL_STATE(430)] = 15638,
  [SMALL_STATE(431)] = 15648,
  [SMALL_STATE(432)] = 15658,
  [SMALL_STATE(433)] = 15666,
  [SMALL_STATE(434)] = 15676,
  [SMALL_STATE(435)] = 15684,
  [SMALL_STATE(436)] = 15694,
  [SMALL_STATE(437)] = 15704,
  [SMALL_STATE(438)] = 15714,
  [SMALL_STATE(439)] = 15724,
  [SMALL_STATE(440)] = 15732,
  [SMALL_STATE(441)] = 15742,
  [SMALL_STATE(442)] = 15750,
  [SMALL_STATE(443)] = 15758,
  [SMALL_STATE(444)] = 15768,
  [SMALL_STATE(445)] = 15776,
  [SMALL_STATE(446)] = 15784,
  [SMALL_STATE(447)] = 15794,
  [SMALL_STATE(448)] = 15804,
  [SMALL_STATE(449)] = 15814,
  [SMALL_STATE(450)] = 15822,
  [SMALL_STATE(451)] = 15832,
  [SMALL_STATE(452)] = 15842,
  [SMALL_STATE(453)] = 15852,
  [SMALL_STATE(454)] = 15862,
  [SMALL_STATE(455)] = 15870,
  [SMALL_STATE(456)] = 15880,
  [SMALL_STATE(457)] = 15890,
  [SMALL_STATE(458)] = 15898,
  [SMALL_STATE(459)] = 15908,
  [SMALL_STATE(460)] = 15918,
  [SMALL_STATE(461)] = 15928,
  [SMALL_STATE(462)] = 15936,
  [SMALL_STATE(463)] = 15944,
  [SMALL_STATE(464)] = 15954,
  [SMALL_STATE(465)] = 15964,
  [SMALL_STATE(466)] = 15974,
  [SMALL_STATE(467)] = 15984,
  [SMALL_STATE(468)] = 15994,
  [SMALL_STATE(469)] = 16004,
  [SMALL_STATE(470)] = 16014,
  [SMALL_STATE(471)] = 16024,
  [SMALL_STATE(472)] = 16034,
  [SMALL_STATE(473)] = 16044,
  [SMALL_STATE(474)] = 16052,
  [SMALL_STATE(475)] = 16062,
  [SMALL_STATE(476)] = 16072,
  [SMALL_STATE(477)] = 16082,
  [SMALL_STATE(478)] = 16092,
  [SMALL_STATE(479)] = 16102,
  [SMALL_STATE(480)] = 16109,
  [SMALL_STATE(481)] = 16116,
  [SMALL_STATE(482)] = 16123,
  [SMALL_STATE(483)] = 16130,
  [SMALL_STATE(484)] = 16137,
  [SMALL_STATE(485)] = 16144,
  [SMALL_STATE(486)] = 16151,
  [SMALL_STATE(487)] = 16158,
  [SMALL_STATE(488)] = 16165,
  [SMALL_STATE(489)] = 16172,
  [SMALL_STATE(490)] = 16179,
  [SMALL_STATE(491)] = 16186,
  [SMALL_STATE(492)] = 16193,
  [SMALL_STATE(493)] = 16200,
  [SMALL_STATE(494)] = 16207,
  [SMALL_STATE(495)] = 16214,
  [SMALL_STATE(496)] = 16221,
  [SMALL_STATE(497)] = 16228,
  [SMALL_STATE(498)] = 16235,
  [SMALL_STATE(499)] = 16242,
  [SMALL_STATE(500)] = 16249,
  [SMALL_STATE(501)] = 16256,
  [SMALL_STATE(502)] = 16263,
  [SMALL_STATE(503)] = 16270,
  [SMALL_STATE(504)] = 16277,
  [SMALL_STATE(505)] = 16284,
  [SMALL_STATE(506)] = 16291,
  [SMALL_STATE(507)] = 16298,
  [SMALL_STATE(508)] = 16305,
  [SMALL_STATE(509)] = 16312,
  [SMALL_STATE(510)] = 16319,
  [SMALL_STATE(511)] = 16326,
  [SMALL_STATE(512)] = 16333,
  [SMALL_STATE(513)] = 16340,
  [SMALL_STATE(514)] = 16347,
  [SMALL_STATE(515)] = 16354,
  [SMALL_STATE(516)] = 16361,
  [SMALL_STATE(517)] = 16368,
  [SMALL_STATE(518)] = 16375,
  [SMALL_STATE(519)] = 16382,
  [SMALL_STATE(520)] = 16389,
  [SMALL_STATE(521)] = 16396,
  [SMALL_STATE(522)] = 16403,
  [SMALL_STATE(523)] = 16410,
  [SMALL_STATE(524)] = 16417,
  [SMALL_STATE(525)] = 16424,
  [SMALL_STATE(526)] = 16431,
  [SMALL_STATE(527)] = 16438,
  [SMALL_STATE(528)] = 16445,
  [SMALL_STATE(529)] = 16452,
  [SMALL_STATE(530)] = 16459,
  [SMALL_STATE(531)] = 16466,
  [SMALL_STATE(532)] = 16473,
  [SMALL_STATE(533)] = 16480,
  [SMALL_STATE(534)] = 16487,
  [SMALL_STATE(535)] = 16494,
  [SMALL_STATE(536)] = 16501,
  [SMALL_STATE(537)] = 16508,
  [SMALL_STATE(538)] = 16515,
  [SMALL_STATE(539)] = 16522,
  [SMALL_STATE(540)] = 16529,
  [SMALL_STATE(541)] = 16536,
  [SMALL_STATE(542)] = 16543,
  [SMALL_STATE(543)] = 16550,
  [SMALL_STATE(544)] = 16557,
  [SMALL_STATE(545)] = 16564,
  [SMALL_STATE(546)] = 16571,
  [SMALL_STATE(547)] = 16578,
  [SMALL_STATE(548)] = 16585,
  [SMALL_STATE(549)] = 16592,
  [SMALL_STATE(550)] = 16599,
  [SMALL_STATE(551)] = 16606,
  [SMALL_STATE(552)] = 16613,
  [SMALL_STATE(553)] = 16620,
  [SMALL_STATE(554)] = 16627,
  [SMALL_STATE(555)] = 16634,
  [SMALL_STATE(556)] = 16641,
  [SMALL_STATE(557)] = 16648,
  [SMALL_STATE(558)] = 16655,
  [SMALL_STATE(559)] = 16662,
  [SMALL_STATE(560)] = 16669,
  [SMALL_STATE(561)] = 16676,
  [SMALL_STATE(562)] = 16683,
  [SMALL_STATE(563)] = 16690,
  [SMALL_STATE(564)] = 16697,
  [SMALL_STATE(565)] = 16704,
  [SMALL_STATE(566)] = 16711,
  [SMALL_STATE(567)] = 16718,
  [SMALL_STATE(568)] = 16725,
  [SMALL_STATE(569)] = 16732,
  [SMALL_STATE(570)] = 16739,
  [SMALL_STATE(571)] = 16746,
  [SMALL_STATE(572)] = 16753,
  [SMALL_STATE(573)] = 16760,
  [SMALL_STATE(574)] = 16767,
  [SMALL_STATE(575)] = 16774,
  [SMALL_STATE(576)] = 16781,
  [SMALL_STATE(577)] = 16788,
  [SMALL_STATE(578)] = 16795,
  [SMALL_STATE(579)] = 16802,
  [SMALL_STATE(580)] = 16809,
  [SMALL_STATE(581)] = 16816,
  [SMALL_STATE(582)] = 16823,
  [SMALL_STATE(583)] = 16830,
  [SMALL_STATE(584)] = 16837,
  [SMALL_STATE(585)] = 16844,
  [SMALL_STATE(586)] = 16851,
  [SMALL_STATE(587)] = 16858,
  [SMALL_STATE(588)] = 16865,
  [SMALL_STATE(589)] = 16872,
  [SMALL_STATE(590)] = 16879,
  [SMALL_STATE(591)] = 16886,
  [SMALL_STATE(592)] = 16893,
  [SMALL_STATE(593)] = 16900,
  [SMALL_STATE(594)] = 16907,
  [SMALL_STATE(595)] = 16914,
  [SMALL_STATE(596)] = 16921,
  [SMALL_STATE(597)] = 16928,
  [SMALL_STATE(598)] = 16935,
  [SMALL_STATE(599)] = 16942,
  [SMALL_STATE(600)] = 16949,
  [SMALL_STATE(601)] = 16956,
  [SMALL_STATE(602)] = 16963,
  [SMALL_STATE(603)] = 16970,
  [SMALL_STATE(604)] = 16977,
  [SMALL_STATE(605)] = 16984,
  [SMALL_STATE(606)] = 16991,
  [SMALL_STATE(607)] = 16998,
  [SMALL_STATE(608)] = 17005,
  [SMALL_STATE(609)] = 17012,
  [SMALL_STATE(610)] = 17019,
  [SMALL_STATE(611)] = 17026,
  [SMALL_STATE(612)] = 17033,
  [SMALL_STATE(613)] = 17040,
  [SMALL_STATE(614)] = 17047,
  [SMALL_STATE(615)] = 17054,
  [SMALL_STATE(616)] = 17061,
  [SMALL_STATE(617)] = 17068,
  [SMALL_STATE(618)] = 17075,
  [SMALL_STATE(619)] = 17082,
  [SMALL_STATE(620)] = 17089,
  [SMALL_STATE(621)] = 17096,
  [SMALL_STATE(622)] = 17103,
  [SMALL_STATE(623)] = 17110,
  [SMALL_STATE(624)] = 17117,
  [SMALL_STATE(625)] = 17124,
  [SMALL_STATE(626)] = 17131,
  [SMALL_STATE(627)] = 17138,
  [SMALL_STATE(628)] = 17145,
  [SMALL_STATE(629)] = 17152,
  [SMALL_STATE(630)] = 17159,
  [SMALL_STATE(631)] = 17166,
  [SMALL_STATE(632)] = 17173,
  [SMALL_STATE(633)] = 17180,
  [SMALL_STATE(634)] = 17187,
  [SMALL_STATE(635)] = 17194,
  [SMALL_STATE(636)] = 17201,
  [SMALL_STATE(637)] = 17208,
  [SMALL_STATE(638)] = 17215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(477),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2), SHIFT_REPEAT(208),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2), SHIFT_REPEAT(140),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(103),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(17),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2), SHIFT_REPEAT(100),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2), SHIFT_REPEAT(122),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2), SHIFT_REPEAT(431),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(147),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2), SHIFT_REPEAT(474),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2), SHIFT_REPEAT(102),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2), SHIFT_REPEAT(89),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(425),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2), SHIFT_REPEAT(448),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1023] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
