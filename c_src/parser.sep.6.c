#include "parser.sep.0.h"
/* method parser#ReduceAction175#action for (self: ReduceAction175, Parser) */
void parser__ReduceAction175__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_pexterncodeblocknode9 /* var pexterncodeblocknode9: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode10 /* var listnode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode11 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode12 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8607);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8609);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8611);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8613);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8615);
exit(1);
}
var_pexterncodeblocknode9 = var_nodearraylist9;
/* <var_pexterncodeblocknode9:nullable Object> isa nullable AExternCodeBlock */
cltype30 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype31 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode9 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncodeblocknode9->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncodeblocknode9->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8617);
exit(1);
}
var_listnode10 = var_nodearraylist10;
/* <var_listnode10:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode10 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode10->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode10->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8619);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode11, var_listnode10) /* concat on <self:ReduceAction175>*/;
var_listnode11 = var35;
var_tkwendnode13 = var_nodearraylist12;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode13->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode13->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8622);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var40, var_pexterncodeblocknode9, var_listnode11, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction175> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction175#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction175__action(val* self, val* p0) {
parser__ReduceAction175__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: ReduceAction177, Parser) */
void parser__ReduceAction177__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode12 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8659);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8661);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8663);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8665);
exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8667);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction177>*/;
var_listnode8 = var27;
var_pexterncodeblocknode10 = var_nodearraylist7;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype29 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype30 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_pexterncodeblocknode10->type->table_size) {
var28 = 0;
} else {
var28 = var_pexterncodeblocknode10->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8670);
exit(1);
}
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode11->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8672);
exit(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction177>*/;
var_listnode12 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8675);
exit(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var39, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var40, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var38:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var38);
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction177> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction177#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction177__action(val* self, val* p0) {
parser__ReduceAction177__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction178#action for (self: ReduceAction178, Parser) */
void parser__ReduceAction178__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : AStdClassdef */;
val* var43 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var44 /* : Int */;
long var45 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8713);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8715);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8717);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8719);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8721);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8723);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction178>*/;
var_listnode8 = var31;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype33 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype34 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_pexterncodeblocknode10->type->table_size) {
var32 = 0;
} else {
var32 = var_pexterncodeblocknode10->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8726);
exit(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode11->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode11->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8728);
exit(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction178>*/;
var_listnode12 = var38;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype40 = type_nullable_parser_nodes__TKwend.color;
idtype41 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_tkwendnode14->type->table_size) {
var39 = 0;
} else {
var39 = var_tkwendnode14->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8731);
exit(1);
}
var42 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var42->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var42, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var43, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var42:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var42);
var_pclassdefnode1 = var42;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction178> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction178#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction178__action(val* self, val* p0) {
parser__ReduceAction178__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction179#action for (self: ReduceAction179, Parser) */
void parser__ReduceAction179__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var42 /* : Int */;
long var43 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode12 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8769);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8771);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8773);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8775);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8777);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction179>*/;
var_listnode8 = var28;
var_pexterncodeblocknode10 = var_nodearraylist8;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype30 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype31 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var29 = 1;
} else {
if(cltype30 >= var_pexterncodeblocknode10->type->table_size) {
var29 = 0;
} else {
var29 = var_pexterncodeblocknode10->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8780);
exit(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode11->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode11->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8782);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction179>*/;
var_listnode12 = var35;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode14->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode14->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8785);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var41, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction179> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction179#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction179__action(val* self, val* p0) {
parser__ReduceAction179__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction180#action for (self: ReduceAction180, Parser) */
void parser__ReduceAction180__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var43 /* : Int */;
long var44 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode12 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode13 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8824);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8826);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8828);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8830);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode7->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8832);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction180>*/;
var_listnode8 = var29;
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype31 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype32 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_pexterncodeblocknode10->type->table_size) {
var30 = 0;
} else {
var30 = var_pexterncodeblocknode10->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8835);
exit(1);
}
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode11->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode11->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8837);
exit(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction180>*/;
var_listnode12 = var36;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode14->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode14->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8840);
exit(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var42, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var40:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var40);
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction180> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction180#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction180__action(val* self, val* p0) {
parser__ReduceAction180__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction182#action for (self: ReduceAction182, Parser) */
void parser__ReduceAction182__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode12 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode13 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8879);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8881);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8883);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8885);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8887);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8889);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction182>*/;
var_listnode8 = var32;
var_pexterncodeblocknode10 = var_nodearraylist9;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype34 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype35 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_pexterncodeblocknode10->type->table_size) {
var33 = 0;
} else {
var33 = var_pexterncodeblocknode10->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8892);
exit(1);
}
var_listnode11 = var_nodearraylist10;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode11->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode11->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8894);
exit(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction182>*/;
var_listnode12 = var39;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode14->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode14->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8897);
exit(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var44, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var43:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var43);
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction182> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction182#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction182__action(val* self, val* p0) {
parser__ReduceAction182__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction183#action for (self: ReduceAction183, Parser) */
void parser__ReduceAction183__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var_pexterncodeblocknode10 /* var pexterncodeblocknode10: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode12 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
var_listnode13 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8937);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8939);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8941);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8943);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8945);
exit(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode7->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode7->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8947);
exit(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction183>*/;
var_listnode8 = var33;
var_pexterncodeblocknode10 = var_nodearraylist10;
/* <var_pexterncodeblocknode10:nullable Object> isa nullable AExternCodeBlock */
cltype35 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype36 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode10 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexterncodeblocknode10->type->table_size) {
var34 = 0;
} else {
var34 = var_pexterncodeblocknode10->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8950);
exit(1);
}
var_listnode11 = var_nodearraylist11;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode11->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode11->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8952);
exit(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction183>*/;
var_listnode12 = var40;
var_tkwendnode14 = var_nodearraylist13;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode14->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode14->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8955);
exit(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var45, var_pexterncodeblocknode10, var_listnode12, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var44:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var44);
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction183> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction183#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction183__action(val* self, val* p0) {
parser__ReduceAction183__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction185#action for (self: ReduceAction185, Parser) */
void parser__ReduceAction185__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : AAnnotations */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode16 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8992);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8994);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8996);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 8998);
exit(1);
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[Object]>*/;
CHECK_NEW_array__Array(var24);
var_listnode12 = var24;
var_listnode11 = var_nodearraylist6;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode11->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9001);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction185>*/;
var_listnode12 = var28;
var29 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var29, var30, var31, var_listnode12, var32) /* init_aannotations on <var29:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var29);
var_pannotationsnode8 = var29;
var_pexterncodeblocknode14 = var_nodearraylist7;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype34 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype35 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_pexterncodeblocknode14->type->table_size) {
var33 = 0;
} else {
var33 = var_pexterncodeblocknode14->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9010);
exit(1);
}
var_listnode15 = var_nodearraylist8;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode15->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode15->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9012);
exit(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction185>*/;
var_listnode16 = var39;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode18->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode18->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9015);
exit(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var44, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var43:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var43);
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction185> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction185#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction185__action(val* self, val* p0) {
parser__ReduceAction185__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: ReduceAction186, Parser) */
void parser__ReduceAction186__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : AAnnotations */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var48 /* : Int */;
long var49 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9053);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9055);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9057);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9059);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9061);
exit(1);
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
var_listnode12 = var28;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode11->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9064);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction186>*/;
var_listnode12 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode12, var36) /* init_aannotations on <var33:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var33);
var_pannotationsnode8 = var33;
var_pexterncodeblocknode14 = var_nodearraylist8;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype38 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype39 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_pexterncodeblocknode14->type->table_size) {
var37 = 0;
} else {
var37 = var_pexterncodeblocknode14->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9073);
exit(1);
}
var_listnode15 = var_nodearraylist9;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype41 = type_array__Arraykernel__Object.color;
idtype42 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var_listnode15->type->table_size) {
var40 = 0;
} else {
var40 = var_listnode15->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9075);
exit(1);
}
var43 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction186>*/;
var_listnode16 = var43;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype45 = type_nullable_parser_nodes__TKwend.color;
idtype46 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_tkwendnode18->type->table_size) {
var44 = 0;
} else {
var44 = var_tkwendnode18->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9078);
exit(1);
}
var47 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var47->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var47, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var47:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var47);
var_pclassdefnode1 = var47;
var_node_list = var_pclassdefnode1;
var48 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction186> */
var49 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var48) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var49, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction186#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction186__action(val* self, val* p0) {
parser__ReduceAction186__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: ReduceAction187, Parser) */
void parser__ReduceAction187__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : AAnnotations */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode16 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9116);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9118);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9120);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9122);
exit(1);
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var25->class->vft[COLOR_array__Array__init]))(var25) /* init on <var25:Array[Object]>*/;
CHECK_NEW_array__Array(var25);
var_listnode12 = var25;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode11->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode11->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9125);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction187>*/;
var_listnode12 = var29;
var30 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var30, var31, var32, var_listnode12, var33) /* init_aannotations on <var30:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var30);
var_pannotationsnode8 = var30;
var_pexterncodeblocknode14 = var_nodearraylist8;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype35 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype36 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var34 = 1;
} else {
if(cltype35 >= var_pexterncodeblocknode14->type->table_size) {
var34 = 0;
} else {
var34 = var_pexterncodeblocknode14->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9134);
exit(1);
}
var_listnode15 = var_nodearraylist9;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode15->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode15->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9136);
exit(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction187>*/;
var_listnode16 = var40;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode18->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode18->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9139);
exit(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var45, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var44:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var44);
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction187> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction187#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction187__action(val* self, val* p0) {
parser__ReduceAction187__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction188#action for (self: ReduceAction188, Parser) */
void parser__ReduceAction188__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var31 /* : AAnnotations */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : AStdClassdef */;
val* var46 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var47 /* : Int */;
long var48 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode17 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9178);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9180);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9182);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9184);
exit(1);
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var26->class->vft[COLOR_array__Array__init]))(var26) /* init on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
var_listnode12 = var26;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9187);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction188>*/;
var_listnode12 = var30;
var31 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var31, var32, var33, var_listnode12, var34) /* init_aannotations on <var31:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var31);
var_pannotationsnode8 = var31;
var_pexterncodeblocknode14 = var_nodearraylist9;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype36 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype37 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_pexterncodeblocknode14->type->table_size) {
var35 = 0;
} else {
var35 = var_pexterncodeblocknode14->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9196);
exit(1);
}
var_listnode15 = var_nodearraylist10;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype39 = type_array__Arraykernel__Object.color;
idtype40 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var_listnode15->type->table_size) {
var38 = 0;
} else {
var38 = var_listnode15->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9198);
exit(1);
}
var41 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction188>*/;
var_listnode16 = var41;
var_tkwendnode18 = var_nodearraylist12;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype43 = type_nullable_parser_nodes__TKwend.color;
idtype44 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_tkwendnode18->type->table_size) {
var42 = 0;
} else {
var42 = var_tkwendnode18->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9201);
exit(1);
}
var45 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var46 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var45->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var45, var_pdocnode2, var46, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var45:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var45);
var_pclassdefnode1 = var45;
var_node_list = var_pclassdefnode1;
var47 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction188> */
var48 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var47) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var48, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction188#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction188__action(val* self, val* p0) {
parser__ReduceAction188__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: ReduceAction190, Parser) */
void parser__ReduceAction190__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : AAnnotations */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var49 /* : Int */;
long var50 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode7 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode16 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode17 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9240);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9242);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9244);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9246);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9248);
exit(1);
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
var_listnode12 = var29;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode11->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode11->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9251);
exit(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction190>*/;
var_listnode12 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode12, var37) /* init_aannotations on <var34:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var34);
var_pannotationsnode8 = var34;
var_pexterncodeblocknode14 = var_nodearraylist9;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype39 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype40 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_pexterncodeblocknode14->type->table_size) {
var38 = 0;
} else {
var38 = var_pexterncodeblocknode14->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9260);
exit(1);
}
var_listnode15 = var_nodearraylist10;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode15->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode15->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9262);
exit(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction190>*/;
var_listnode16 = var44;
var_tkwendnode18 = var_nodearraylist12;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode18->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode18->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9265);
exit(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var48:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var48);
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var49 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction190> */
var50 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var49) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var50, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction190#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction190__action(val* self, val* p0) {
parser__ReduceAction190__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: ReduceAction191, Parser) */
void parser__ReduceAction191__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode16 /* var listnode16: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : AAnnotations */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_pexterncodeblocknode14 /* var pexterncodeblocknode14: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var_listnode15 /* var listnode15: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode7 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode16 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
var_listnode17 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9305);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9307);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9309);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9311);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9313);
exit(1);
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
CHECK_NEW_array__Array(var30);
var_listnode12 = var30;
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode11->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode11->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9316);
exit(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction191>*/;
var_listnode12 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode12, var38) /* init_aannotations on <var35:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var35);
var_pannotationsnode8 = var35;
var_pexterncodeblocknode14 = var_nodearraylist10;
/* <var_pexterncodeblocknode14:nullable Object> isa nullable AExternCodeBlock */
cltype40 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype41 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode14 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_pexterncodeblocknode14->type->table_size) {
var39 = 0;
} else {
var39 = var_pexterncodeblocknode14->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9325);
exit(1);
}
var_listnode15 = var_nodearraylist11;
/* <var_listnode15:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode15 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode15->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode15->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9327);
exit(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode16, var_listnode15) /* concat on <self:ReduceAction191>*/;
var_listnode16 = var45;
var_tkwendnode18 = var_nodearraylist13;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode18->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode18->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9330);
exit(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var_pexterncodeblocknode14, var_listnode16, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var49:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var49);
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction191> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction191#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction191__action(val* self, val* p0) {
parser__ReduceAction191__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: ReduceAction193, Parser) */
void parser__ReduceAction193__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : AAnnotations */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : AStdClassdef */;
val* var49 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var50 /* : Int */;
long var51 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode17 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode18 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9368);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9370);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9372);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9374);
exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9376);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction193>*/;
var_listnode8 = var28;
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var29->class->vft[COLOR_array__Array__init]))(var29) /* init on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
var_listnode13 = var29;
var_listnode12 = var_nodearraylist7;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode12->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode12->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9380);
exit(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction193>*/;
var_listnode13 = var33;
var34 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var34, var35, var36, var_listnode13, var37) /* init_aannotations on <var34:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var34);
var_pannotationsnode9 = var34;
var_pexterncodeblocknode15 = var_nodearraylist8;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype39 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype40 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_pexterncodeblocknode15->type->table_size) {
var38 = 0;
} else {
var38 = var_pexterncodeblocknode15->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9389);
exit(1);
}
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype42 = type_array__Arraykernel__Object.color;
idtype43 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var41 = 0;
} else {
if(cltype42 >= var_listnode16->type->table_size) {
var41 = 0;
} else {
var41 = var_listnode16->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9391);
exit(1);
}
var44 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction193>*/;
var_listnode17 = var44;
var_tkwendnode19 = var_nodearraylist11;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype46 = type_nullable_parser_nodes__TKwend.color;
idtype47 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var45 = 1;
} else {
if(cltype46 >= var_tkwendnode19->type->table_size) {
var45 = 0;
} else {
var45 = var_tkwendnode19->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9394);
exit(1);
}
var48 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var49 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var48->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var48, var_pdocnode2, var49, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var48:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var48);
var_pclassdefnode1 = var48;
var_node_list = var_pclassdefnode1;
var50 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction193> */
var51 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var50) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var51, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction193#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction193__action(val* self, val* p0) {
parser__ReduceAction193__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: ReduceAction194, Parser) */
void parser__ReduceAction194__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var38 /* : AAnnotations */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
val* var48 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
val* var52 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var53 /* : Int */;
long var54 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9433);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9435);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9437);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9439);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9441);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9443);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction194>*/;
var_listnode8 = var32;
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var33->class->vft[COLOR_array__Array__init]))(var33) /* init on <var33:Array[Object]>*/;
CHECK_NEW_array__Array(var33);
var_listnode13 = var33;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode12->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode12->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9447);
exit(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction194>*/;
var_listnode13 = var37;
var38 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var39 = NULL;
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var38, var39, var40, var_listnode13, var41) /* init_aannotations on <var38:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var38);
var_pannotationsnode9 = var38;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype43 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype44 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var42 = 1;
} else {
if(cltype43 >= var_pexterncodeblocknode15->type->table_size) {
var42 = 0;
} else {
var42 = var_pexterncodeblocknode15->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9456);
exit(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype46 = type_array__Arraykernel__Object.color;
idtype47 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var45 = 0;
} else {
if(cltype46 >= var_listnode16->type->table_size) {
var45 = 0;
} else {
var45 = var_listnode16->type->type_table[cltype46] == idtype47;
}
}
if (!var45) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9458);
exit(1);
}
var48 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction194>*/;
var_listnode17 = var48;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype50 = type_nullable_parser_nodes__TKwend.color;
idtype51 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var49 = 1;
} else {
if(cltype50 >= var_tkwendnode19->type->table_size) {
var49 = 0;
} else {
var49 = var_tkwendnode19->type->type_table[cltype50] == idtype51;
}
}
if (!var49) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9461);
exit(1);
}
var52 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var52->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var52, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var52:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var52);
var_pclassdefnode1 = var52;
var_node_list = var_pclassdefnode1;
var53 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction194> */
var54 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var53) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var54, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction194#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction194__action(val* self, val* p0) {
parser__ReduceAction194__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: ReduceAction195, Parser) */
void parser__ReduceAction195__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : AAnnotations */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : AStdClassdef */;
val* var50 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var51 /* : Int */;
long var52 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode18 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9500);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9502);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9504);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9506);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode7->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode7->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9508);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction195>*/;
var_listnode8 = var29;
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var30->class->vft[COLOR_array__Array__init]))(var30) /* init on <var30:Array[Object]>*/;
CHECK_NEW_array__Array(var30);
var_listnode13 = var30;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode12->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9512);
exit(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction195>*/;
var_listnode13 = var34;
var35 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var35, var36, var37, var_listnode13, var38) /* init_aannotations on <var35:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var35);
var_pannotationsnode9 = var35;
var_pexterncodeblocknode15 = var_nodearraylist9;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype40 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype41 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var39 = 1;
} else {
if(cltype40 >= var_pexterncodeblocknode15->type->table_size) {
var39 = 0;
} else {
var39 = var_pexterncodeblocknode15->type->type_table[cltype40] == idtype41;
}
}
if (!var39) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9521);
exit(1);
}
var_listnode16 = var_nodearraylist10;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype43 = type_array__Arraykernel__Object.color;
idtype44 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var42 = 0;
} else {
if(cltype43 >= var_listnode16->type->table_size) {
var42 = 0;
} else {
var42 = var_listnode16->type->type_table[cltype43] == idtype44;
}
}
if (!var42) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9523);
exit(1);
}
var45 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction195>*/;
var_listnode17 = var45;
var_tkwendnode19 = var_nodearraylist12;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype47 = type_nullable_parser_nodes__TKwend.color;
idtype48 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var46 = 1;
} else {
if(cltype47 >= var_tkwendnode19->type->table_size) {
var46 = 0;
} else {
var46 = var_tkwendnode19->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9526);
exit(1);
}
var49 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var50 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var49->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var49, var_pdocnode2, var50, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var49:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var49);
var_pclassdefnode1 = var49;
var_node_list = var_pclassdefnode1;
var51 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction195> */
var52 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var51) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var52, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction195#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction195__action(val* self, val* p0) {
parser__ReduceAction195__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction196#action for (self: ReduceAction196, Parser) */
void parser__ReduceAction196__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var31 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var36 /* : AAnnotations */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : AStdClassdef */;
val* var51 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var52 /* : Int */;
long var53 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode17 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
var_listnode18 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9566);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9568);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9570);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9572);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9574);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction196>*/;
var_listnode8 = var30;
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var31->class->vft[COLOR_array__Array__init]))(var31) /* init on <var31:Array[Object]>*/;
CHECK_NEW_array__Array(var31);
var_listnode13 = var31;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9578);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction196>*/;
var_listnode13 = var35;
var36 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var37 = NULL;
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var36, var37, var38, var_listnode13, var39) /* init_aannotations on <var36:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var36);
var_pannotationsnode9 = var36;
var_pexterncodeblocknode15 = var_nodearraylist10;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype41 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype42 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_pexterncodeblocknode15->type->table_size) {
var40 = 0;
} else {
var40 = var_pexterncodeblocknode15->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9587);
exit(1);
}
var_listnode16 = var_nodearraylist11;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype44 = type_array__Arraykernel__Object.color;
idtype45 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var_listnode16->type->table_size) {
var43 = 0;
} else {
var43 = var_listnode16->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9589);
exit(1);
}
var46 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction196>*/;
var_listnode17 = var46;
var_tkwendnode19 = var_nodearraylist13;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype48 = type_nullable_parser_nodes__TKwend.color;
idtype49 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var47 = 1;
} else {
if(cltype48 >= var_tkwendnode19->type->table_size) {
var47 = 0;
} else {
var47 = var_tkwendnode19->type->type_table[cltype48] == idtype49;
}
}
if (!var47) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9592);
exit(1);
}
var50 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var51 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var50->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var50, var_pdocnode2, var51, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var50:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var50);
var_pclassdefnode1 = var50;
var_node_list = var_pclassdefnode1;
var52 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction196> */
var53 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var52) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var53, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction196#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction196__action(val* self, val* p0) {
parser__ReduceAction196__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction198#action for (self: ReduceAction198, Parser) */
void parser__ReduceAction198__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var14 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : Array[Object] */;
val* var34 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : Array[Object] */;
val* var39 /* : AAnnotations */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var54 /* : Int */;
long var55 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode8 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode17 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
var_listnode18 = var16;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var17 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var17 = 0;
} else {
var17 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9632);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype19 = type_nullable_parser_nodes__TKwredef.color;
idtype20 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_tkwredefnode3->type->table_size) {
var18 = 0;
} else {
var18 = var_tkwredefnode3->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9634);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype22 = type_nullable_parser_nodes__AVisibility.color;
idtype23 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pvisibilitynode4->type->table_size) {
var21 = 0;
} else {
var21 = var_pvisibilitynode4->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9636);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype25 = type_nullable_parser_nodes__AClasskind.color;
idtype26 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_pclasskindnode5->type->table_size) {
var24 = 0;
} else {
var24 = var_pclasskindnode5->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9638);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype28 = type_nullable_parser_nodes__TClassid.color;
idtype29 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tclassidnode6->type->table_size) {
var27 = 0;
} else {
var27 = var_tclassidnode6->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9640);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype31 = type_array__Arraykernel__Object.color;
idtype32 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var30 = 0;
} else {
if(cltype31 >= var_listnode7->type->table_size) {
var30 = 0;
} else {
var30 = var_listnode7->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9642);
exit(1);
}
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction198>*/;
var_listnode8 = var33;
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var34->class->vft[COLOR_array__Array__init]))(var34) /* init on <var34:Array[Object]>*/;
CHECK_NEW_array__Array(var34);
var_listnode13 = var34;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype36 = type_array__Arraykernel__Object.color;
idtype37 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var35 = 0;
} else {
if(cltype36 >= var_listnode12->type->table_size) {
var35 = 0;
} else {
var35 = var_listnode12->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9646);
exit(1);
}
var38 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction198>*/;
var_listnode13 = var38;
var39 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var40 = NULL;
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var39, var40, var41, var_listnode13, var42) /* init_aannotations on <var39:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var39);
var_pannotationsnode9 = var39;
var_pexterncodeblocknode15 = var_nodearraylist10;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype44 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype45 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var43 = 1;
} else {
if(cltype44 >= var_pexterncodeblocknode15->type->table_size) {
var43 = 0;
} else {
var43 = var_pexterncodeblocknode15->type->type_table[cltype44] == idtype45;
}
}
if (!var43) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9655);
exit(1);
}
var_listnode16 = var_nodearraylist11;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype47 = type_array__Arraykernel__Object.color;
idtype48 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var46 = 0;
} else {
if(cltype47 >= var_listnode16->type->table_size) {
var46 = 0;
} else {
var46 = var_listnode16->type->type_table[cltype47] == idtype48;
}
}
if (!var46) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9657);
exit(1);
}
var49 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction198>*/;
var_listnode17 = var49;
var_tkwendnode19 = var_nodearraylist13;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype51 = type_nullable_parser_nodes__TKwend.color;
idtype52 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var50 = 1;
} else {
if(cltype51 >= var_tkwendnode19->type->table_size) {
var50 = 0;
} else {
var50 = var_tkwendnode19->type->type_table[cltype51] == idtype52;
}
}
if (!var50) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9660);
exit(1);
}
var53 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var53->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var53, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var53:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var53);
var_pclassdefnode1 = var53;
var_node_list = var_pclassdefnode1;
var54 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction198> */
var55 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var54) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var55, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction198#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction198__action(val* self, val* p0) {
parser__ReduceAction198__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction199#action for (self: ReduceAction199, Parser) */
void parser__ReduceAction199__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist14 /* var nodearraylist14: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist13 /* var nodearraylist13: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var13 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var14 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var15 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var16 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var17 /* : Array[Object] */;
val* var_listnode18 /* var listnode18: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var35 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var40 /* : AAnnotations */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var43 /* : null */;
val* var_pannotationsnode9 /* var pannotationsnode9: nullable AAnnotations */;
val* var_pexterncodeblocknode15 /* var pexterncodeblocknode15: nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : Array[Object] */;
val* var_tkwendnode19 /* var tkwendnode19: nullable Object */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : AStdClassdef */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var55 /* : Int */;
long var56 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist14 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist13 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var12;
var13 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var13;
var14 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode8 = var15;
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var16->class->vft[COLOR_array__Array__init]))(var16) /* init on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
var_listnode17 = var16;
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var17->class->vft[COLOR_array__Array__init]))(var17) /* init on <var17:Array[Object]>*/;
CHECK_NEW_array__Array(var17);
var_listnode18 = var17;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var18 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var18 = 0;
} else {
var18 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9701);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype20 = type_nullable_parser_nodes__TKwredef.color;
idtype21 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tkwredefnode3->type->table_size) {
var19 = 0;
} else {
var19 = var_tkwredefnode3->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9703);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype23 = type_nullable_parser_nodes__AVisibility.color;
idtype24 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pvisibilitynode4->type->table_size) {
var22 = 0;
} else {
var22 = var_pvisibilitynode4->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9705);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype26 = type_nullable_parser_nodes__AClasskind.color;
idtype27 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_pclasskindnode5->type->table_size) {
var25 = 0;
} else {
var25 = var_pclasskindnode5->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9707);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype29 = type_nullable_parser_nodes__TClassid.color;
idtype30 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tclassidnode6->type->table_size) {
var28 = 0;
} else {
var28 = var_tclassidnode6->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9709);
exit(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode7->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode7->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9711);
exit(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction199>*/;
var_listnode8 = var34;
var35 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var35->class->vft[COLOR_array__Array__init]))(var35) /* init on <var35:Array[Object]>*/;
CHECK_NEW_array__Array(var35);
var_listnode13 = var35;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode12->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode12->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9715);
exit(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction199>*/;
var_listnode13 = var39;
var40 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var41 = NULL;
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var40, var41, var42, var_listnode13, var43) /* init_aannotations on <var40:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var40);
var_pannotationsnode9 = var40;
var_pexterncodeblocknode15 = var_nodearraylist11;
/* <var_pexterncodeblocknode15:nullable Object> isa nullable AExternCodeBlock */
cltype45 = type_nullable_parser_nodes__AExternCodeBlock.color;
idtype46 = type_nullable_parser_nodes__AExternCodeBlock.id;
if(var_pexterncodeblocknode15 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var_pexterncodeblocknode15->type->table_size) {
var44 = 0;
} else {
var44 = var_pexterncodeblocknode15->type->type_table[cltype45] == idtype46;
}
}
if (!var44) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9724);
exit(1);
}
var_listnode16 = var_nodearraylist12;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype48 = type_array__Arraykernel__Object.color;
idtype49 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var47 = 0;
} else {
if(cltype48 >= var_listnode16->type->table_size) {
var47 = 0;
} else {
var47 = var_listnode16->type->type_table[cltype48] == idtype49;
}
}
if (!var47) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9726);
exit(1);
}
var50 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction199>*/;
var_listnode17 = var50;
var_tkwendnode19 = var_nodearraylist14;
/* <var_tkwendnode19:nullable Object> isa nullable TKwend */
cltype52 = type_nullable_parser_nodes__TKwend.color;
idtype53 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode19 == NULL) {
var51 = 1;
} else {
if(cltype52 >= var_tkwendnode19->type->table_size) {
var51 = 0;
} else {
var51 = var_tkwendnode19->type->type_table[cltype52] == idtype53;
}
}
if (!var51) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9729);
exit(1);
}
var54 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var54->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var54, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var_pannotationsnode9, var_pexterncodeblocknode15, var_listnode17, var_listnode18, var_tkwendnode19) /* init_astdclassdef on <var54:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var54);
var_pclassdefnode1 = var54;
var_node_list = var_pclassdefnode1;
var55 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction199> */
var56 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var55) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var56, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction199#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction199__action(val* self, val* p0) {
parser__ReduceAction199__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction201#action for (self: ReduceAction201, Parser) */
void parser__ReduceAction201__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var9 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var10 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : AStdClassdef */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var33 /* : Int */;
long var34 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var8;
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[Object]>*/;
CHECK_NEW_array__Array(var9);
var_listnode7 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode10 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode12 = var11;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var12 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var12 = 0;
} else {
var12 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9764);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype14 = type_nullable_parser_nodes__AVisibility.color;
idtype15 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var13 = 1;
} else {
if(cltype14 >= var_pvisibilitynode4->type->table_size) {
var13 = 0;
} else {
var13 = var_pvisibilitynode4->type->type_table[cltype14] == idtype15;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9766);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype17 = type_nullable_parser_nodes__AClasskind.color;
idtype18 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pclasskindnode5->type->table_size) {
var16 = 0;
} else {
var16 = var_pclasskindnode5->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9768);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype20 = type_nullable_parser_nodes__TClassid.color;
idtype21 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_tclassidnode6->type->table_size) {
var19 = 0;
} else {
var19 = var_tclassidnode6->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9770);
exit(1);
}
var_listnode11 = var_nodearraylist6;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype23 = type_array__Arraykernel__Object.color;
idtype24 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var22 = 0;
} else {
if(cltype23 >= var_listnode11->type->table_size) {
var22 = 0;
} else {
var22 = var_listnode11->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9772);
exit(1);
}
var25 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction201>*/;
var_listnode12 = var25;
var_tkwendnode13 = var_nodearraylist8;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype27 = type_nullable_parser_nodes__TKwend.color;
idtype28 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tkwendnode13->type->table_size) {
var26 = 0;
} else {
var26 = var_tkwendnode13->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9775);
exit(1);
}
var29 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var29, var_pdocnode2, var30, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var31, var32, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var29:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var29);
var_pclassdefnode1 = var29;
var_node_list = var_pclassdefnode1;
var33 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction201> */
var34 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var33) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var34, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction201#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction201__action(val* self, val* p0) {
parser__ReduceAction201__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: ReduceAction202, Parser) */
void parser__ReduceAction202__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
val* var33 /* : AStdClassdef */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var36 /* : Int */;
long var37 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9811);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype15 = type_nullable_parser_nodes__TKwredef.color;
idtype16 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_tkwredefnode3->type->table_size) {
var14 = 0;
} else {
var14 = var_tkwredefnode3->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9813);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype18 = type_nullable_parser_nodes__AVisibility.color;
idtype19 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pvisibilitynode4->type->table_size) {
var17 = 0;
} else {
var17 = var_pvisibilitynode4->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9815);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype21 = type_nullable_parser_nodes__AClasskind.color;
idtype22 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pclasskindnode5->type->table_size) {
var20 = 0;
} else {
var20 = var_pclasskindnode5->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9817);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype24 = type_nullable_parser_nodes__TClassid.color;
idtype25 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_tclassidnode6->type->table_size) {
var23 = 0;
} else {
var23 = var_tclassidnode6->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9819);
exit(1);
}
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode11->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode11->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9821);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction202>*/;
var_listnode12 = var29;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype31 = type_nullable_parser_nodes__TKwend.color;
idtype32 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var30 = 1;
} else {
if(cltype31 >= var_tkwendnode13->type->table_size) {
var30 = 0;
} else {
var30 = var_tkwendnode13->type->type_table[cltype31] == idtype32;
}
}
if (!var30) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9824);
exit(1);
}
var33 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var33, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var34, var35, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var33:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var33);
var_pclassdefnode1 = var33;
var_node_list = var_pclassdefnode1;
var36 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction202> */
var37 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var36) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var37, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction202#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction202__action(val* self, val* p0) {
parser__ReduceAction202__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: ReduceAction203, Parser) */
void parser__ReduceAction203__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : AStdClassdef */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var34 /* : Int */;
long var35 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode10 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode12 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9860);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9862);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9864);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9866);
exit(1);
}
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode11->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode11->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9868);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction203>*/;
var_listnode12 = var26;
var_tkwendnode13 = var_nodearraylist9;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype28 = type_nullable_parser_nodes__TKwend.color;
idtype29 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var27 = 1;
} else {
if(cltype28 >= var_tkwendnode13->type->table_size) {
var27 = 0;
} else {
var27 = var_tkwendnode13->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9871);
exit(1);
}
var30 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var30, var_pdocnode2, var31, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var32, var33, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var30:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var30);
var_pclassdefnode1 = var30;
var_node_list = var_pclassdefnode1;
var34 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction203> */
var35 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var34) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var35, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction203#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction203__action(val* self, val* p0) {
parser__ReduceAction203__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: ReduceAction204, Parser) */
void parser__ReduceAction204__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : AStdClassdef */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var35 /* : Int */;
long var36 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode10 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9908);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9910);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9912);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9914);
exit(1);
}
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9916);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction204>*/;
var_listnode12 = var27;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype29 = type_nullable_parser_nodes__TKwend.color;
idtype30 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var28 = 1;
} else {
if(cltype29 >= var_tkwendnode13->type->table_size) {
var28 = 0;
} else {
var28 = var_tkwendnode13->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9919);
exit(1);
}
var31 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var32 = NULL;
var33 = NULL;
var34 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var31->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var31, var_pdocnode2, var32, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var33, var34, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var31:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var31);
var_pclassdefnode1 = var31;
var_node_list = var_pclassdefnode1;
var35 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction204> */
var36 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var35) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var36, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction204#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction204__action(val* self, val* p0) {
parser__ReduceAction204__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: ReduceAction206, Parser) */
void parser__ReduceAction206__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var37 /* : Int */;
long var38 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode10 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode12 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9956);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9958);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9960);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9962);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9964);
exit(1);
}
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode11->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode11->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9966);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction206>*/;
var_listnode12 = var30;
var_tkwendnode13 = var_nodearraylist10;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode13->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode13->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 9969);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var35, var36, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var37 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction206> */
var38 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var37) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var38, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction206#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction206__action(val* self, val* p0) {
parser__ReduceAction206__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: ReduceAction207, Parser) */
void parser__ReduceAction207__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode10 /* var listnode10: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode13 /* var tkwendnode13: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var38 /* : Int */;
long var39 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode10 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode12 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10007);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10009);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10011);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10013);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10015);
exit(1);
}
var_listnode11 = var_nodearraylist9;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10017);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction207>*/;
var_listnode12 = var31;
var_tkwendnode13 = var_nodearraylist11;
/* <var_tkwendnode13:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode13 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode13->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode13->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10020);
exit(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var36, var37, var_listnode10, var_listnode12, var_tkwendnode13) /* init_astdclassdef on <var35:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var35);
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction207> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction207#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction207__action(val* self, val* p0) {
parser__ReduceAction207__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: ReduceAction209, Parser) */
void parser__ReduceAction209__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : AStdClassdef */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var38 /* : Int */;
long var39 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode8 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode11 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode13 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10056);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10058);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10060);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10062);
exit(1);
}
var_listnode7 = var_nodearraylist6;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype24 = type_array__Arraykernel__Object.color;
idtype25 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var23 = 0;
} else {
if(cltype24 >= var_listnode7->type->table_size) {
var23 = 0;
} else {
var23 = var_listnode7->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10064);
exit(1);
}
var26 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction209>*/;
var_listnode8 = var26;
var_listnode12 = var_nodearraylist7;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode12->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode12->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10067);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction209>*/;
var_listnode13 = var30;
var_tkwendnode14 = var_nodearraylist9;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype32 = type_nullable_parser_nodes__TKwend.color;
idtype33 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var31 = 1;
} else {
if(cltype32 >= var_tkwendnode14->type->table_size) {
var31 = 0;
} else {
var31 = var_tkwendnode14->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10070);
exit(1);
}
var34 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var35 = NULL;
var36 = NULL;
var37 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var34->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var34, var_pdocnode2, var35, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var36, var37, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var34:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var34);
var_pclassdefnode1 = var34;
var_node_list = var_pclassdefnode1;
var38 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction209> */
var39 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var38) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var39, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction209#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction209__action(val* self, val* p0) {
parser__ReduceAction209__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: ReduceAction210, Parser) */
void parser__ReduceAction210__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
val* var30 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
val* var38 /* : AStdClassdef */;
val* var39 /* : null */;
val* var40 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var41 /* : Int */;
long var42 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10107);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10109);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10111);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10113);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10115);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype28 = type_array__Arraykernel__Object.color;
idtype29 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var27 = 0;
} else {
if(cltype28 >= var_listnode7->type->table_size) {
var27 = 0;
} else {
var27 = var_listnode7->type->type_table[cltype28] == idtype29;
}
}
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10117);
exit(1);
}
var30 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction210>*/;
var_listnode8 = var30;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype32 = type_array__Arraykernel__Object.color;
idtype33 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var31 = 0;
} else {
if(cltype32 >= var_listnode12->type->table_size) {
var31 = 0;
} else {
var31 = var_listnode12->type->type_table[cltype32] == idtype33;
}
}
if (!var31) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10120);
exit(1);
}
var34 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction210>*/;
var_listnode13 = var34;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype36 = type_nullable_parser_nodes__TKwend.color;
idtype37 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var35 = 1;
} else {
if(cltype36 >= var_tkwendnode14->type->table_size) {
var35 = 0;
} else {
var35 = var_tkwendnode14->type->type_table[cltype36] == idtype37;
}
}
if (!var35) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10123);
exit(1);
}
var38 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var39 = NULL;
var40 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var38->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var38, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var39, var40, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var38:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var38);
var_pclassdefnode1 = var38;
var_node_list = var_pclassdefnode1;
var41 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction210> */
var42 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var41) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var42, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction210#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction210__action(val* self, val* p0) {
parser__ReduceAction210__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: ReduceAction211, Parser) */
void parser__ReduceAction211__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : AStdClassdef */;
val* var36 /* : null */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var39 /* : Int */;
long var40 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode8 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode11 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode13 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10160);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10162);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10164);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10166);
exit(1);
}
var_listnode7 = var_nodearraylist7;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode7->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode7->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10168);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction211>*/;
var_listnode8 = var27;
var_listnode12 = var_nodearraylist8;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode12->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode12->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10171);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction211>*/;
var_listnode13 = var31;
var_tkwendnode14 = var_nodearraylist10;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype33 = type_nullable_parser_nodes__TKwend.color;
idtype34 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var32 = 1;
} else {
if(cltype33 >= var_tkwendnode14->type->table_size) {
var32 = 0;
} else {
var32 = var_tkwendnode14->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10174);
exit(1);
}
var35 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var36 = NULL;
var37 = NULL;
var38 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var35->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var35, var_pdocnode2, var36, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var37, var38, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var35:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var35);
var_pclassdefnode1 = var35;
var_node_list = var_pclassdefnode1;
var39 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction211> */
var40 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var39) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var40, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction211#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction211__action(val* self, val* p0) {
parser__ReduceAction211__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: ReduceAction212, Parser) */
void parser__ReduceAction212__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : AStdClassdef */;
val* var37 /* : null */;
val* var38 /* : null */;
val* var39 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var40 /* : Int */;
long var41 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10212);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10214);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10216);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10218);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode7->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode7->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10220);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction212>*/;
var_listnode8 = var28;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode12->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode12->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10223);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction212>*/;
var_listnode13 = var32;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype34 = type_nullable_parser_nodes__TKwend.color;
idtype35 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var33 = 1;
} else {
if(cltype34 >= var_tkwendnode14->type->table_size) {
var33 = 0;
} else {
var33 = var_tkwendnode14->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10226);
exit(1);
}
var36 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var37 = NULL;
var38 = NULL;
var39 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var36->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var36, var_pdocnode2, var37, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var38, var39, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var36:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var36);
var_pclassdefnode1 = var36;
var_node_list = var_pclassdefnode1;
var40 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction212> */
var41 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var40) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var41, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction212#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction212__action(val* self, val* p0) {
parser__ReduceAction212__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: ReduceAction214, Parser) */
void parser__ReduceAction214__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var42 /* : Int */;
long var43 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode8 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode11 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode13 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10264);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10266);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10268);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10270);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10272);
exit(1);
}
var_listnode7 = var_nodearraylist8;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode7->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode7->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10274);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction214>*/;
var_listnode8 = var31;
var_listnode12 = var_nodearraylist9;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode12->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode12->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10277);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction214>*/;
var_listnode13 = var35;
var_tkwendnode14 = var_nodearraylist11;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode14->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode14->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10280);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var40, var41, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction214> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction214#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction214__action(val* self, val* p0) {
parser__ReduceAction214__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction215#action for (self: ReduceAction215, Parser) */
void parser__ReduceAction215__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist12 /* var nodearraylist12: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var12 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var13 /* : Array[Object] */;
val* var_listnode8 /* var listnode8: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode11 /* var listnode11: Array[Object] */;
val* var15 /* : Array[Object] */;
val* var_listnode13 /* var listnode13: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var_listnode7 /* var listnode7: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode14 /* var tkwendnode14: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var43 /* : Int */;
long var44 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist12 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var11;
var12 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode8 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode11 = var14;
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
var_listnode13 = var15;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var16 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var16 = 0;
} else {
var16 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10319);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype18 = type_nullable_parser_nodes__TKwredef.color;
idtype19 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_tkwredefnode3->type->table_size) {
var17 = 0;
} else {
var17 = var_tkwredefnode3->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10321);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype21 = type_nullable_parser_nodes__AVisibility.color;
idtype22 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_pvisibilitynode4->type->table_size) {
var20 = 0;
} else {
var20 = var_pvisibilitynode4->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10323);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype24 = type_nullable_parser_nodes__AClasskind.color;
idtype25 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var23 = 1;
} else {
if(cltype24 >= var_pclasskindnode5->type->table_size) {
var23 = 0;
} else {
var23 = var_pclasskindnode5->type->type_table[cltype24] == idtype25;
}
}
if (!var23) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10325);
exit(1);
}
var_tclassidnode6 = var_nodearraylist8;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype27 = type_nullable_parser_nodes__TClassid.color;
idtype28 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var26 = 1;
} else {
if(cltype27 >= var_tclassidnode6->type->table_size) {
var26 = 0;
} else {
var26 = var_tclassidnode6->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10327);
exit(1);
}
var_listnode7 = var_nodearraylist9;
/* <var_listnode7:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode7 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode7->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode7->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10329);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode8, var_listnode7) /* concat on <self:ReduceAction215>*/;
var_listnode8 = var32;
var_listnode12 = var_nodearraylist10;
/* <var_listnode12:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode12 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode12->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode12->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10332);
exit(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode13, var_listnode12) /* concat on <self:ReduceAction215>*/;
var_listnode13 = var36;
var_tkwendnode14 = var_nodearraylist12;
/* <var_tkwendnode14:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode14 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode14->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode14->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10335);
exit(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode8, var41, var42, var_listnode11, var_listnode13, var_tkwendnode14) /* init_astdclassdef on <var40:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var40);
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction215> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction215#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction215__action(val* self, val* p0) {
parser__ReduceAction215__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction217#action for (self: ReduceAction217, Parser) */
void parser__ReduceAction217__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var10 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var11 /* : Array[Object] */;
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var28 /* : AAnnotations */;
val* var29 /* : null */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
val* var35 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : AStdClassdef */;
val* var40 /* : null */;
val* var41 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var42 /* : Int */;
long var43 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var9;
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[Object]>*/;
CHECK_NEW_array__Array(var10);
var_listnode7 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode15 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode17 = var12;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var13 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var13 = 0;
} else {
var13 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var13) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10371);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype15 = type_nullable_parser_nodes__AVisibility.color;
idtype16 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var14 = 1;
} else {
if(cltype15 >= var_pvisibilitynode4->type->table_size) {
var14 = 0;
} else {
var14 = var_pvisibilitynode4->type->type_table[cltype15] == idtype16;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10373);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype18 = type_nullable_parser_nodes__AClasskind.color;
idtype19 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var17 = 1;
} else {
if(cltype18 >= var_pclasskindnode5->type->table_size) {
var17 = 0;
} else {
var17 = var_pclasskindnode5->type->type_table[cltype18] == idtype19;
}
}
if (!var17) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10375);
exit(1);
}
var_tclassidnode6 = var_nodearraylist5;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype21 = type_nullable_parser_nodes__TClassid.color;
idtype22 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var_tclassidnode6->type->table_size) {
var20 = 0;
} else {
var20 = var_tclassidnode6->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10377);
exit(1);
}
var23 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var23->class->vft[COLOR_array__Array__init]))(var23) /* init on <var23:Array[Object]>*/;
CHECK_NEW_array__Array(var23);
var_listnode12 = var23;
var_listnode11 = var_nodearraylist6;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype25 = type_array__Arraykernel__Object.color;
idtype26 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var24 = 0;
} else {
if(cltype25 >= var_listnode11->type->table_size) {
var24 = 0;
} else {
var24 = var_listnode11->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10380);
exit(1);
}
var27 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction217>*/;
var_listnode12 = var27;
var28 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var29 = NULL;
var30 = NULL;
var31 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var28->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var28, var29, var30, var_listnode12, var31) /* init_aannotations on <var28:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var28);
var_pannotationsnode8 = var28;
var_listnode16 = var_nodearraylist7;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype33 = type_array__Arraykernel__Object.color;
idtype34 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var32 = 0;
} else {
if(cltype33 >= var_listnode16->type->table_size) {
var32 = 0;
} else {
var32 = var_listnode16->type->type_table[cltype33] == idtype34;
}
}
if (!var32) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10389);
exit(1);
}
var35 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction217>*/;
var_listnode17 = var35;
var_tkwendnode18 = var_nodearraylist9;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype37 = type_nullable_parser_nodes__TKwend.color;
idtype38 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var36 = 1;
} else {
if(cltype37 >= var_tkwendnode18->type->table_size) {
var36 = 0;
} else {
var36 = var_tkwendnode18->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10392);
exit(1);
}
var39 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var40 = NULL;
var41 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var39->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var39, var_pdocnode2, var40, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var41, var_listnode15, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var39:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var39);
var_pclassdefnode1 = var39;
var_node_list = var_pclassdefnode1;
var42 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction217> */
var43 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var42) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var43, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction217#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction217__action(val* self, val* p0) {
parser__ReduceAction217__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction218#action for (self: ReduceAction218, Parser) */
void parser__ReduceAction218__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : Array[Object] */;
val* var32 /* : AAnnotations */;
val* var33 /* : null */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
val* var43 /* : AStdClassdef */;
val* var44 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var45 /* : Int */;
long var46 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode15 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10429);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype16 = type_nullable_parser_nodes__TKwredef.color;
idtype17 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_tkwredefnode3->type->table_size) {
var15 = 0;
} else {
var15 = var_tkwredefnode3->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10431);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype19 = type_nullable_parser_nodes__AVisibility.color;
idtype20 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pvisibilitynode4->type->table_size) {
var18 = 0;
} else {
var18 = var_pvisibilitynode4->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10433);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype22 = type_nullable_parser_nodes__AClasskind.color;
idtype23 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_pclasskindnode5->type->table_size) {
var21 = 0;
} else {
var21 = var_pclasskindnode5->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10435);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype25 = type_nullable_parser_nodes__TClassid.color;
idtype26 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var24 = 1;
} else {
if(cltype25 >= var_tclassidnode6->type->table_size) {
var24 = 0;
} else {
var24 = var_tclassidnode6->type->type_table[cltype25] == idtype26;
}
}
if (!var24) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10437);
exit(1);
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var27->class->vft[COLOR_array__Array__init]))(var27) /* init on <var27:Array[Object]>*/;
CHECK_NEW_array__Array(var27);
var_listnode12 = var27;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype29 = type_array__Arraykernel__Object.color;
idtype30 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var28 = 0;
} else {
if(cltype29 >= var_listnode11->type->table_size) {
var28 = 0;
} else {
var28 = var_listnode11->type->type_table[cltype29] == idtype30;
}
}
if (!var28) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10440);
exit(1);
}
var31 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction218>*/;
var_listnode12 = var31;
var32 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var33 = NULL;
var34 = NULL;
var35 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var32->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var32, var33, var34, var_listnode12, var35) /* init_aannotations on <var32:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var32);
var_pannotationsnode8 = var32;
var_listnode16 = var_nodearraylist8;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype37 = type_array__Arraykernel__Object.color;
idtype38 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var36 = 0;
} else {
if(cltype37 >= var_listnode16->type->table_size) {
var36 = 0;
} else {
var36 = var_listnode16->type->type_table[cltype37] == idtype38;
}
}
if (!var36) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10449);
exit(1);
}
var39 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction218>*/;
var_listnode17 = var39;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype41 = type_nullable_parser_nodes__TKwend.color;
idtype42 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var40 = 1;
} else {
if(cltype41 >= var_tkwendnode18->type->table_size) {
var40 = 0;
} else {
var40 = var_tkwendnode18->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10452);
exit(1);
}
var43 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var44 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var43->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var43, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var44, var_listnode15, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var43:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var43);
var_pclassdefnode1 = var43;
var_node_list = var_pclassdefnode1;
var45 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction218> */
var46 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var45) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var46, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction218#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction218__action(val* self, val* p0) {
parser__ReduceAction218__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: ReduceAction219, Parser) */
void parser__ReduceAction219__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var11 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var12 /* : Array[Object] */;
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var14 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var29 /* : AAnnotations */;
val* var30 /* : null */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : AStdClassdef */;
val* var41 /* : null */;
val* var42 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var43 /* : Int */;
long var44 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var10;
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var11->class->vft[COLOR_array__Array__init]))(var11) /* init on <var11:Array[Object]>*/;
CHECK_NEW_array__Array(var11);
var_listnode7 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode15 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode17 = var13;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var14 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var14 = 0;
} else {
var14 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var14) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10489);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype16 = type_nullable_parser_nodes__AVisibility.color;
idtype17 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var15 = 1;
} else {
if(cltype16 >= var_pvisibilitynode4->type->table_size) {
var15 = 0;
} else {
var15 = var_pvisibilitynode4->type->type_table[cltype16] == idtype17;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10491);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype19 = type_nullable_parser_nodes__AClasskind.color;
idtype20 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var18 = 1;
} else {
if(cltype19 >= var_pclasskindnode5->type->table_size) {
var18 = 0;
} else {
var18 = var_pclasskindnode5->type->type_table[cltype19] == idtype20;
}
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10493);
exit(1);
}
var_tclassidnode6 = var_nodearraylist6;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype22 = type_nullable_parser_nodes__TClassid.color;
idtype23 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var21 = 1;
} else {
if(cltype22 >= var_tclassidnode6->type->table_size) {
var21 = 0;
} else {
var21 = var_tclassidnode6->type->type_table[cltype22] == idtype23;
}
}
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10495);
exit(1);
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[Object]>*/;
CHECK_NEW_array__Array(var24);
var_listnode12 = var24;
var_listnode11 = var_nodearraylist7;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype26 = type_array__Arraykernel__Object.color;
idtype27 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var25 = 0;
} else {
if(cltype26 >= var_listnode11->type->table_size) {
var25 = 0;
} else {
var25 = var_listnode11->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10498);
exit(1);
}
var28 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction219>*/;
var_listnode12 = var28;
var29 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var30 = NULL;
var31 = NULL;
var32 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var29->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var29, var30, var31, var_listnode12, var32) /* init_aannotations on <var29:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var29);
var_pannotationsnode8 = var29;
var_listnode16 = var_nodearraylist8;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype34 = type_array__Arraykernel__Object.color;
idtype35 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_listnode16->type->table_size) {
var33 = 0;
} else {
var33 = var_listnode16->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10507);
exit(1);
}
var36 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction219>*/;
var_listnode17 = var36;
var_tkwendnode18 = var_nodearraylist10;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype38 = type_nullable_parser_nodes__TKwend.color;
idtype39 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var37 = 1;
} else {
if(cltype38 >= var_tkwendnode18->type->table_size) {
var37 = 0;
} else {
var37 = var_tkwendnode18->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10510);
exit(1);
}
var40 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var41 = NULL;
var42 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var40->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var40, var_pdocnode2, var41, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var42, var_listnode15, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var40:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var40);
var_pclassdefnode1 = var40;
var_node_list = var_pclassdefnode1;
var43 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction219> */
var44 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var43) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var44, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction219#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction219__action(val* self, val* p0) {
parser__ReduceAction219__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: ReduceAction220, Parser) */
void parser__ReduceAction220__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
val* var29 /* : Array[Object] */;
val* var30 /* : AAnnotations */;
val* var31 /* : null */;
val* var32 /* : null */;
val* var33 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
val* var37 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : AStdClassdef */;
val* var42 /* : null */;
val* var43 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var44 /* : Int */;
long var45 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode15 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10548);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist2;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype17 = type_nullable_parser_nodes__AVisibility.color;
idtype18 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_pvisibilitynode4->type->table_size) {
var16 = 0;
} else {
var16 = var_pvisibilitynode4->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10550);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist3;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype20 = type_nullable_parser_nodes__AClasskind.color;
idtype21 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pclasskindnode5->type->table_size) {
var19 = 0;
} else {
var19 = var_pclasskindnode5->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10552);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype23 = type_nullable_parser_nodes__TClassid.color;
idtype24 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_tclassidnode6->type->table_size) {
var22 = 0;
} else {
var22 = var_tclassidnode6->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10554);
exit(1);
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var25->class->vft[COLOR_array__Array__init]))(var25) /* init on <var25:Array[Object]>*/;
CHECK_NEW_array__Array(var25);
var_listnode12 = var25;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype27 = type_array__Arraykernel__Object.color;
idtype28 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var26 = 0;
} else {
if(cltype27 >= var_listnode11->type->table_size) {
var26 = 0;
} else {
var26 = var_listnode11->type->type_table[cltype27] == idtype28;
}
}
if (!var26) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10557);
exit(1);
}
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction220>*/;
var_listnode12 = var29;
var30 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var31 = NULL;
var32 = NULL;
var33 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var30->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var30, var31, var32, var_listnode12, var33) /* init_aannotations on <var30:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var30);
var_pannotationsnode8 = var30;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype35 = type_array__Arraykernel__Object.color;
idtype36 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var34 = 0;
} else {
if(cltype35 >= var_listnode16->type->table_size) {
var34 = 0;
} else {
var34 = var_listnode16->type->type_table[cltype35] == idtype36;
}
}
if (!var34) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10566);
exit(1);
}
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction220>*/;
var_listnode17 = var37;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype39 = type_nullable_parser_nodes__TKwend.color;
idtype40 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var38 = 1;
} else {
if(cltype39 >= var_tkwendnode18->type->table_size) {
var38 = 0;
} else {
var38 = var_tkwendnode18->type->type_table[cltype39] == idtype40;
}
}
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10569);
exit(1);
}
var41 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var42 = NULL;
var43 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var41->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var41, var_pdocnode2, var42, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var43, var_listnode15, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var41:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var41);
var_pclassdefnode1 = var41;
var_node_list = var_pclassdefnode1;
var44 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction220> */
var45 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var44) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var45, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction220#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction220__action(val* self, val* p0) {
parser__ReduceAction220__action(self, p0);
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: ReduceAction222, Parser) */
void parser__ReduceAction222__action(val* self, val* p0) {
val* var_p /* var p: Parser */;
val* var /* : null */;
val* var_node_list /* var node_list: nullable Object */;
val* var1 /* : nullable Object */;
val* var_nodearraylist11 /* var nodearraylist11: nullable Object */;
val* var2 /* : nullable Object */;
val* var_nodearraylist10 /* var nodearraylist10: nullable Object */;
val* var3 /* : nullable Object */;
val* var_nodearraylist9 /* var nodearraylist9: nullable Object */;
val* var4 /* : nullable Object */;
val* var_nodearraylist8 /* var nodearraylist8: nullable Object */;
val* var5 /* : nullable Object */;
val* var_nodearraylist7 /* var nodearraylist7: nullable Object */;
val* var6 /* : nullable Object */;
val* var_nodearraylist6 /* var nodearraylist6: nullable Object */;
val* var7 /* : nullable Object */;
val* var_nodearraylist5 /* var nodearraylist5: nullable Object */;
val* var8 /* : nullable Object */;
val* var_nodearraylist4 /* var nodearraylist4: nullable Object */;
val* var9 /* : nullable Object */;
val* var_nodearraylist3 /* var nodearraylist3: nullable Object */;
val* var10 /* : nullable Object */;
val* var_nodearraylist2 /* var nodearraylist2: nullable Object */;
val* var11 /* : nullable Object */;
val* var_nodearraylist1 /* var nodearraylist1: nullable Object */;
val* var12 /* : Array[Object] */;
val* var_listnode7 /* var listnode7: Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_listnode15 /* var listnode15: Array[Object] */;
val* var14 /* : Array[Object] */;
val* var_listnode17 /* var listnode17: Array[Object] */;
val* var_pdocnode2 /* var pdocnode2: nullable Object */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var_tkwredefnode3 /* var tkwredefnode3: nullable Object */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var_pvisibilitynode4 /* var pvisibilitynode4: nullable Object */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var_pclasskindnode5 /* var pclasskindnode5: nullable Object */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var_tclassidnode6 /* var tclassidnode6: nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : Array[Object] */;
val* var_listnode12 /* var listnode12: Array[Object] */;
val* var_listnode11 /* var listnode11: nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : Array[Object] */;
val* var33 /* : AAnnotations */;
val* var34 /* : null */;
val* var35 /* : null */;
val* var36 /* : null */;
val* var_pannotationsnode8 /* var pannotationsnode8: nullable AAnnotations */;
val* var_listnode16 /* var listnode16: nullable Object */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : Array[Object] */;
val* var_tkwendnode18 /* var tkwendnode18: nullable Object */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
val* var44 /* : AStdClassdef */;
val* var45 /* : null */;
val* var_pclassdefnode1 /* var pclassdefnode1: nullable AStdClassdef */;
long var46 /* : Int */;
long var47 /* : Int */;
var_p = p0;
var = NULL;
var_node_list = var;
var1 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist11 = var1;
var2 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist10 = var2;
var3 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist9 = var3;
var4 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist8 = var4;
var5 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist7 = var5;
var6 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist6 = var6;
var7 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist5 = var7;
var8 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist4 = var8;
var9 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist3 = var9;
var10 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist2 = var10;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_parser__Parser__pop]))(var_p) /* pop on <var_p:Parser>*/;
var_nodearraylist1 = var11;
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var12->class->vft[COLOR_array__Array__init]))(var12) /* init on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
var_listnode7 = var12;
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var13->class->vft[COLOR_array__Array__init]))(var13) /* init on <var13:Array[Object]>*/;
CHECK_NEW_array__Array(var13);
var_listnode15 = var13;
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var14->class->vft[COLOR_array__Array__init]))(var14) /* init on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
var_listnode17 = var14;
var_pdocnode2 = var_nodearraylist1;
/* <var_pdocnode2:nullable Object> isa nullable ADoc */
cltype = type_nullable_parser_nodes__ADoc.color;
idtype = type_nullable_parser_nodes__ADoc.id;
if(var_pdocnode2 == NULL) {
var15 = 1;
} else {
if(cltype >= var_pdocnode2->type->table_size) {
var15 = 0;
} else {
var15 = var_pdocnode2->type->type_table[cltype] == idtype;
}
}
if (!var15) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10607);
exit(1);
}
var_tkwredefnode3 = var_nodearraylist2;
/* <var_tkwredefnode3:nullable Object> isa nullable TKwredef */
cltype17 = type_nullable_parser_nodes__TKwredef.color;
idtype18 = type_nullable_parser_nodes__TKwredef.id;
if(var_tkwredefnode3 == NULL) {
var16 = 1;
} else {
if(cltype17 >= var_tkwredefnode3->type->table_size) {
var16 = 0;
} else {
var16 = var_tkwredefnode3->type->type_table[cltype17] == idtype18;
}
}
if (!var16) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10609);
exit(1);
}
var_pvisibilitynode4 = var_nodearraylist3;
/* <var_pvisibilitynode4:nullable Object> isa nullable AVisibility */
cltype20 = type_nullable_parser_nodes__AVisibility.color;
idtype21 = type_nullable_parser_nodes__AVisibility.id;
if(var_pvisibilitynode4 == NULL) {
var19 = 1;
} else {
if(cltype20 >= var_pvisibilitynode4->type->table_size) {
var19 = 0;
} else {
var19 = var_pvisibilitynode4->type->type_table[cltype20] == idtype21;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10611);
exit(1);
}
var_pclasskindnode5 = var_nodearraylist4;
/* <var_pclasskindnode5:nullable Object> isa nullable AClasskind */
cltype23 = type_nullable_parser_nodes__AClasskind.color;
idtype24 = type_nullable_parser_nodes__AClasskind.id;
if(var_pclasskindnode5 == NULL) {
var22 = 1;
} else {
if(cltype23 >= var_pclasskindnode5->type->table_size) {
var22 = 0;
} else {
var22 = var_pclasskindnode5->type->type_table[cltype23] == idtype24;
}
}
if (!var22) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10613);
exit(1);
}
var_tclassidnode6 = var_nodearraylist7;
/* <var_tclassidnode6:nullable Object> isa nullable TClassid */
cltype26 = type_nullable_parser_nodes__TClassid.color;
idtype27 = type_nullable_parser_nodes__TClassid.id;
if(var_tclassidnode6 == NULL) {
var25 = 1;
} else {
if(cltype26 >= var_tclassidnode6->type->table_size) {
var25 = 0;
} else {
var25 = var_tclassidnode6->type->type_table[cltype26] == idtype27;
}
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10615);
exit(1);
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
((void (*)(val*))(var28->class->vft[COLOR_array__Array__init]))(var28) /* init on <var28:Array[Object]>*/;
CHECK_NEW_array__Array(var28);
var_listnode12 = var28;
var_listnode11 = var_nodearraylist8;
/* <var_listnode11:nullable Object> isa Array[Object] */
cltype30 = type_array__Arraykernel__Object.color;
idtype31 = type_array__Arraykernel__Object.id;
if(var_listnode11 == NULL) {
var29 = 0;
} else {
if(cltype30 >= var_listnode11->type->table_size) {
var29 = 0;
} else {
var29 = var_listnode11->type->type_table[cltype30] == idtype31;
}
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10618);
exit(1);
}
var32 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode12, var_listnode11) /* concat on <self:ReduceAction222>*/;
var_listnode12 = var32;
var33 = NEW_parser_nodes__AAnnotations(&type_parser_nodes__AAnnotations);
var34 = NULL;
var35 = NULL;
var36 = NULL;
((void (*)(val*, val*, val*, val*, val*))(var33->class->vft[COLOR_parser_prod__AAnnotations__init_aannotations]))(var33, var34, var35, var_listnode12, var36) /* init_aannotations on <var33:AAnnotations>*/;
CHECK_NEW_parser_nodes__AAnnotations(var33);
var_pannotationsnode8 = var33;
var_listnode16 = var_nodearraylist9;
/* <var_listnode16:nullable Object> isa Array[Object] */
cltype38 = type_array__Arraykernel__Object.color;
idtype39 = type_array__Arraykernel__Object.id;
if(var_listnode16 == NULL) {
var37 = 0;
} else {
if(cltype38 >= var_listnode16->type->table_size) {
var37 = 0;
} else {
var37 = var_listnode16->type->type_table[cltype38] == idtype39;
}
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10627);
exit(1);
}
var40 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_parser__ReduceAction__concat]))(self, var_listnode17, var_listnode16) /* concat on <self:ReduceAction222>*/;
var_listnode17 = var40;
var_tkwendnode18 = var_nodearraylist11;
/* <var_tkwendnode18:nullable Object> isa nullable TKwend */
cltype42 = type_nullable_parser_nodes__TKwend.color;
idtype43 = type_nullable_parser_nodes__TKwend.id;
if(var_tkwendnode18 == NULL) {
var41 = 1;
} else {
if(cltype42 >= var_tkwendnode18->type->table_size) {
var41 = 0;
} else {
var41 = var_tkwendnode18->type->type_table[cltype42] == idtype43;
}
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/parser/parser.nit", 10630);
exit(1);
}
var44 = NEW_parser_nodes__AStdClassdef(&type_parser_nodes__AStdClassdef);
var45 = NULL;
((void (*)(val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*, val*))(var44->class->vft[COLOR_parser_prod__AStdClassdef__init_astdclassdef]))(var44, var_pdocnode2, var_tkwredefnode3, var_pvisibilitynode4, var_pclasskindnode5, var_tclassidnode6, var_listnode7, var_pannotationsnode8, var45, var_listnode15, var_listnode17, var_tkwendnode18) /* init_astdclassdef on <var44:AStdClassdef>*/;
CHECK_NEW_parser_nodes__AStdClassdef(var44);
var_pclassdefnode1 = var44;
var_node_list = var_pclassdefnode1;
var46 = self->attrs[COLOR_parser__ReduceAction___goto].l; /* _goto on <self:ReduceAction222> */
var47 = ((long (*)(val*, long))(var_p->class->vft[COLOR_parser__Parser__go_to]))(var_p, var46) /* go_to on <var_p:Parser>*/;
((void (*)(val*, long, val*))(var_p->class->vft[COLOR_parser__Parser__push]))(var_p, var47, var_node_list) /* push on <var_p:Parser>*/;
RET_LABEL:;
}
/* method parser#ReduceAction222#action for (self: Object, Parser) */
void VIRTUAL_parser__ReduceAction222__action(val* self, val* p0) {
parser__ReduceAction222__action(self, p0);
RET_LABEL:;
}