/* This C header file is generated by NIT to compile modules and programs that requires ./syntax/syntax. */
#ifndef syntax_sep
#define syntax_sep
#include "syntax___icode_generation._sep.h"
#include "syntax___extern_type_inheritance._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_syntax___SrcModuleLoader[];
extern const char LOCATE_syntax[];
extern const int SFT_syntax[];
#define ID_syntax___SrcModuleLoader (SFT_syntax[0])
#define COLOR_syntax___SrcModuleLoader (SFT_syntax[1])
#define INIT_TABLE_POS_syntax___SrcModuleLoader (SFT_syntax[2] + 0)
#define CALL_syntax___SrcModuleLoader___init(recv) ((syntax___SrcModuleLoader___init_t)CALL((recv), (SFT_syntax[2] + 1)))
#define CALL_syntax___MMSrcModule___process_supermodules(recv) ((syntax___MMSrcModule___process_supermodules_t)CALL((recv), (SFT_syntax[3] + 0)))
#define CALL_syntax___MMSrcModule___process_syntax(recv) ((syntax___MMSrcModule___process_syntax_t)CALL((recv), (SFT_syntax[3] + 1)))
#define ATTR_syntax___ToolContext____keep_ast(recv) ATTR(recv, (SFT_syntax[4] + 0))
#define CALL_syntax___ToolContext___keep_ast(recv) ((syntax___ToolContext___keep_ast_t)CALL((recv), (SFT_syntax[5] + 0)))
#define CALL_syntax___ToolContext___keep_ast__eq(recv) ((syntax___ToolContext___keep_ast__eq_t)CALL((recv), (SFT_syntax[5] + 1)))
val_t syntax___SrcModuleLoader___file_type(val_t p0);
typedef val_t (*syntax___SrcModuleLoader___file_type_t)(val_t p0);
val_t syntax___SrcModuleLoader___parse_file(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5);
typedef val_t (*syntax___SrcModuleLoader___parse_file_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5);
  typedef void (*CLOS_OC_syntax___SrcModuleLoader___parse_file_1_0)(struct stack_frame_t *);
  void OC_syntax___SrcModuleLoader___parse_file_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_syntax___SrcModuleLoader___parse_file_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
void syntax___SrcModuleLoader___process_metamodel(val_t p0, val_t p1, val_t p2);
typedef void (*syntax___SrcModuleLoader___process_metamodel_t)(val_t p0, val_t p1, val_t p2);
void syntax___SrcModuleLoader___init(val_t p0, int* init_table);
typedef void (*syntax___SrcModuleLoader___init_t)(val_t p0, int* init_table);
val_t NEW_SrcModuleLoader_syntax___SrcModuleLoader___init();
void syntax___MMSrcModule___process_supermodules(val_t p0, val_t p1);
typedef void (*syntax___MMSrcModule___process_supermodules_t)(val_t p0, val_t p1);
void syntax___MMSrcModule___process_syntax(val_t p0, val_t p1);
typedef void (*syntax___MMSrcModule___process_syntax_t)(val_t p0, val_t p1);
val_t NEW_MMSrcModule_syntax___syntax_base___MMSrcModule___init(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
val_t syntax___ToolContext___keep_ast(val_t p0);
typedef val_t (*syntax___ToolContext___keep_ast_t)(val_t p0);
void syntax___ToolContext___keep_ast__eq(val_t p0, val_t p1);
typedef void (*syntax___ToolContext___keep_ast__eq_t)(val_t p0, val_t p1);
val_t NEW_ToolContext_toolcontext___ToolContext___init();
#endif