/* This C file is generated by NIT to compile module type_formal. */
#include "type_formal._sep.h"
val_t type_formal___MMType___direct_type(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMType___direct_type, 24};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  self;
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t type_formal___MMTypeFormal___name(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___name, 31};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_type_formal___MMTypeFormal____name( self) /*MMTypeFormal::_name*/;
}
val_t type_formal___MMTypeFormal___bound(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___bound, 34};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
}
val_t type_formal___MMTypeFormal_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal_____l, 37};
  val_t variable0;
  val_t variable1;
  val_t variable2;
    val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(!UNTAG_Bool(TAG_Bool(( variable0 /*t*/ ==  NIT_NULL /*null*/) || (( variable0 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*t*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))( variable0 /*t*/,  NIT_NULL /*null*/) /*MMType::==*/)))))));
  variable2 = variable1;
  if (UNTAG_Bool(variable2)) { /* and */
    variable2 = TAG_Bool(( variable0 /*t*/ ==  self) || (( variable0 /*t*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*t*/, self)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*t*/,COLOR_kernel___Object_____eqeq))( variable0 /*t*/,  self) /*MMType::==*/)))));
    variable3 = variable2;
    if (!UNTAG_Bool(variable3)) { /* or */
      variable3 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
      variable3 = ((static_type___MMType___is_supertype_t)CALL( variable0 /*t*/,COLOR_static_type___MMType___is_supertype))( variable0 /*t*/, variable3) /*MMType::is_supertype*/;
    }
    variable2 = variable3;
  }
  variable1 = variable2;
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t type_formal___MMTypeFormal___is_supertype(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___is_supertype, 38};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
  variable1 = ((static_type___MMType___is_supertype_t)CALL(variable1,COLOR_static_type___MMType___is_supertype))(variable1,  variable0 /*t*/) /*MMType::is_supertype*/;
  goto return_label2;
  return_label2: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t type_formal___MMTypeFormal___direct_type(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___direct_type, 39};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
  variable0 = ((type_formal___MMType___direct_type_t)CALL(variable0,COLOR_type_formal___MMType___direct_type))(variable0) /*MMType::direct_type*/;
  goto return_label3;
  return_label3: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t type_formal___MMTypeFormal___local_class(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___local_class, 40};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
  variable0 = TAG_Bool((variable0 ==  NIT_NULL /*null*/) || ((variable0 != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN(variable0, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL(variable0,COLOR_kernel___Object_____eqeq))(variable0,  NIT_NULL /*null*/) /*MMType::==*/)))));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 =  NIT_NULL /*null*/;
    goto return_label4;
  }
  variable0 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
  variable0 = ((static_type___MMType___local_class_t)CALL(variable0,COLOR_static_type___MMType___local_class))(variable0) /*MMType::local_class*/;
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t type_formal___MMTypeFormal___select_property(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___select_property, 46};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( variable0 /*g*/ ==  NIT_NULL /*null*/) || (( variable0 /*g*/ != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( variable0 /*g*/, NIT_NULL /*null*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( variable0 /*g*/,COLOR_kernel___Object_____eqeq))( variable0 /*g*/,  NIT_NULL /*null*/) /*MMGlobalProperty::==*/)))));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  NIT_NULL /*null*/;
    goto return_label5;
  } else { /*if*/
    variable1 = ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/;
    variable1 = ((static_type___MMType___select_property_t)CALL(variable1,COLOR_static_type___MMType___select_property))(variable1,  variable0 /*g*/) /*MMType::select_property*/;
    goto return_label5;
  }
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t type_formal___MMTypeFormal___to_s(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___to_s, 55};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ATTR_type_formal___MMTypeFormal____name( self) /*MMTypeFormal::_name*/;
  variable0 = ((symbol___Symbol___to_s_t)CALL(variable0,COLOR_string___Object___to_s))(variable0) /*Symbol::to_s*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable0;
}
void type_formal___MMTypeFormal___init(val_t  self, val_t  param0, val_t  param1, int* init_table) {
  struct trace_t trace = {NULL, LOCATE_type_formal___MMTypeFormal___init, 57};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  if (init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormal].i]) return;
  ATTR_type_formal___MMTypeFormal____name( self) /*MMTypeFormal::_name*/ =  variable0 /*name*/;
  ATTR_type_formal___MMTypeFormal____bound( self) /*MMTypeFormal::_bound*/ =  variable1 /*bound*/;
  init_table[VAL2OBJ( self)->vft[INIT_TABLE_POS_MMTypeFormal].i] = 1;
  tracehead = trace.prev;
  return;
}
