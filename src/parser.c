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
#define STATE_COUNT 653
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 137
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
  anon_sym_CivNULLcap = 54,
  anon_sym_signed = 55,
  anon_sym_unsigned = 56,
  anon_sym_array_shift = 57,
  anon_sym_member_shift = 58,
  anon_sym_DOT = 59,
  anon_sym_not = 60,
  anon_sym_DASH = 61,
  anon_sym_cfunction = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_is_scalar = 65,
  anon_sym_is_integer = 66,
  anon_sym_is_signed = 67,
  anon_sym_is_unsigned = 68,
  anon_sym_are_compatible = 69,
  anon_sym_LBRACK_RBRACK = 70,
  anon_sym_COLON_COLON = 71,
  anon_sym_DeriveCap = 72,
  aux_sym_pure_memop_op_token1 = 73,
  anon_sym_CapAssignValue = 74,
  anon_sym_Ptr_tIntValue = 75,
  anon_sym_PtrEq = 76,
  anon_sym_PtrNe = 77,
  anon_sym_PtrLt = 78,
  anon_sym_PtrGt = 79,
  anon_sym_PtrLe = 80,
  anon_sym_PtrGe = 81,
  anon_sym_Ptrdiff = 82,
  anon_sym_IntFromPtr = 83,
  anon_sym_PtrFromInt = 84,
  anon_sym_PtrValidForDeref = 85,
  anon_sym_PtrWellAligned = 86,
  anon_sym_PtrArrayShift = 87,
  anon_sym_PtrMemberShift = 88,
  anon_sym__ = 89,
  anon_sym_unit = 90,
  anon_sym_boolean = 91,
  anon_sym_ctype = 92,
  anon_sym_loaded = 93,
  anon_sym_storable = 94,
  anon_sym_integer = 95,
  anon_sym_floating = 96,
  anon_sym_pointer = 97,
  anon_sym_array = 98,
  sym_memory_order = 99,
  anon_sym_create_readonly = 100,
  anon_sym_create = 101,
  anon_sym_alloc = 102,
  anon_sym_free = 103,
  anon_sym_kill = 104,
  anon_sym_store = 105,
  anon_sym_store_lock = 106,
  anon_sym_load = 107,
  anon_sym_seq_rmw = 108,
  anon_sym_seq_rmw_with_forward = 109,
  anon_sym_rmw = 110,
  anon_sym_fence = 111,
  anon_sym_neg = 112,
  sym_ub = 113,
  aux_sym_string_token1 = 114,
  anon_sym_Array = 115,
  anon_sym_Ivmax = 116,
  anon_sym_Ivmin = 117,
  anon_sym_Ivsizeof = 118,
  anon_sym_Ivalignof = 119,
  anon_sym_Specified = 120,
  anon_sym_Unspecified = 121,
  anon_sym_Fvfromint = 122,
  anon_sym_Ivfromfloat = 123,
  anon_sym_IvCOMPL = 124,
  anon_sym_IvAND = 125,
  anon_sym_IvOR = 126,
  anon_sym_IvXOR = 127,
  sym_binary_operator = 128,
  sym_bool_literal = 129,
  anon_sym_IvMaxAlignment = 130,
  anon_sym_NULL = 131,
  anon_sym_Cfunction = 132,
  anon_sym_Unit = 133,
  sym_impl = 134,
  anon_sym_ailname = 135,
  anon_sym_proc = 136,
  sym_source_file = 137,
  sym_declaration = 138,
  sym_def_aggregate_declaration = 139,
  sym_sym = 140,
  sym_def_fields = 141,
  sym_def_field = 142,
  sym_core_ctype = 143,
  sym_ctype = 144,
  sym_ctype_star = 145,
  sym_params = 146,
  sym_integer_type = 147,
  sym_basic_type = 148,
  sym_glob_ctype_attribute = 149,
  sym_glob_declaration = 150,
  sym_expr = 151,
  sym_core_type = 152,
  sym_pexpr = 153,
  sym_list_pexpr = 154,
  sym_pure_memop_op = 155,
  sym_memop_op = 156,
  sym_pattern = 157,
  sym_list_pattern = 158,
  sym_name = 159,
  sym_core_base_type = 160,
  sym_core_object_type = 161,
  sym_action = 162,
  sym_paction = 163,
  sym_string = 164,
  sym_cstring = 165,
  sym_ctor = 166,
  sym_cabs_id = 167,
  sym_member = 168,
  sym_value = 169,
  sym_attribute = 170,
  sym_attribute_pair = 171,
  sym_proc_declaration = 172,
  sym_proc_full_declaration = 173,
  sym_proc_forward_declaration = 174,
  sym_def_declaration = 175,
  aux_sym_source_file_repeat1 = 176,
  aux_sym_def_fields_repeat1 = 177,
  aux_sym_params_repeat1 = 178,
  aux_sym_integer_type_repeat1 = 179,
  aux_sym_expr_repeat1 = 180,
  aux_sym_expr_repeat2 = 181,
  aux_sym_expr_repeat3 = 182,
  aux_sym_expr_repeat4 = 183,
  aux_sym_pexpr_repeat1 = 184,
  aux_sym_pexpr_repeat2 = 185,
  aux_sym_pattern_repeat1 = 186,
  aux_sym_core_base_type_repeat1 = 187,
  aux_sym_attribute_repeat1 = 188,
  aux_sym_proc_full_declaration_repeat1 = 189,
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
  [anon_sym_is_signed] = "is_signed",
  [anon_sym_is_unsigned] = "is_unsigned",
  [anon_sym_are_compatible] = "are_compatible",
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
  [anon_sym_is_signed] = anon_sym_is_signed,
  [anon_sym_is_unsigned] = anon_sym_is_unsigned,
  [anon_sym_are_compatible] = anon_sym_are_compatible,
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
  [8] = 5,
  [9] = 9,
  [10] = 9,
  [11] = 11,
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
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 15,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 12,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 36,
  [42] = 21,
  [43] = 43,
  [44] = 44,
  [45] = 17,
  [46] = 46,
  [47] = 47,
  [48] = 18,
  [49] = 46,
  [50] = 16,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 23,
  [55] = 25,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 32,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 43,
  [69] = 69,
  [70] = 19,
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
  [96] = 94,
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
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 121,
  [127] = 127,
  [128] = 125,
  [129] = 129,
  [130] = 121,
  [131] = 131,
  [132] = 120,
  [133] = 119,
  [134] = 134,
  [135] = 110,
  [136] = 118,
  [137] = 134,
  [138] = 138,
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
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 150,
  [153] = 142,
  [154] = 150,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 156,
  [162] = 162,
  [163] = 159,
  [164] = 164,
  [165] = 143,
  [166] = 166,
  [167] = 167,
  [168] = 158,
  [169] = 147,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 151,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 145,
  [181] = 181,
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
  [208] = 142,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 182,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 144,
  [224] = 220,
  [225] = 225,
  [226] = 226,
  [227] = 221,
  [228] = 220,
  [229] = 167,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 177,
  [234] = 175,
  [235] = 235,
  [236] = 178,
  [237] = 174,
  [238] = 171,
  [239] = 239,
  [240] = 164,
  [241] = 162,
  [242] = 181,
  [243] = 243,
  [244] = 244,
  [245] = 166,
  [246] = 246,
  [247] = 172,
  [248] = 248,
  [249] = 179,
  [250] = 183,
  [251] = 251,
  [252] = 176,
  [253] = 184,
  [254] = 254,
  [255] = 187,
  [256] = 256,
  [257] = 186,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 271,
  [275] = 272,
  [276] = 270,
  [277] = 277,
  [278] = 264,
  [279] = 279,
  [280] = 271,
  [281] = 281,
  [282] = 281,
  [283] = 279,
  [284] = 284,
  [285] = 265,
  [286] = 286,
  [287] = 182,
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
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 295,
  [308] = 304,
  [309] = 291,
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
  [330] = 314,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 327,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 341,
  [346] = 313,
  [347] = 324,
  [348] = 348,
  [349] = 349,
  [350] = 316,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 331,
  [355] = 355,
  [356] = 319,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 337,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 335,
  [368] = 337,
  [369] = 369,
  [370] = 370,
  [371] = 335,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 344,
  [378] = 378,
  [379] = 328,
  [380] = 343,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 365,
  [391] = 391,
  [392] = 392,
  [393] = 364,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 320,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 363,
  [408] = 317,
  [409] = 315,
  [410] = 410,
  [411] = 362,
  [412] = 325,
  [413] = 339,
  [414] = 318,
  [415] = 342,
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
  [436] = 434,
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
  [451] = 426,
  [452] = 452,
  [453] = 420,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 159,
  [462] = 143,
  [463] = 158,
  [464] = 147,
  [465] = 151,
  [466] = 428,
  [467] = 429,
  [468] = 468,
  [469] = 469,
  [470] = 438,
  [471] = 471,
  [472] = 472,
  [473] = 156,
  [474] = 474,
  [475] = 431,
  [476] = 476,
  [477] = 438,
  [478] = 145,
  [479] = 424,
  [480] = 430,
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
  [545] = 532,
  [546] = 546,
  [547] = 523,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 513,
  [552] = 512,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 490,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 542,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 516,
  [579] = 579,
  [580] = 576,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 542,
  [585] = 585,
  [586] = 586,
  [587] = 532,
  [588] = 588,
  [589] = 574,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 519,
  [594] = 594,
  [595] = 595,
  [596] = 508,
  [597] = 597,
  [598] = 598,
  [599] = 582,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 543,
  [606] = 606,
  [607] = 601,
  [608] = 575,
  [609] = 609,
  [610] = 610,
  [611] = 556,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 602,
  [616] = 616,
  [617] = 530,
  [618] = 525,
  [619] = 521,
  [620] = 520,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 588,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 554,
  [629] = 579,
  [630] = 567,
  [631] = 602,
  [632] = 531,
  [633] = 633,
  [634] = 634,
  [635] = 559,
  [636] = 636,
  [637] = 625,
  [638] = 638,
  [639] = 591,
  [640] = 640,
  [641] = 577,
  [642] = 529,
  [643] = 510,
  [644] = 524,
  [645] = 626,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 482,
  [650] = 527,
  [651] = 651,
  [652] = 526,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(819);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1281);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*') ADVANCE(1289);
      if (lookahead == '+' ||
          lookahead == '^') ADVANCE(1448);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(1347);
      if (lookahead == '.') ADVANCE(1344);
      if (lookahead == '/') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(1273);
      if (lookahead == ';') ADVANCE(1322);
      if (lookahead == '<') ADVANCE(1450);
      if (lookahead == '=') ADVANCE(1298);
      if (lookahead == '>') ADVANCE(1451);
      if (lookahead == 'A') ADVANCE(647);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'D') ADVANCE(256);
      if (lookahead == 'E') ADVANCE(523);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'I') ADVANCE(522);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead == 'P') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead == 'U') ADVANCE(511);
      if (lookahead == '[') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == '_') ADVANCE(1382);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'k') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(513);
      if (lookahead == 'v') ADVANCE(572);
      if (lookahead == 'w') ADVANCE(262);
      if (lookahead == '{') ADVANCE(1351);
      if (lookahead == '|') ADVANCE(1314);
      if (lookahead == '}') ADVANCE(1352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(820);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1421);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1281);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*') ADVANCE(1289);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(1297);
      if (lookahead == '[') ADVANCE(1277);
      if (lookahead == 'a') ADVANCE(1194);
      if (lookahead == 'b') ADVANCE(1145);
      if (lookahead == 'c') ADVANCE(1244);
      if (lookahead == 'f') ADVANCE(1075);
      if (lookahead == 'i') ADVANCE(1127);
      if (lookahead == 'l') ADVANCE(1149);
      if (lookahead == 'p') ADVANCE(1161);
      if (lookahead == 's') ADVANCE(1222);
      if (lookahead == 'u') ADVANCE(1115);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1281);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*') ADVANCE(1289);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(1224);
      if (lookahead == 'B') ADVANCE(1015);
      if (lookahead == 'C') ADVANCE(1011);
      if (lookahead == 'E') ADVANCE(1101);
      if (lookahead == 'I') ADVANCE(1100);
      if (lookahead == 'P') ADVANCE(1061);
      if (lookahead == 'S') ADVANCE(843);
      if (lookahead == '[') ADVANCE(1277);
      if (lookahead == 'a') ADVANCE(1060);
      if (lookahead == 'b') ADVANCE(1248);
      if (lookahead == 'c') ADVANCE(1211);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(1348);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(1298);
      if (lookahead == 'A') ADVANCE(1178);
      if (lookahead == 'B') ADVANCE(1015);
      if (lookahead == 'C') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(1101);
      if (lookahead == 'F') ADVANCE(879);
      if (lookahead == 'I') ADVANCE(1099);
      if (lookahead == 'N') ADVANCE(858);
      if (lookahead == 'P') ADVANCE(1061);
      if (lookahead == 'S') ADVANCE(842);
      if (lookahead == 'T') ADVANCE(1180);
      if (lookahead == 'U') ADVANCE(1092);
      if (lookahead == '[') ADVANCE(1278);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == '_') ADVANCE(831);
      if (lookahead == 'a') ADVANCE(1059);
      if (lookahead == 'b') ADVANCE(1248);
      if (lookahead == 'c') ADVANCE(876);
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead == 'm') ADVANCE(936);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1016);
      if (lookahead == 'u') ADVANCE(1093);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '-') ADVANCE(1348);
      if (lookahead == '.') ADVANCE(812);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(1297);
      if (lookahead == 'A') ADVANCE(1178);
      if (lookahead == 'B') ADVANCE(1015);
      if (lookahead == 'C') ADVANCE(987);
      if (lookahead == 'E') ADVANCE(1101);
      if (lookahead == 'F') ADVANCE(879);
      if (lookahead == 'I') ADVANCE(1099);
      if (lookahead == 'N') ADVANCE(858);
      if (lookahead == 'P') ADVANCE(1061);
      if (lookahead == 'S') ADVANCE(842);
      if (lookahead == 'T') ADVANCE(1180);
      if (lookahead == 'U') ADVANCE(1092);
      if (lookahead == '[') ADVANCE(1278);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == '_') ADVANCE(831);
      if (lookahead == 'a') ADVANCE(1059);
      if (lookahead == 'b') ADVANCE(1248);
      if (lookahead == 'c') ADVANCE(876);
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead == 'm') ADVANCE(936);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead == 'u') ADVANCE(1112);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '>') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1272);
      if (lookahead == 'A') ADVANCE(1179);
      if (lookahead == 'F') ADVANCE(1254);
      if (lookahead == 'I') ADVANCE(1256);
      if (lookahead == 'S') ADVANCE(1164);
      if (lookahead == 'U') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1278);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == '_') ADVANCE(1383);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(1179);
      if (lookahead == 'F') ADVANCE(1254);
      if (lookahead == 'I') ADVANCE(1256);
      if (lookahead == 'S') ADVANCE(1164);
      if (lookahead == 'U') ADVANCE(1107);
      if (lookahead == '[') ADVANCE(1278);
      if (lookahead == '_') ADVANCE(1383);
      if (lookahead == 's') ADVANCE(1242);
      if (lookahead == 'w') ADVANCE(963);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '_') ADVANCE(839);
      if (lookahead == 'c') ADVANCE(1154);
      if (lookahead == 'd') ADVANCE(1137);
      if (lookahead == 'f') ADVANCE(1077);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead == 's') ADVANCE(1234);
      if (lookahead == 'u') ADVANCE(1123);
      if (lookahead == 'v') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(1290);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '>') ADVANCE(1420);
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
      if (lookahead == '}') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1366);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(1293);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(182);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(700);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(1448);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(1364);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(1364);
      if (lookahead == '=') ADVANCE(828);
      END_STATE();
    case 29:
      if (lookahead == '<') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(1315);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'D') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == 'Y') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(1419);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == 'X') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(677);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(707);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(679);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == 'F') ADVANCE(682);
      if (lookahead == 'G') ADVANCE(237);
      if (lookahead == 'L') ADVANCE(238);
      if (lookahead == 'M') ADVANCE(265);
      if (lookahead == 'N') ADVANCE(239);
      if (lookahead == 'V') ADVANCE(147);
      if (lookahead == 'W') ADVANCE(315);
      if (lookahead == '_') ADVANCE(717);
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(487);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(488);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(1442);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(316);
      END_STATE();
    case 47:
      if (lookahead == 'F') ADVANCE(600);
      END_STATE();
    case 48:
      if (lookahead == 'F') ADVANCE(680);
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(538);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(543);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(1457);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(1440);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(1464);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == 'P') ADVANCE(743);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(1444);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(1446);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(383);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(384);
      END_STATE();
    case 72:
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 73:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 74:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'V') ADVANCE(134);
      END_STATE();
    case 76:
      if (lookahead == 'V') ADVANCE(158);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(419);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(811);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(813);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(558);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(703);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(787);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(220);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(192);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(631);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(604);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(352);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(562);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(656);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(670);
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(190);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(553);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(702);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(446);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(762);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(706);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(709);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(710);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'f') ADVANCE(772);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(780);
      if (lookahead == 'o') ADVANCE(525);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(694);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(479);
      if (lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == 'u') ADVANCE(661);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(801);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(756);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(480);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(1299);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(804);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(470);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(408);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(471);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(474);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(300);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(445);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(1467);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(1407);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(1287);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(779);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(697);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(607);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(758);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(721);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(724);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(760);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1328);
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1328);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(1316);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1413);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1275);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1325);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1391);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1337);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1463);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1404);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1338);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1432);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1357);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1434);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1359);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1379);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(1415);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(1412);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(577);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(596);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'm') ADVANCE(788);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(1454);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1311);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1310);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1301);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1374);
      if (lookahead == 't') ADVANCE(1372);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead == 't') ADVANCE(1371);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1389);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1294);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1463);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1466);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1393);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1368);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1367);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1361);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1388);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(788);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 330:
      if (lookahead == 'f') ADVANCE(1307);
      if (lookahead == 'n') ADVANCE(1306);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(1307);
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 332:
      if (lookahead == 'f') ADVANCE(1313);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(822);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(1330);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(1331);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(1463);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(1375);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1428);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1430);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1378);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(334);
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(429);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(684);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(337);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(728);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(729);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(730);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(732);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(413);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(485);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(602);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(416);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(422);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(1418);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(1323);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(1397);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(541);
      if (lookahead == 'z') ADVANCE(273);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(556);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(566);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(545);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(546);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(548);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(551);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(552);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 376:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 377:
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 378:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 379:
      if (lookahead == 'h') ADVANCE(280);
      END_STATE();
    case 380:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 381:
      if (lookahead == 'h') ADVANCE(404);
      END_STATE();
    case 382:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 383:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 384:
      if (lookahead == 'h') ADVANCE(432);
      END_STATE();
    case 385:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 386:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 387:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(810);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(716);
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(711);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(754);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(785);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(595);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 447:
      if (lookahead == 'k') ADVANCE(1320);
      END_STATE();
    case 448:
      if (lookahead == 'k') ADVANCE(1411);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(1409);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(1318);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(1317);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(1404);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(695);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(776);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(777);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(442);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(789);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(628);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(629);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(576);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(319);
      END_STATE();
    case 505:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 506:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 507:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 508:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 509:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 510:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(1306);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(1327);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(1309);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(1426);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(1463);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(1386);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(1459);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(1349);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(782);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(688);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(753);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(742);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(746);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(761);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(768);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == 't') ADVANCE(1384);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(773);
      if (lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(676);
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 618:
      if (lookahead == 'p') ADVANCE(1302);
      END_STATE();
    case 619:
      if (lookahead == 'p') ADVANCE(1365);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(1335);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 622:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 628:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(675);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 633:
      if (lookahead == 'q') ADVANCE(97);
      END_STATE();
    case 634:
      if (lookahead == 'q') ADVANCE(1369);
      END_STATE();
    case 635:
      if (lookahead == 'q') ADVANCE(1319);
      END_STATE();
    case 636:
      if (lookahead == 'q') ADVANCE(79);
      END_STATE();
    case 637:
      if (lookahead == 'q') ADVANCE(95);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(1329);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(1333);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(1463);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(1399);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(1353);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(1376);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(1395);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(791);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(691);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(597);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(1463);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(722);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(704);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(1304);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(1345);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(1461);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(1283);
      if (lookahead == 'u') ADVANCE(500);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(1295);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(1463);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(824);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(1291);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(1436);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(1377);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(1339);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(1341);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(1380);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(1381);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(774);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(696);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(808);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 776:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 777:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 778:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 779:
      if (lookahead == 'u') ADVANCE(764);
      END_STATE();
    case 780:
      if (lookahead == 'u') ADVANCE(567);
      END_STATE();
    case 781:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 782:
      if (lookahead == 'v') ADVANCE(418);
      END_STATE();
    case 783:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 784:
      if (lookahead == 'v') ADVANCE(236);
      END_STATE();
    case 785:
      if (lookahead == 'v') ADVANCE(243);
      END_STATE();
    case 786:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 787:
      if (lookahead == 'v') ADVANCE(159);
      END_STATE();
    case 788:
      if (lookahead == 'w') ADVANCE(1416);
      END_STATE();
    case 789:
      if (lookahead == 'w') ADVANCE(1414);
      END_STATE();
    case 790:
      if (lookahead == 'w') ADVANCE(409);
      END_STATE();
    case 791:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 792:
      if (lookahead == 'x') ADVANCE(1424);
      END_STATE();
    case 793:
      if (lookahead == 'x') ADVANCE(1463);
      END_STATE();
    case 794:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 795:
      if (lookahead == 'x') ADVANCE(275);
      END_STATE();
    case 796:
      if (lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 797:
      if (lookahead == 'y') ADVANCE(1422);
      END_STATE();
    case 798:
      if (lookahead == 'y') ADVANCE(1402);
      END_STATE();
    case 799:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 800:
      if (lookahead == 'y') ADVANCE(1405);
      END_STATE();
    case 801:
      if (lookahead == 'y') ADVANCE(1401);
      END_STATE();
    case 802:
      if (lookahead == 'y') ADVANCE(622);
      END_STATE();
    case 803:
      if (lookahead == 'y') ADVANCE(623);
      END_STATE();
    case 804:
      if (lookahead == 'y') ADVANCE(747);
      END_STATE();
    case 805:
      if (lookahead == 'y') ADVANCE(625);
      END_STATE();
    case 806:
      if (lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 807:
      if (lookahead == 'y') ADVANCE(626);
      END_STATE();
    case 808:
      if (lookahead == 'y') ADVANCE(627);
      END_STATE();
    case 809:
      if (lookahead == 'z') ADVANCE(273);
      END_STATE();
    case 810:
      if (lookahead == 'z') ADVANCE(278);
      END_STATE();
    case 811:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1448);
      END_STATE();
    case 812:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 813:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 814:
      if (eof) ADVANCE(819);
      if (lookahead == '\'') ADVANCE(1274);
      if (lookahead == '(') ADVANCE(1281);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*') ADVANCE(1289);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(1272);
      if (lookahead == '[') ADVANCE(1277);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      END_STATE();
    case 815:
      if (eof) ADVANCE(819);
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1448);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(1449);
      if (lookahead == '.') ADVANCE(1343);
      if (lookahead == '/') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(1273);
      if (lookahead == '<') ADVANCE(1451);
      if (lookahead == '=') ADVANCE(1452);
      if (lookahead == '>') ADVANCE(1451);
      if (lookahead == 'A') ADVANCE(733);
      if (lookahead == 'B') ADVANCE(388);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'E') ADVANCE(523);
      if (lookahead == 'I') ADVANCE(564);
      if (lookahead == 'P') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == '[') ADVANCE(1277);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == 'b') ADVANCE(608);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == 'k') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(524);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(1352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(830);
      END_STATE();
    case 816:
      if (eof) ADVANCE(819);
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1448);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(1449);
      if (lookahead == '/') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '<') ADVANCE(1451);
      if (lookahead == '=') ADVANCE(1452);
      if (lookahead == '>') ADVANCE(1451);
      if (lookahead == '[') ADVANCE(1277);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'b') ADVANCE(598);
      if (lookahead == 'c') ADVANCE(766);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(539);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(816)
      END_STATE();
    case 817:
      if (eof) ADVANCE(819);
      if (lookahead == '(') ADVANCE(1280);
      if (lookahead == ')') ADVANCE(1282);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '^') ADVANCE(1448);
      if (lookahead == ',') ADVANCE(1292);
      if (lookahead == '-') ADVANCE(1449);
      if (lookahead == '/') ADVANCE(1453);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(1451);
      if (lookahead == '>') ADVANCE(1451);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1279);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == 'g') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(1314);
      if (lookahead == '}') ADVANCE(1352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(817)
      END_STATE();
    case 818:
      if (eof) ADVANCE(819);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(961);
      if (lookahead == 'g') ADVANCE(1065);
      if (lookahead == 'p') ADVANCE(1190);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(818)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(833);
      if (lookahead == '_') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'C') ADVANCE(852);
      if (lookahead == 'M') ADVANCE(877);
      if (lookahead == 'O') ADVANCE(855);
      if (lookahead == 'X') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'f') ADVANCE(1192);
      if (lookahead == 'm') ADVANCE(881);
      if (lookahead == 's') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(850);
      if (lookahead == 'C') ADVANCE(852);
      if (lookahead == 'O') ADVANCE(855);
      if (lookahead == 'X') ADVANCE(853);
      if (lookahead == 'a') ADVANCE(1073);
      if (lookahead == 'f') ADVANCE(1192);
      if (lookahead == 'm') ADVANCE(881);
      if (lookahead == 's') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'D') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(857);
      if (lookahead == 'p') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'M') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'N') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'N') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'P') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'U') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'U') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1203);
      if (lookahead == 'f') ADVANCE(1253);
      if (lookahead == 't') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1072);
      if (lookahead == 'v') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1261);
      if (lookahead == 'i') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(958);
      if (lookahead == 'o') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(893);
      if (lookahead == 'i') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1308);
      if (lookahead == 's') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1249);
      if (lookahead == 'h') ADVANCE(894);
      if (lookahead == 'i') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1034);
      if (lookahead == 'w') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1268);
      if (lookahead == 't') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 's') ADVANCE(910);
      if (lookahead == 'u') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(926);
      if (lookahead == 'l') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'k') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1018);
      if (lookahead == 'r') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1227);
      if (lookahead == 'v') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1095);
      if (lookahead == 't') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1191);
      if (lookahead == 'r') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == 't') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1271);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1271);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1364);
      if (lookahead == '=') ADVANCE(828);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1363);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1315);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_is_signed);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_is_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1366);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(830);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(503);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(683);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(466);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(790);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_ub);
      END_STATE();
    case 1420:
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
    case 1421:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(1448);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1448);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1315);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1448);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1464);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1465);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
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
  [71] = {.lex_state = 815},
  [72] = {.lex_state = 815},
  [73] = {.lex_state = 815},
  [74] = {.lex_state = 815},
  [75] = {.lex_state = 815},
  [76] = {.lex_state = 815},
  [77] = {.lex_state = 815},
  [78] = {.lex_state = 815},
  [79] = {.lex_state = 815},
  [80] = {.lex_state = 815},
  [81] = {.lex_state = 815},
  [82] = {.lex_state = 815},
  [83] = {.lex_state = 815},
  [84] = {.lex_state = 815},
  [85] = {.lex_state = 815},
  [86] = {.lex_state = 815},
  [87] = {.lex_state = 815},
  [88] = {.lex_state = 815},
  [89] = {.lex_state = 815},
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
  [105] = {.lex_state = 816},
  [106] = {.lex_state = 816},
  [107] = {.lex_state = 816},
  [108] = {.lex_state = 816},
  [109] = {.lex_state = 816},
  [110] = {.lex_state = 816},
  [111] = {.lex_state = 816},
  [112] = {.lex_state = 816},
  [113] = {.lex_state = 816},
  [114] = {.lex_state = 816},
  [115] = {.lex_state = 816},
  [116] = {.lex_state = 816},
  [117] = {.lex_state = 816},
  [118] = {.lex_state = 816},
  [119] = {.lex_state = 816},
  [120] = {.lex_state = 816},
  [121] = {.lex_state = 816},
  [122] = {.lex_state = 816},
  [123] = {.lex_state = 816},
  [124] = {.lex_state = 816},
  [125] = {.lex_state = 816},
  [126] = {.lex_state = 816},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 816},
  [129] = {.lex_state = 816},
  [130] = {.lex_state = 816},
  [131] = {.lex_state = 816},
  [132] = {.lex_state = 816},
  [133] = {.lex_state = 816},
  [134] = {.lex_state = 816},
  [135] = {.lex_state = 816},
  [136] = {.lex_state = 816},
  [137] = {.lex_state = 816},
  [138] = {.lex_state = 816},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 815},
  [143] = {.lex_state = 816},
  [144] = {.lex_state = 817},
  [145] = {.lex_state = 816},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 816},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 816},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 817},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 815},
  [156] = {.lex_state = 816},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 816},
  [159] = {.lex_state = 816},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 817},
  [162] = {.lex_state = 817},
  [163] = {.lex_state = 817},
  [164] = {.lex_state = 817},
  [165] = {.lex_state = 817},
  [166] = {.lex_state = 817},
  [167] = {.lex_state = 817},
  [168] = {.lex_state = 817},
  [169] = {.lex_state = 817},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 817},
  [172] = {.lex_state = 817},
  [173] = {.lex_state = 817},
  [174] = {.lex_state = 817},
  [175] = {.lex_state = 817},
  [176] = {.lex_state = 817},
  [177] = {.lex_state = 817},
  [178] = {.lex_state = 817},
  [179] = {.lex_state = 817},
  [180] = {.lex_state = 817},
  [181] = {.lex_state = 817},
  [182] = {.lex_state = 817},
  [183] = {.lex_state = 817},
  [184] = {.lex_state = 817},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 817},
  [187] = {.lex_state = 817},
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
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 818},
  [211] = {.lex_state = 818},
  [212] = {.lex_state = 814},
  [213] = {.lex_state = 817},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 815},
  [221] = {.lex_state = 815},
  [222] = {.lex_state = 815},
  [223] = {.lex_state = 817},
  [224] = {.lex_state = 815},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 815},
  [228] = {.lex_state = 815},
  [229] = {.lex_state = 817},
  [230] = {.lex_state = 817},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 817},
  [234] = {.lex_state = 817},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 817},
  [237] = {.lex_state = 817},
  [238] = {.lex_state = 817},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 817},
  [241] = {.lex_state = 817},
  [242] = {.lex_state = 817},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 817},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 817},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 817},
  [250] = {.lex_state = 817},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 817},
  [253] = {.lex_state = 817},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 817},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 817},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 817},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 817},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 817},
  [265] = {.lex_state = 817},
  [266] = {.lex_state = 814},
  [267] = {.lex_state = 817},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 817},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 817},
  [273] = {.lex_state = 817},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 817},
  [276] = {.lex_state = 817},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 817},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 817},
  [282] = {.lex_state = 817},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 818},
  [285] = {.lex_state = 817},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 818},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 817},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 817},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 817},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 817},
  [306] = {.lex_state = 817},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 817},
  [315] = {.lex_state = 817},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 817},
  [318] = {.lex_state = 817},
  [319] = {.lex_state = 817},
  [320] = {.lex_state = 817},
  [321] = {.lex_state = 817},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 815},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 817},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 817},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 817},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 817},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 817},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 815},
  [348] = {.lex_state = 817},
  [349] = {.lex_state = 817},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 817},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 817},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 817},
  [357] = {.lex_state = 817},
  [358] = {.lex_state = 817},
  [359] = {.lex_state = 817},
  [360] = {.lex_state = 817},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 817},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 817},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 815},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 817},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 817},
  [386] = {.lex_state = 817},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 817},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 817},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 817},
  [401] = {.lex_state = 817},
  [402] = {.lex_state = 817},
  [403] = {.lex_state = 817},
  [404] = {.lex_state = 817},
  [405] = {.lex_state = 817},
  [406] = {.lex_state = 817},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 817},
  [409] = {.lex_state = 817},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 817},
  [412] = {.lex_state = 4},
  [413] = {.lex_state = 817},
  [414] = {.lex_state = 817},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 4},
  [419] = {.lex_state = 815},
  [420] = {.lex_state = 4},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 4},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 4},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 815},
  [435] = {.lex_state = 5},
  [436] = {.lex_state = 815},
  [437] = {.lex_state = 815},
  [438] = {.lex_state = 4},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 815},
  [441] = {.lex_state = 9},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 9},
  [450] = {.lex_state = 4},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 815},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 4},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 6},
  [463] = {.lex_state = 6},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 6},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 4},
  [471] = {.lex_state = 4},
  [472] = {.lex_state = 4},
  [473] = {.lex_state = 6},
  [474] = {.lex_state = 4},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 4},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 4},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 8},
  [482] = {.lex_state = 8},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 8},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 8},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 5},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 5},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 8},
  [513] = {.lex_state = 8},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 5},
  [518] = {.lex_state = 6},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 8},
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
  [534] = {.lex_state = 8},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 8},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 5},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 8},
  [548] = {.lex_state = 5},
  [549] = {.lex_state = 4},
  [550] = {.lex_state = 5},
  [551] = {.lex_state = 8},
  [552] = {.lex_state = 8},
  [553] = {.lex_state = 8},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 19},
  [556] = {.lex_state = 8},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 5},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 815},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 815},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 8},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 8},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 8},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 8},
  [590] = {.lex_state = 8},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 815},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 4},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 5},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 815},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 5},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 5},
  [610] = {.lex_state = 6},
  [611] = {.lex_state = 8},
  [612] = {.lex_state = 4},
  [613] = {.lex_state = 5},
  [614] = {.lex_state = 5},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 8},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 815},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 8},
  [634] = {.lex_state = 8},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 8},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 5},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 8},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 6},
  [652] = {.lex_state = 0},
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
    [sym_source_file] = STATE(648),
    [sym_declaration] = STATE(170),
    [sym_def_aggregate_declaration] = STATE(312),
    [sym_glob_declaration] = STATE(312),
    [sym_proc_declaration] = STATE(312),
    [sym_proc_full_declaration] = STATE(310),
    [sym_proc_forward_declaration] = STATE(310),
    [sym_def_declaration] = STATE(312),
    [aux_sym_source_file_repeat1] = STATE(170),
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(264), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(59), 1,
      anon_sym_struct,
    ACTIONS(61), 1,
      anon_sym_union,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(278), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(273), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(281), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(270), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(276), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(282), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(272), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(275), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(267), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(362), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(348), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(273), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(175), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(328), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(223), 1,
      sym_sym,
    STATE(229), 1,
      sym_core_ctype,
    STATE(242), 1,
      sym_pexpr,
    STATE(245), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(172), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(349), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(339), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(345), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(356), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(341), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(314), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(404), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(405), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(223), 1,
      sym_sym,
    STATE(229), 1,
      sym_core_ctype,
    STATE(234), 1,
      sym_pexpr,
    STATE(245), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(409), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(360), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(359), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(285), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(358), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(357), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(289), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(403), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(411), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(315), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(353), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(351), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(320), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(413), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(414), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(292), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(181), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(223), 1,
      sym_sym,
    STATE(229), 1,
      sym_core_ctype,
    STATE(252), 1,
      sym_pexpr,
    STATE(245), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(321), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(223), 1,
      sym_sym,
    STATE(229), 1,
      sym_core_ctype,
    STATE(247), 1,
      sym_pexpr,
    STATE(245), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(176), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(379), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(391), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(302), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(223), 1,
      sym_sym,
    STATE(229), 1,
      sym_core_ctype,
    STATE(230), 1,
      sym_pexpr,
    STATE(245), 2,
      sym_list_pexpr,
      sym_value,
    STATE(519), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(319), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(330), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(400), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(389), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(306), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(401), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(265), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(260), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(386), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(385), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(262), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(305), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(369), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(406), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(318), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(402), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(144), 1,
      sym_sym,
    STATE(167), 1,
      sym_core_ctype,
    STATE(317), 1,
      sym_pexpr,
    STATE(166), 2,
      sym_list_pexpr,
      sym_value,
    STATE(593), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
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
  [7488] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(290), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7581] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(195), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7671] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(199), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7761] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(446), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7851] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(423), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7941] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(269), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8031] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(197), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8121] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(196), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8211] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(263), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8301] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(261), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8391] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(396), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8481] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(392), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8571] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(194), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8661] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(258), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8751] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(268), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8841] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(448), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8931] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(452), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9021] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(198), 1,
      sym_expr,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9111] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(204), 1,
      sym_action,
    STATE(205), 1,
      sym_paction,
    STATE(259), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9201] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(425), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(512), 1,
      sym_sym,
    ACTIONS(177), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(51), 13,
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
  [9251] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(295), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9300] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      sym_list_pattern,
    STATE(307), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9349] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_list_pattern,
    STATE(294), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(475), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(512), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9444] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(449), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(431), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(512), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9536] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(244), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(512), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(441), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9628] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(244), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9674] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(444), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(512), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9720] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(435), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9766] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(297), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9812] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(243), 1,
      sym_list_pattern,
    STATE(299), 1,
      sym_pattern,
    STATE(511), 1,
      sym_ctor,
    STATE(552), 1,
      sym_sym,
    ACTIONS(51), 13,
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
  [9858] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_loaded,
    ACTIONS(209), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(333), 1,
      sym_core_base_type,
    STATE(590), 1,
      sym_sym,
    ACTIONS(195), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(207), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(203), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9904] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_eff,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(440), 1,
      sym_core_type,
    STATE(598), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9947] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_core_object_type,
    STATE(337), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [9987] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_core_object_type,
    STATE(361), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10027] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_core_object_type,
    STATE(368), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10067] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(548), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10104] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_loaded,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(254), 1,
      sym_core_base_type,
    STATE(473), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(235), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10141] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(460), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10178] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(517), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10215] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(600), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(388), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10289] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(568), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10326] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(376), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10363] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(550), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10400] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_loaded,
    ACTIONS(255), 1,
      anon_sym_array,
    STATE(161), 1,
      sym_core_object_type,
    STATE(183), 1,
      sym_core_base_type,
    ACTIONS(243), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(253), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(249), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10437] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_loaded,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(231), 1,
      sym_core_base_type,
    STATE(473), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(235), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10474] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_loaded,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(239), 1,
      sym_core_base_type,
    STATE(473), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(235), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10511] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(573), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10548] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(544), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10585] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(614), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10622] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(501), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10659] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(232), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10696] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(584), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10733] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(218), 1,
      sym_ctype,
    STATE(558), 1,
      sym_params,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [10776] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_loaded,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(232), 1,
      sym_core_base_type,
    STATE(473), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(235), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10813] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(564), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10850] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(542), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10887] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(476), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10924] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(239), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10961] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(231), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10998] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_loaded,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(248), 1,
      sym_core_base_type,
    STATE(473), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(235), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11035] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(254), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11072] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(250), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(248), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11146] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(156), 1,
      sym_core_object_type,
    STATE(609), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PtrArrayShift,
    STATE(606), 1,
      sym_memop_op,
    ACTIONS(271), 12,
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
  [11207] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    ACTIONS(275), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(251), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11247] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    ACTIONS(277), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(251), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COLON,
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
  [11309] = 3,
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
  [11330] = 4,
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
  [11353] = 3,
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
  [11374] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(251), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11411] = 3,
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
  [11432] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(279), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11469] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(283), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11506] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(280), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11543] = 3,
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
  [11564] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(274), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_binary_operator,
    ACTIONS(279), 12,
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
  [11622] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(271), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11659] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    STATE(560), 1,
      sym_action,
  [11702] = 3,
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
  [11723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(225), 1,
      sym_basic_type,
    STATE(226), 1,
      sym_ctype_star,
    STATE(303), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
  [11762] = 3,
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
  [11783] = 3,
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
  [11804] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym_sym_token1,
    ACTIONS(261), 1,
      anon_sym_void,
    ACTIONS(267), 1,
      anon_sym__Atomic,
    ACTIONS(269), 1,
      sym_floating_type,
    STATE(207), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(286), 1,
      sym_ctype,
    ACTIONS(257), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(265), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(225), 2,
      sym_ctype_star,
      sym_basic_type,
  [11841] = 3,
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
  [11861] = 3,
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
  [11881] = 3,
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
  [11901] = 3,
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
  [11921] = 3,
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
  [11941] = 3,
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
  [11961] = 3,
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
  [11981] = 3,
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
  [12001] = 3,
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
  [12021] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(185), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(310), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(312), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12051] = 3,
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
  [12071] = 3,
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
  [12091] = 3,
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
  [12111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_binary_operator,
    ACTIONS(335), 11,
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
  [12131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_binary_operator,
    ACTIONS(339), 11,
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
  [12151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_binary_operator,
    ACTIONS(343), 11,
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
  [12171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_binary_operator,
    ACTIONS(347), 11,
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
  [12191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_binary_operator,
    ACTIONS(351), 11,
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
  [12211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_binary_operator,
    ACTIONS(355), 11,
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
  [12231] = 3,
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
  [12251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_binary_operator,
    ACTIONS(355), 11,
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
  [12271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_binary_operator,
    ACTIONS(359), 11,
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
  [12291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_binary_operator,
    ACTIONS(343), 11,
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
  [12311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_binary_operator,
    ACTIONS(363), 11,
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
  [12331] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      anon_sym_def,
    ACTIONS(372), 1,
      anon_sym_glob,
    ACTIONS(375), 1,
      anon_sym_proc,
    STATE(185), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(310), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(312), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12361] = 3,
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
  [12381] = 3,
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
  [12401] = 2,
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
  [12418] = 2,
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
  [12435] = 2,
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
  [12452] = 2,
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
  [12469] = 2,
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
  [12486] = 2,
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
  [12503] = 2,
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
  [12520] = 2,
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
  [12537] = 2,
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
  [12554] = 2,
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
  [12571] = 2,
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
  [12588] = 2,
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
  [12605] = 2,
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
  [12622] = 2,
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
  [12639] = 2,
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
  [12656] = 2,
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
  [12673] = 2,
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
  [12690] = 2,
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
  [12707] = 2,
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
  [12724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_sym_token1,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(420), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [12762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym_sym_token1,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(427), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12783] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
    STATE(583), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(433), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      aux_sym_sym_token1,
    STATE(583), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(437), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(446), 1,
      anon_sym_restrict,
    ACTIONS(442), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_binary_operator,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12861] = 3,
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
  [12876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_params_repeat1,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [12944] = 3,
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
  [12959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(587), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(147), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(464), 1,
      sym_core_object_type,
    ACTIONS(229), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(239), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13016] = 4,
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
  [13033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(545), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_array,
    STATE(169), 1,
      sym_core_object_type,
    ACTIONS(243), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(253), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(532), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13120] = 3,
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
  [13134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COLON_COLON,
    ACTIONS(486), 1,
      sym_binary_operator,
    ACTIONS(482), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13150] = 3,
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
  [13164] = 3,
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
  [13178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_binary_operator,
    ACTIONS(347), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_binary_operator,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13206] = 3,
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
  [13220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_binary_operator,
    ACTIONS(351), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_binary_operator,
    ACTIONS(335), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_binary_operator,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13262] = 3,
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
  [13276] = 3,
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
  [13290] = 3,
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
  [13304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_binary_operator,
    ACTIONS(355), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13318] = 3,
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
  [13332] = 3,
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
  [13346] = 3,
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
  [13360] = 3,
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
  [13374] = 3,
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
  [13388] = 3,
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
  [13402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_binary_operator,
    ACTIONS(355), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_binary_operator,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(516), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_binary_operator,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_binary_operator,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13476] = 3,
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
  [13490] = 3,
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
  [13504] = 3,
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
  [13518] = 3,
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
  [13532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(526), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(530), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(532), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(538), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_expr_repeat4,
  [13605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13618] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_expr_repeat1,
  [13637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_expr_repeat1,
  [13656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(550), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13669] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_expr_repeat1,
  [13688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(554), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(556), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      aux_sym_expr_repeat1,
  [13733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(343), 1,
      aux_sym_expr_repeat1,
  [13769] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_expr_repeat1,
  [13788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13805] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      aux_sym_expr_repeat1,
  [13824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(365), 1,
      aux_sym_expr_repeat1,
  [13843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(293), 1,
      sym_def_fields,
    STATE(583), 1,
      sym_sym,
    STATE(210), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [13860] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_expr_repeat1,
  [13879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      aux_sym_expr_repeat1,
  [13932] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_expr_repeat1,
  [13951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [13981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_expr_repeat1,
  [14000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [14030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(594), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_expr_repeat3,
  [14070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(598), 1,
      sym_impl,
    STATE(417), 1,
      sym_sym,
    STATE(490), 1,
      sym_name,
  [14086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_COMMA,
  [14102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    STATE(338), 1,
      aux_sym_pattern_repeat1,
  [14128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(612), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      aux_sym_pattern_repeat1,
  [14144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(598), 1,
      sym_impl,
    STATE(417), 1,
      sym_sym,
    STATE(447), 1,
      sym_name,
  [14160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(614), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(614), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_pattern_repeat1,
  [14202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    STATE(432), 1,
      sym_attribute,
    STATE(616), 1,
      sym_sym,
  [14228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(627), 1,
      anon_sym_COMMA,
  [14244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(470), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DeriveCap,
    STATE(601), 1,
      sym_pure_memop_op,
    ACTIONS(631), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(633), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      aux_sym_pattern_repeat1,
  [14316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DeriveCap,
    STATE(607), 1,
      sym_pure_memop_op,
    ACTIONS(631), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(598), 1,
      sym_impl,
    STATE(417), 1,
      sym_sym,
    STATE(562), 1,
      sym_name,
  [14346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_expr_repeat1,
    ACTIONS(532), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [14393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(646), 1,
      anon_sym_in,
  [14406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [14419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [14432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_COMMA,
  [14445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [14458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_else,
  [14471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(656), 1,
      anon_sym_then,
  [14484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
  [14497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    ACTIONS(660), 1,
      anon_sym_ailname,
    STATE(326), 1,
      sym_attribute_pair,
  [14510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_params_repeat1,
  [14523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(377), 1,
      sym_member,
  [14536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(582), 1,
      sym_cabs_id,
  [14549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_attribute_repeat1,
  [14562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_pattern_repeat1,
  [14575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(674), 1,
      anon_sym_of,
  [14588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      aux_sym_attribute_repeat1,
  [14601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(654), 1,
      anon_sym_in,
  [14614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_end,
    ACTIONS(678), 1,
      anon_sym_PIPE,
    STATE(340), 1,
      aux_sym_pexpr_repeat1,
  [14627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_end,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    STATE(352), 1,
      aux_sym_expr_repeat2,
  [14640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_core_base_type_repeat1,
  [14653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      sym_sym,
  [14666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_core_base_type_repeat1,
  [14679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(298), 1,
      aux_sym_pattern_repeat1,
  [14692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(335), 1,
      aux_sym_core_base_type_repeat1,
  [14705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_pattern_repeat1,
  [14718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [14731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_PIPE,
    ACTIONS(699), 1,
      anon_sym_end,
    STATE(340), 1,
      aux_sym_pexpr_repeat1,
  [14744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [14757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_pexpr_repeat2,
  [14770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [14783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_pexpr_repeat2,
  [14796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [14809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [14822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(344), 1,
      sym_member,
  [14835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(705), 1,
      anon_sym_COMMA,
  [14848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(707), 1,
      anon_sym_in,
  [14861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [14874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [14887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(680), 1,
      anon_sym_PIPE,
    STATE(395), 1,
      aux_sym_expr_repeat2,
  [14900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [14913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(678), 1,
      anon_sym_PIPE,
    STATE(340), 1,
      aux_sym_pexpr_repeat1,
  [14926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_expr_repeat3,
  [14939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(646), 1,
      anon_sym_else,
  [14952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(713), 1,
      anon_sym_COMMA,
  [14965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [14978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(717), 1,
      anon_sym_COMMA,
  [14991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(719), 1,
      anon_sym_COMMA,
  [15004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_core_base_type_repeat1,
  [15017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [15030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_end,
    ACTIONS(678), 1,
      anon_sym_PIPE,
    STATE(354), 1,
      aux_sym_pexpr_repeat1,
  [15043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_attribute_repeat1,
  [15082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_core_base_type_repeat1,
  [15095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      aux_sym_core_base_type_repeat1,
  [15108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(734), 1,
      anon_sym_of,
  [15121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_core_base_type_repeat1,
  [15134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_core_base_type_repeat1,
  [15147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_impl,
    ACTIONS(740), 2,
      anon_sym_struct,
      anon_sym_union,
  [15158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_params_repeat1,
  [15184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(651), 1,
      sym_cabs_id,
  [15197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(387), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      aux_sym_pexpr_repeat2,
  [15223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_core_base_type_repeat1,
  [15236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(762), 1,
      anon_sym_of,
  [15249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_expr_repeat4,
  [15288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_expr_repeat4,
  [15301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      aux_sym_pattern_repeat1,
  [15314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(778), 1,
      anon_sym_COMMA,
  [15327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [15340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(784), 1,
      anon_sym_COMMA,
  [15379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [15405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(788), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [15416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      aux_sym_pexpr_repeat2,
  [15442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_PIPE,
    ACTIONS(798), 1,
      anon_sym_end,
    STATE(395), 1,
      aux_sym_expr_repeat2,
  [15455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(800), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(802), 1,
      anon_sym_COMMA,
    STATE(397), 1,
      aux_sym_expr_repeat3,
  [15479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(638), 1,
      sym_sym,
  [15492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(807), 1,
      anon_sym_COMMA,
  [15518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [15531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(809), 1,
      anon_sym_COMMA,
  [15544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(811), 1,
      anon_sym_then,
  [15557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(813), 1,
      anon_sym_COMMA,
  [15570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(815), 1,
      anon_sym_COMMA,
  [15583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(817), 1,
      anon_sym_then,
  [15596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_end,
    ACTIONS(678), 1,
      anon_sym_PIPE,
    STATE(331), 1,
      aux_sym_pexpr_repeat1,
  [15609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_COMMA,
  [15622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_COMMA,
  [15635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_expr_repeat1,
  [15648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [15661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(599), 1,
      sym_cabs_id,
  [15674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(825), 1,
      anon_sym_RPAREN,
  [15687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COLON_COLON,
    ACTIONS(536), 1,
      sym_binary_operator,
    ACTIONS(827), 1,
      anon_sym_COMMA,
  [15700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
    STATE(394), 1,
      aux_sym_pexpr_repeat2,
  [15713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(535), 1,
      sym_core_ctype,
  [15723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(633), 1,
      sym_sym,
  [15741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(439), 1,
      sym_member,
  [15751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(641), 1,
      sym_sym,
  [15761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(597), 1,
      sym_sym,
  [15771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [15779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [15789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(639), 1,
      sym_sym,
  [15799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_EQ,
    ACTIONS(833), 1,
      anon_sym_COLON_COLON,
  [15809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(629), 1,
      sym_core_ctype,
  [15819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(613), 1,
      sym_sym,
  [15829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [15837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_string_token1,
    STATE(625), 1,
      sym_string,
  [15847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(624), 1,
      sym_sym,
  [15857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COLON_COLON,
    ACTIONS(839), 1,
      anon_sym_EQ,
  [15867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(604), 1,
      sym_sym,
  [15877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(571), 1,
      sym_sym,
  [15887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(516), 1,
      sym_member,
  [15897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(841), 1,
      anon_sym_COMMA,
  [15907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    STATE(578), 1,
      sym_member,
  [15917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACK,
    ACTIONS(845), 1,
      anon_sym_COMMA,
  [15927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(151), 1,
      sym_sym,
  [15937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [15945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACK,
    STATE(561), 1,
      sym_glob_ctype_attribute,
  [15955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(849), 1,
      anon_sym_EQ_GT,
  [15965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_string_token1,
    STATE(458), 1,
      sym_cstring,
  [15975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_ailname,
    STATE(459), 1,
      sym_attribute_pair,
  [15985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COLON_COLON,
    ACTIONS(853), 1,
      anon_sym_EQ,
  [15995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(586), 1,
      sym_core_ctype,
  [16005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(855), 1,
      anon_sym_in,
  [16015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(857), 1,
      anon_sym_COMMA,
  [16025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_SEMI,
  [16035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(859), 1,
      anon_sym_EQ_GT,
  [16045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(570), 1,
      sym_sym,
  [16055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(579), 1,
      sym_core_ctype,
  [16065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    ACTIONS(707), 1,
      anon_sym_else,
  [16075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(577), 1,
      sym_sym,
  [16085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      sym_int_const,
  [16095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(569), 1,
      sym_core_ctype,
  [16113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(481), 1,
      sym_sym,
  [16123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_string_token1,
    STATE(637), 1,
      sym_string,
  [16205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_SQUOTE,
    STATE(284), 1,
      sym_core_ctype,
  [16215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_sym_token1,
    STATE(215), 1,
      sym_sym,
  [16225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_sym_token1,
    STATE(465), 1,
      sym_sym,
  [16235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(581), 1,
      sym_sym,
  [16245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(585), 1,
      sym_sym,
  [16255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(493), 1,
      sym_sym,
  [16273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_COLON_COLON,
    ACTIONS(873), 1,
      anon_sym_EQ,
  [16283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      aux_sym_sym_token1,
    STATE(173), 1,
      sym_sym,
  [16301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(591), 1,
      sym_sym,
  [16319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      aux_sym_sym_token1,
    STATE(588), 1,
      sym_sym,
  [16329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [16336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_COLON,
  [16343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
  [16350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym_memory_order,
  [16357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_eff,
  [16364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LPAREN,
  [16371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
  [16378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_memory_order,
  [16385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_in,
  [16392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [16399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COMMA,
  [16406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
  [16413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_COLON,
  [16420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_in,
  [16427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_COLON,
  [16434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym_memory_order,
  [16441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
  [16448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_LPAREN,
  [16455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
  [16462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
  [16469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_COLON_EQ,
  [16476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LPAREN,
  [16483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
  [16490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
  [16497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_LPAREN,
  [16504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
  [16511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
  [16518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_ub,
  [16525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
  [16532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
  [16539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
  [16546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COLON,
  [16553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COLON,
  [16560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
  [16567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_eff,
  [16574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
  [16581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COLON_EQ,
  [16588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_EQ,
  [16595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_LPAREN,
  [16602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
  [16609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
  [16616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
  [16623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
  [16630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
  [16637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
  [16644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LPAREN,
  [16651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
  [16658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [16665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
  [16672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
  [16679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
  [16686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
  [16693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
  [16700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_COLON,
  [16707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACK,
  [16714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_LPAREN,
  [16721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
  [16728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LPAREN,
  [16735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_memory_order,
  [16742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_COLON,
  [16749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_eff,
  [16756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_RBRACK,
  [16763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
  [16770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_COLON_EQ,
  [16777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [16784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_eff,
  [16791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COLON,
  [16798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COLON_EQ,
  [16805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      aux_sym_sym_token1,
  [16812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COLON_EQ,
  [16819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_COLON,
  [16826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COLON,
  [16833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [16840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LBRACE,
  [16847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      aux_sym_pure_memop_op_token1,
  [16854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COLON,
  [16861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
  [16868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [16875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [16882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
  [16889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_COLON_EQ,
  [16896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [16903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_ail_ctype,
  [16910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_LBRACK,
  [16917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [16924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [16931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_DOT,
  [16938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
  [16945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_COMMA,
  [16952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_COMMA,
  [16959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_EQ_GT,
  [16966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [16973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [16980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [16987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
  [16994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [17001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
  [17008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
  [17015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_COMMA,
  [17022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [17029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
  [17036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [17043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_COLON,
  [17050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
  [17057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_COLON,
  [17064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_COMMA,
  [17071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [17078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
  [17085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COLON,
  [17092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_COLON,
  [17099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [17106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_LBRACK,
  [17113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
  [17120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_sym_token1,
  [17127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_RBRACK,
  [17134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      sym_ub,
  [17141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_RBRACK,
  [17148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_LBRACK,
  [17155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
  [17162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_COLON_EQ,
  [17169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_COMMA,
  [17176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
  [17183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COMMA,
  [17190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
  [17197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_LBRACE,
  [17204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_COMMA,
  [17211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
  [17218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
  [17225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_COLON_EQ,
  [17232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_EQ,
  [17239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_COLON,
  [17246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      aux_sym_sym_token1,
  [17253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_COLON_EQ,
  [17260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_COLON_EQ,
  [17267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_LPAREN,
  [17274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_LPAREN,
  [17281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_LPAREN,
  [17288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_LPAREN,
  [17295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
  [17302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      anon_sym_LPAREN,
  [17309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_COMMA,
  [17316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      sym_memory_order,
  [17323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_COLON,
  [17330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
  [17337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [17344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_RPAREN,
  [17351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_eff,
  [17358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
  [17365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
  [17372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_DOT,
  [17379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_LPAREN,
  [17386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
  [17393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COLON,
  [17400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_COLON,
  [17407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [17414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
  [17421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_COMMA,
  [17428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_COLON,
  [17435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
  [17442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_in,
  [17449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
  [17456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
  [17463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_LPAREN,
  [17470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
  [17477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
  [17484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_COLON_EQ,
  [17491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
  [17498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      ts_builtin_sym_end,
  [17505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_COLON,
  [17512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
  [17519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_EQ,
  [17526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
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
  [SMALL_STATE(72)] = 7581,
  [SMALL_STATE(73)] = 7671,
  [SMALL_STATE(74)] = 7761,
  [SMALL_STATE(75)] = 7851,
  [SMALL_STATE(76)] = 7941,
  [SMALL_STATE(77)] = 8031,
  [SMALL_STATE(78)] = 8121,
  [SMALL_STATE(79)] = 8211,
  [SMALL_STATE(80)] = 8301,
  [SMALL_STATE(81)] = 8391,
  [SMALL_STATE(82)] = 8481,
  [SMALL_STATE(83)] = 8571,
  [SMALL_STATE(84)] = 8661,
  [SMALL_STATE(85)] = 8751,
  [SMALL_STATE(86)] = 8841,
  [SMALL_STATE(87)] = 8931,
  [SMALL_STATE(88)] = 9021,
  [SMALL_STATE(89)] = 9111,
  [SMALL_STATE(90)] = 9201,
  [SMALL_STATE(91)] = 9251,
  [SMALL_STATE(92)] = 9300,
  [SMALL_STATE(93)] = 9349,
  [SMALL_STATE(94)] = 9398,
  [SMALL_STATE(95)] = 9444,
  [SMALL_STATE(96)] = 9490,
  [SMALL_STATE(97)] = 9536,
  [SMALL_STATE(98)] = 9582,
  [SMALL_STATE(99)] = 9628,
  [SMALL_STATE(100)] = 9674,
  [SMALL_STATE(101)] = 9720,
  [SMALL_STATE(102)] = 9766,
  [SMALL_STATE(103)] = 9812,
  [SMALL_STATE(104)] = 9858,
  [SMALL_STATE(105)] = 9904,
  [SMALL_STATE(106)] = 9947,
  [SMALL_STATE(107)] = 9987,
  [SMALL_STATE(108)] = 10027,
  [SMALL_STATE(109)] = 10067,
  [SMALL_STATE(110)] = 10104,
  [SMALL_STATE(111)] = 10141,
  [SMALL_STATE(112)] = 10178,
  [SMALL_STATE(113)] = 10215,
  [SMALL_STATE(114)] = 10252,
  [SMALL_STATE(115)] = 10289,
  [SMALL_STATE(116)] = 10326,
  [SMALL_STATE(117)] = 10363,
  [SMALL_STATE(118)] = 10400,
  [SMALL_STATE(119)] = 10437,
  [SMALL_STATE(120)] = 10474,
  [SMALL_STATE(121)] = 10511,
  [SMALL_STATE(122)] = 10548,
  [SMALL_STATE(123)] = 10585,
  [SMALL_STATE(124)] = 10622,
  [SMALL_STATE(125)] = 10659,
  [SMALL_STATE(126)] = 10696,
  [SMALL_STATE(127)] = 10733,
  [SMALL_STATE(128)] = 10776,
  [SMALL_STATE(129)] = 10813,
  [SMALL_STATE(130)] = 10850,
  [SMALL_STATE(131)] = 10887,
  [SMALL_STATE(132)] = 10924,
  [SMALL_STATE(133)] = 10961,
  [SMALL_STATE(134)] = 10998,
  [SMALL_STATE(135)] = 11035,
  [SMALL_STATE(136)] = 11072,
  [SMALL_STATE(137)] = 11109,
  [SMALL_STATE(138)] = 11146,
  [SMALL_STATE(139)] = 11183,
  [SMALL_STATE(140)] = 11207,
  [SMALL_STATE(141)] = 11247,
  [SMALL_STATE(142)] = 11287,
  [SMALL_STATE(143)] = 11309,
  [SMALL_STATE(144)] = 11330,
  [SMALL_STATE(145)] = 11353,
  [SMALL_STATE(146)] = 11374,
  [SMALL_STATE(147)] = 11411,
  [SMALL_STATE(148)] = 11432,
  [SMALL_STATE(149)] = 11469,
  [SMALL_STATE(150)] = 11506,
  [SMALL_STATE(151)] = 11543,
  [SMALL_STATE(152)] = 11564,
  [SMALL_STATE(153)] = 11601,
  [SMALL_STATE(154)] = 11622,
  [SMALL_STATE(155)] = 11659,
  [SMALL_STATE(156)] = 11702,
  [SMALL_STATE(157)] = 11723,
  [SMALL_STATE(158)] = 11762,
  [SMALL_STATE(159)] = 11783,
  [SMALL_STATE(160)] = 11804,
  [SMALL_STATE(161)] = 11841,
  [SMALL_STATE(162)] = 11861,
  [SMALL_STATE(163)] = 11881,
  [SMALL_STATE(164)] = 11901,
  [SMALL_STATE(165)] = 11921,
  [SMALL_STATE(166)] = 11941,
  [SMALL_STATE(167)] = 11961,
  [SMALL_STATE(168)] = 11981,
  [SMALL_STATE(169)] = 12001,
  [SMALL_STATE(170)] = 12021,
  [SMALL_STATE(171)] = 12051,
  [SMALL_STATE(172)] = 12071,
  [SMALL_STATE(173)] = 12091,
  [SMALL_STATE(174)] = 12111,
  [SMALL_STATE(175)] = 12131,
  [SMALL_STATE(176)] = 12151,
  [SMALL_STATE(177)] = 12171,
  [SMALL_STATE(178)] = 12191,
  [SMALL_STATE(179)] = 12211,
  [SMALL_STATE(180)] = 12231,
  [SMALL_STATE(181)] = 12251,
  [SMALL_STATE(182)] = 12271,
  [SMALL_STATE(183)] = 12291,
  [SMALL_STATE(184)] = 12311,
  [SMALL_STATE(185)] = 12331,
  [SMALL_STATE(186)] = 12361,
  [SMALL_STATE(187)] = 12381,
  [SMALL_STATE(188)] = 12401,
  [SMALL_STATE(189)] = 12418,
  [SMALL_STATE(190)] = 12435,
  [SMALL_STATE(191)] = 12452,
  [SMALL_STATE(192)] = 12469,
  [SMALL_STATE(193)] = 12486,
  [SMALL_STATE(194)] = 12503,
  [SMALL_STATE(195)] = 12520,
  [SMALL_STATE(196)] = 12537,
  [SMALL_STATE(197)] = 12554,
  [SMALL_STATE(198)] = 12571,
  [SMALL_STATE(199)] = 12588,
  [SMALL_STATE(200)] = 12605,
  [SMALL_STATE(201)] = 12622,
  [SMALL_STATE(202)] = 12639,
  [SMALL_STATE(203)] = 12656,
  [SMALL_STATE(204)] = 12673,
  [SMALL_STATE(205)] = 12690,
  [SMALL_STATE(206)] = 12707,
  [SMALL_STATE(207)] = 12724,
  [SMALL_STATE(208)] = 12745,
  [SMALL_STATE(209)] = 12762,
  [SMALL_STATE(210)] = 12783,
  [SMALL_STATE(211)] = 12805,
  [SMALL_STATE(212)] = 12827,
  [SMALL_STATE(213)] = 12845,
  [SMALL_STATE(214)] = 12861,
  [SMALL_STATE(215)] = 12876,
  [SMALL_STATE(216)] = 12891,
  [SMALL_STATE(217)] = 12906,
  [SMALL_STATE(218)] = 12921,
  [SMALL_STATE(219)] = 12944,
  [SMALL_STATE(220)] = 12959,
  [SMALL_STATE(221)] = 12978,
  [SMALL_STATE(222)] = 12997,
  [SMALL_STATE(223)] = 13016,
  [SMALL_STATE(224)] = 13033,
  [SMALL_STATE(225)] = 13052,
  [SMALL_STATE(226)] = 13067,
  [SMALL_STATE(227)] = 13082,
  [SMALL_STATE(228)] = 13101,
  [SMALL_STATE(229)] = 13120,
  [SMALL_STATE(230)] = 13134,
  [SMALL_STATE(231)] = 13150,
  [SMALL_STATE(232)] = 13164,
  [SMALL_STATE(233)] = 13178,
  [SMALL_STATE(234)] = 13192,
  [SMALL_STATE(235)] = 13206,
  [SMALL_STATE(236)] = 13220,
  [SMALL_STATE(237)] = 13234,
  [SMALL_STATE(238)] = 13248,
  [SMALL_STATE(239)] = 13262,
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
  [SMALL_STATE(252)] = 13448,
  [SMALL_STATE(253)] = 13462,
  [SMALL_STATE(254)] = 13476,
  [SMALL_STATE(255)] = 13490,
  [SMALL_STATE(256)] = 13504,
  [SMALL_STATE(257)] = 13518,
  [SMALL_STATE(258)] = 13532,
  [SMALL_STATE(259)] = 13545,
  [SMALL_STATE(260)] = 13558,
  [SMALL_STATE(261)] = 13573,
  [SMALL_STATE(262)] = 13586,
  [SMALL_STATE(263)] = 13605,
  [SMALL_STATE(264)] = 13618,
  [SMALL_STATE(265)] = 13637,
  [SMALL_STATE(266)] = 13656,
  [SMALL_STATE(267)] = 13669,
  [SMALL_STATE(268)] = 13688,
  [SMALL_STATE(269)] = 13701,
  [SMALL_STATE(270)] = 13714,
  [SMALL_STATE(271)] = 13733,
  [SMALL_STATE(272)] = 13750,
  [SMALL_STATE(273)] = 13769,
  [SMALL_STATE(274)] = 13788,
  [SMALL_STATE(275)] = 13805,
  [SMALL_STATE(276)] = 13824,
  [SMALL_STATE(277)] = 13843,
  [SMALL_STATE(278)] = 13860,
  [SMALL_STATE(279)] = 13879,
  [SMALL_STATE(280)] = 13896,
  [SMALL_STATE(281)] = 13913,
  [SMALL_STATE(282)] = 13932,
  [SMALL_STATE(283)] = 13951,
  [SMALL_STATE(284)] = 13968,
  [SMALL_STATE(285)] = 13981,
  [SMALL_STATE(286)] = 14000,
  [SMALL_STATE(287)] = 14017,
  [SMALL_STATE(288)] = 14030,
  [SMALL_STATE(289)] = 14040,
  [SMALL_STATE(290)] = 14054,
  [SMALL_STATE(291)] = 14070,
  [SMALL_STATE(292)] = 14086,
  [SMALL_STATE(293)] = 14102,
  [SMALL_STATE(294)] = 14112,
  [SMALL_STATE(295)] = 14128,
  [SMALL_STATE(296)] = 14144,
  [SMALL_STATE(297)] = 14160,
  [SMALL_STATE(298)] = 14172,
  [SMALL_STATE(299)] = 14186,
  [SMALL_STATE(300)] = 14202,
  [SMALL_STATE(301)] = 14212,
  [SMALL_STATE(302)] = 14228,
  [SMALL_STATE(303)] = 14244,
  [SMALL_STATE(304)] = 14258,
  [SMALL_STATE(305)] = 14272,
  [SMALL_STATE(306)] = 14286,
  [SMALL_STATE(307)] = 14300,
  [SMALL_STATE(308)] = 14316,
  [SMALL_STATE(309)] = 14330,
  [SMALL_STATE(310)] = 14346,
  [SMALL_STATE(311)] = 14356,
  [SMALL_STATE(312)] = 14370,
  [SMALL_STATE(313)] = 14380,
  [SMALL_STATE(314)] = 14393,
  [SMALL_STATE(315)] = 14406,
  [SMALL_STATE(316)] = 14419,
  [SMALL_STATE(317)] = 14432,
  [SMALL_STATE(318)] = 14445,
  [SMALL_STATE(319)] = 14458,
  [SMALL_STATE(320)] = 14471,
  [SMALL_STATE(321)] = 14484,
  [SMALL_STATE(322)] = 14497,
  [SMALL_STATE(323)] = 14510,
  [SMALL_STATE(324)] = 14523,
  [SMALL_STATE(325)] = 14536,
  [SMALL_STATE(326)] = 14549,
  [SMALL_STATE(327)] = 14562,
  [SMALL_STATE(328)] = 14575,
  [SMALL_STATE(329)] = 14588,
  [SMALL_STATE(330)] = 14601,
  [SMALL_STATE(331)] = 14614,
  [SMALL_STATE(332)] = 14627,
  [SMALL_STATE(333)] = 14640,
  [SMALL_STATE(334)] = 14653,
  [SMALL_STATE(335)] = 14666,
  [SMALL_STATE(336)] = 14679,
  [SMALL_STATE(337)] = 14692,
  [SMALL_STATE(338)] = 14705,
  [SMALL_STATE(339)] = 14718,
  [SMALL_STATE(340)] = 14731,
  [SMALL_STATE(341)] = 14744,
  [SMALL_STATE(342)] = 14757,
  [SMALL_STATE(343)] = 14770,
  [SMALL_STATE(344)] = 14783,
  [SMALL_STATE(345)] = 14796,
  [SMALL_STATE(346)] = 14809,
  [SMALL_STATE(347)] = 14822,
  [SMALL_STATE(348)] = 14835,
  [SMALL_STATE(349)] = 14848,
  [SMALL_STATE(350)] = 14861,
  [SMALL_STATE(351)] = 14874,
  [SMALL_STATE(352)] = 14887,
  [SMALL_STATE(353)] = 14900,
  [SMALL_STATE(354)] = 14913,
  [SMALL_STATE(355)] = 14926,
  [SMALL_STATE(356)] = 14939,
  [SMALL_STATE(357)] = 14952,
  [SMALL_STATE(358)] = 14965,
  [SMALL_STATE(359)] = 14978,
  [SMALL_STATE(360)] = 14991,
  [SMALL_STATE(361)] = 15004,
  [SMALL_STATE(362)] = 15017,
  [SMALL_STATE(363)] = 15030,
  [SMALL_STATE(364)] = 15043,
  [SMALL_STATE(365)] = 15056,
  [SMALL_STATE(366)] = 15069,
  [SMALL_STATE(367)] = 15082,
  [SMALL_STATE(368)] = 15095,
  [SMALL_STATE(369)] = 15108,
  [SMALL_STATE(370)] = 15121,
  [SMALL_STATE(371)] = 15134,
  [SMALL_STATE(372)] = 15147,
  [SMALL_STATE(373)] = 15158,
  [SMALL_STATE(374)] = 15171,
  [SMALL_STATE(375)] = 15184,
  [SMALL_STATE(376)] = 15197,
  [SMALL_STATE(377)] = 15210,
  [SMALL_STATE(378)] = 15223,
  [SMALL_STATE(379)] = 15236,
  [SMALL_STATE(380)] = 15249,
  [SMALL_STATE(381)] = 15262,
  [SMALL_STATE(382)] = 15275,
  [SMALL_STATE(383)] = 15288,
  [SMALL_STATE(384)] = 15301,
  [SMALL_STATE(385)] = 15314,
  [SMALL_STATE(386)] = 15327,
  [SMALL_STATE(387)] = 15340,
  [SMALL_STATE(388)] = 15353,
  [SMALL_STATE(389)] = 15366,
  [SMALL_STATE(390)] = 15379,
  [SMALL_STATE(391)] = 15392,
  [SMALL_STATE(392)] = 15405,
  [SMALL_STATE(393)] = 15416,
  [SMALL_STATE(394)] = 15429,
  [SMALL_STATE(395)] = 15442,
  [SMALL_STATE(396)] = 15455,
  [SMALL_STATE(397)] = 15466,
  [SMALL_STATE(398)] = 15479,
  [SMALL_STATE(399)] = 15492,
  [SMALL_STATE(400)] = 15505,
  [SMALL_STATE(401)] = 15518,
  [SMALL_STATE(402)] = 15531,
  [SMALL_STATE(403)] = 15544,
  [SMALL_STATE(404)] = 15557,
  [SMALL_STATE(405)] = 15570,
  [SMALL_STATE(406)] = 15583,
  [SMALL_STATE(407)] = 15596,
  [SMALL_STATE(408)] = 15609,
  [SMALL_STATE(409)] = 15622,
  [SMALL_STATE(410)] = 15635,
  [SMALL_STATE(411)] = 15648,
  [SMALL_STATE(412)] = 15661,
  [SMALL_STATE(413)] = 15674,
  [SMALL_STATE(414)] = 15687,
  [SMALL_STATE(415)] = 15700,
  [SMALL_STATE(416)] = 15713,
  [SMALL_STATE(417)] = 15723,
  [SMALL_STATE(418)] = 15731,
  [SMALL_STATE(419)] = 15741,
  [SMALL_STATE(420)] = 15751,
  [SMALL_STATE(421)] = 15761,
  [SMALL_STATE(422)] = 15771,
  [SMALL_STATE(423)] = 15779,
  [SMALL_STATE(424)] = 15789,
  [SMALL_STATE(425)] = 15799,
  [SMALL_STATE(426)] = 15809,
  [SMALL_STATE(427)] = 15819,
  [SMALL_STATE(428)] = 15829,
  [SMALL_STATE(429)] = 15837,
  [SMALL_STATE(430)] = 15847,
  [SMALL_STATE(431)] = 15857,
  [SMALL_STATE(432)] = 15867,
  [SMALL_STATE(433)] = 15877,
  [SMALL_STATE(434)] = 15887,
  [SMALL_STATE(435)] = 15897,
  [SMALL_STATE(436)] = 15907,
  [SMALL_STATE(437)] = 15917,
  [SMALL_STATE(438)] = 15927,
  [SMALL_STATE(439)] = 15937,
  [SMALL_STATE(440)] = 15945,
  [SMALL_STATE(441)] = 15955,
  [SMALL_STATE(442)] = 15965,
  [SMALL_STATE(443)] = 15975,
  [SMALL_STATE(444)] = 15985,
  [SMALL_STATE(445)] = 15995,
  [SMALL_STATE(446)] = 16005,
  [SMALL_STATE(447)] = 16015,
  [SMALL_STATE(448)] = 16025,
  [SMALL_STATE(449)] = 16035,
  [SMALL_STATE(450)] = 16045,
  [SMALL_STATE(451)] = 16055,
  [SMALL_STATE(452)] = 16065,
  [SMALL_STATE(453)] = 16075,
  [SMALL_STATE(454)] = 16085,
  [SMALL_STATE(455)] = 16095,
  [SMALL_STATE(456)] = 16103,
  [SMALL_STATE(457)] = 16113,
  [SMALL_STATE(458)] = 16123,
  [SMALL_STATE(459)] = 16131,
  [SMALL_STATE(460)] = 16139,
  [SMALL_STATE(461)] = 16147,
  [SMALL_STATE(462)] = 16155,
  [SMALL_STATE(463)] = 16163,
  [SMALL_STATE(464)] = 16171,
  [SMALL_STATE(465)] = 16179,
  [SMALL_STATE(466)] = 16187,
  [SMALL_STATE(467)] = 16195,
  [SMALL_STATE(468)] = 16205,
  [SMALL_STATE(469)] = 16215,
  [SMALL_STATE(470)] = 16225,
  [SMALL_STATE(471)] = 16235,
  [SMALL_STATE(472)] = 16245,
  [SMALL_STATE(473)] = 16255,
  [SMALL_STATE(474)] = 16263,
  [SMALL_STATE(475)] = 16273,
  [SMALL_STATE(476)] = 16283,
  [SMALL_STATE(477)] = 16291,
  [SMALL_STATE(478)] = 16301,
  [SMALL_STATE(479)] = 16309,
  [SMALL_STATE(480)] = 16319,
  [SMALL_STATE(481)] = 16329,
  [SMALL_STATE(482)] = 16336,
  [SMALL_STATE(483)] = 16343,
  [SMALL_STATE(484)] = 16350,
  [SMALL_STATE(485)] = 16357,
  [SMALL_STATE(486)] = 16364,
  [SMALL_STATE(487)] = 16371,
  [SMALL_STATE(488)] = 16378,
  [SMALL_STATE(489)] = 16385,
  [SMALL_STATE(490)] = 16392,
  [SMALL_STATE(491)] = 16399,
  [SMALL_STATE(492)] = 16406,
  [SMALL_STATE(493)] = 16413,
  [SMALL_STATE(494)] = 16420,
  [SMALL_STATE(495)] = 16427,
  [SMALL_STATE(496)] = 16434,
  [SMALL_STATE(497)] = 16441,
  [SMALL_STATE(498)] = 16448,
  [SMALL_STATE(499)] = 16455,
  [SMALL_STATE(500)] = 16462,
  [SMALL_STATE(501)] = 16469,
  [SMALL_STATE(502)] = 16476,
  [SMALL_STATE(503)] = 16483,
  [SMALL_STATE(504)] = 16490,
  [SMALL_STATE(505)] = 16497,
  [SMALL_STATE(506)] = 16504,
  [SMALL_STATE(507)] = 16511,
  [SMALL_STATE(508)] = 16518,
  [SMALL_STATE(509)] = 16525,
  [SMALL_STATE(510)] = 16532,
  [SMALL_STATE(511)] = 16539,
  [SMALL_STATE(512)] = 16546,
  [SMALL_STATE(513)] = 16553,
  [SMALL_STATE(514)] = 16560,
  [SMALL_STATE(515)] = 16567,
  [SMALL_STATE(516)] = 16574,
  [SMALL_STATE(517)] = 16581,
  [SMALL_STATE(518)] = 16588,
  [SMALL_STATE(519)] = 16595,
  [SMALL_STATE(520)] = 16602,
  [SMALL_STATE(521)] = 16609,
  [SMALL_STATE(522)] = 16616,
  [SMALL_STATE(523)] = 16623,
  [SMALL_STATE(524)] = 16630,
  [SMALL_STATE(525)] = 16637,
  [SMALL_STATE(526)] = 16644,
  [SMALL_STATE(527)] = 16651,
  [SMALL_STATE(528)] = 16658,
  [SMALL_STATE(529)] = 16665,
  [SMALL_STATE(530)] = 16672,
  [SMALL_STATE(531)] = 16679,
  [SMALL_STATE(532)] = 16686,
  [SMALL_STATE(533)] = 16693,
  [SMALL_STATE(534)] = 16700,
  [SMALL_STATE(535)] = 16707,
  [SMALL_STATE(536)] = 16714,
  [SMALL_STATE(537)] = 16721,
  [SMALL_STATE(538)] = 16728,
  [SMALL_STATE(539)] = 16735,
  [SMALL_STATE(540)] = 16742,
  [SMALL_STATE(541)] = 16749,
  [SMALL_STATE(542)] = 16756,
  [SMALL_STATE(543)] = 16763,
  [SMALL_STATE(544)] = 16770,
  [SMALL_STATE(545)] = 16777,
  [SMALL_STATE(546)] = 16784,
  [SMALL_STATE(547)] = 16791,
  [SMALL_STATE(548)] = 16798,
  [SMALL_STATE(549)] = 16805,
  [SMALL_STATE(550)] = 16812,
  [SMALL_STATE(551)] = 16819,
  [SMALL_STATE(552)] = 16826,
  [SMALL_STATE(553)] = 16833,
  [SMALL_STATE(554)] = 16840,
  [SMALL_STATE(555)] = 16847,
  [SMALL_STATE(556)] = 16854,
  [SMALL_STATE(557)] = 16861,
  [SMALL_STATE(558)] = 16868,
  [SMALL_STATE(559)] = 16875,
  [SMALL_STATE(560)] = 16882,
  [SMALL_STATE(561)] = 16889,
  [SMALL_STATE(562)] = 16896,
  [SMALL_STATE(563)] = 16903,
  [SMALL_STATE(564)] = 16910,
  [SMALL_STATE(565)] = 16917,
  [SMALL_STATE(566)] = 16924,
  [SMALL_STATE(567)] = 16931,
  [SMALL_STATE(568)] = 16938,
  [SMALL_STATE(569)] = 16945,
  [SMALL_STATE(570)] = 16952,
  [SMALL_STATE(571)] = 16959,
  [SMALL_STATE(572)] = 16966,
  [SMALL_STATE(573)] = 16973,
  [SMALL_STATE(574)] = 16980,
  [SMALL_STATE(575)] = 16987,
  [SMALL_STATE(576)] = 16994,
  [SMALL_STATE(577)] = 17001,
  [SMALL_STATE(578)] = 17008,
  [SMALL_STATE(579)] = 17015,
  [SMALL_STATE(580)] = 17022,
  [SMALL_STATE(581)] = 17029,
  [SMALL_STATE(582)] = 17036,
  [SMALL_STATE(583)] = 17043,
  [SMALL_STATE(584)] = 17050,
  [SMALL_STATE(585)] = 17057,
  [SMALL_STATE(586)] = 17064,
  [SMALL_STATE(587)] = 17071,
  [SMALL_STATE(588)] = 17078,
  [SMALL_STATE(589)] = 17085,
  [SMALL_STATE(590)] = 17092,
  [SMALL_STATE(591)] = 17099,
  [SMALL_STATE(592)] = 17106,
  [SMALL_STATE(593)] = 17113,
  [SMALL_STATE(594)] = 17120,
  [SMALL_STATE(595)] = 17127,
  [SMALL_STATE(596)] = 17134,
  [SMALL_STATE(597)] = 17141,
  [SMALL_STATE(598)] = 17148,
  [SMALL_STATE(599)] = 17155,
  [SMALL_STATE(600)] = 17162,
  [SMALL_STATE(601)] = 17169,
  [SMALL_STATE(602)] = 17176,
  [SMALL_STATE(603)] = 17183,
  [SMALL_STATE(604)] = 17190,
  [SMALL_STATE(605)] = 17197,
  [SMALL_STATE(606)] = 17204,
  [SMALL_STATE(607)] = 17211,
  [SMALL_STATE(608)] = 17218,
  [SMALL_STATE(609)] = 17225,
  [SMALL_STATE(610)] = 17232,
  [SMALL_STATE(611)] = 17239,
  [SMALL_STATE(612)] = 17246,
  [SMALL_STATE(613)] = 17253,
  [SMALL_STATE(614)] = 17260,
  [SMALL_STATE(615)] = 17267,
  [SMALL_STATE(616)] = 17274,
  [SMALL_STATE(617)] = 17281,
  [SMALL_STATE(618)] = 17288,
  [SMALL_STATE(619)] = 17295,
  [SMALL_STATE(620)] = 17302,
  [SMALL_STATE(621)] = 17309,
  [SMALL_STATE(622)] = 17316,
  [SMALL_STATE(623)] = 17323,
  [SMALL_STATE(624)] = 17330,
  [SMALL_STATE(625)] = 17337,
  [SMALL_STATE(626)] = 17344,
  [SMALL_STATE(627)] = 17351,
  [SMALL_STATE(628)] = 17358,
  [SMALL_STATE(629)] = 17365,
  [SMALL_STATE(630)] = 17372,
  [SMALL_STATE(631)] = 17379,
  [SMALL_STATE(632)] = 17386,
  [SMALL_STATE(633)] = 17393,
  [SMALL_STATE(634)] = 17400,
  [SMALL_STATE(635)] = 17407,
  [SMALL_STATE(636)] = 17414,
  [SMALL_STATE(637)] = 17421,
  [SMALL_STATE(638)] = 17428,
  [SMALL_STATE(639)] = 17435,
  [SMALL_STATE(640)] = 17442,
  [SMALL_STATE(641)] = 17449,
  [SMALL_STATE(642)] = 17456,
  [SMALL_STATE(643)] = 17463,
  [SMALL_STATE(644)] = 17470,
  [SMALL_STATE(645)] = 17477,
  [SMALL_STATE(646)] = 17484,
  [SMALL_STATE(647)] = 17491,
  [SMALL_STATE(648)] = 17498,
  [SMALL_STATE(649)] = 17505,
  [SMALL_STATE(650)] = 17512,
  [SMALL_STATE(651)] = 17519,
  [SMALL_STATE(652)] = 17526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(372),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(418),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2), SHIFT_REPEAT(209),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2), SHIFT_REPEAT(142),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(102),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(61),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2), SHIFT_REPEAT(95),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(443),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(146),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2), SHIFT_REPEAT(131),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2), SHIFT_REPEAT(457),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2), SHIFT_REPEAT(474),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2), SHIFT_REPEAT(419),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2), SHIFT_REPEAT(98),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2), SHIFT_REPEAT(81),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [1169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
