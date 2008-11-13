/* This C file is generated by NIT to compile module kernel. */
#include "kernel._sep.h"
val_t kernel___Object___object_id(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object___object_id, 26};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int) self);
}
val_t kernel___Object___is_same_type(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object___is_same_type, 29};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool((VAL2VFT( self)==VAL2VFT( param0)));
}
val_t kernel___Object_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object_____eqeq, 32};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(IS_EQUAL_NN( self, variable0 /*other*/));
  goto return_label0;
  return_label0: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Object_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object_____neq, 37};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(( self ==  variable0 /*other*/) || (( self != NIT_NULL) && ((((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))==kernel___Object_____eqeq)?(IS_EQUAL_NN( self, variable0 /*other*/)):(UNTAG_Bool(((kernel___Object_____eqeq_t)CALL( self,COLOR_kernel___Object_____eqeq))( self,  variable0 /*other*/) /*Object::==*/)))));
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label1;
  return_label1: while(false);
  tracehead = trace.prev;
  return variable1;
}
void kernel___Object___output(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object___output, 42};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  printf("%c", (unsigned char)UNTAG_Char( TAG_Char('<')));
  variable0 = TAG_Int((int) self);
  printf("%d\n", UNTAG_Int(variable0));
  printf("%c", (unsigned char)UNTAG_Char( TAG_Char('>')));
  tracehead = trace.prev;
  return;
}
void kernel___Object___exit(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object___exit, 50};
  trace.prev = tracehead; tracehead = &trace;
  exit(UNTAG_Int( param0));
  tracehead = trace.prev;
  return;
}
val_t kernel___Object___sys(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Object___sys, 51};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return (G_sys);
}
void kernel___Sys___main(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Sys___main, 56};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return;
}
val_t kernel___Comparable_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable_____l, 69};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method %s called (%s: %d)\n", "<", LOCATE_kernel___Sys___main, 69);
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Comparable_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable_____leq, 72};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label4;
  return_label4: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable_____geq, 75};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  variable1 =  TAG_Bool(!UNTAG_Bool(variable1));
  goto return_label5;
  return_label5: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable_____g, 78};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
  goto return_label6;
  return_label6: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable_____leqg(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable_____leqg, 81};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label7;
  } else { /*if*/
    variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*other*/,COLOR_kernel___Comparable_____l))( variable0 /*other*/,  self) /*Comparable::<*/;
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label7;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label7;
    }
  }
  return_label7: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable___is_between(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable___is_between, 93};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = ((kernel___Comparable_____leq_t)CALL( variable0 /*c*/,COLOR_kernel___Comparable_____leq))( variable0 /*c*/,  self) /*Comparable::<=*/;
  variable3 = variable2;
  if (UNTAG_Bool(variable3)) { /* and */
    variable3 = ((kernel___Comparable_____leq_t)CALL( self,COLOR_kernel___Comparable_____leq))( self,  variable1 /*d*/) /*Comparable::<=*/;
  }
  variable2 = variable3;
  goto return_label8;
  return_label8: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t kernel___Comparable___max(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable___max, 99};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*other*/) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*other*/;
    goto return_label9;
  } else { /*if*/
    variable1 =  self;
    goto return_label9;
  }
  return_label9: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Comparable___min(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Comparable___min, 109};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = ((kernel___Comparable_____l_t)CALL( variable0 /*c*/,COLOR_kernel___Comparable_____l))( variable0 /*c*/,  self) /*Comparable::<*/;
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*c*/;
    goto return_label10;
  } else { /*if*/
    variable1 =  self;
    goto return_label10;
  }
  return_label10: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Discrete___succ(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Discrete___succ, 126};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((kernel___Discrete_____plus_t)CALL( self,COLOR_kernel___Discrete_____plus))( self,  TAG_Int(1)) /*Discrete::+*/;
  goto return_label11;
  return_label11: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Discrete___prec(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Discrete___prec, 129};
  val_t variable0;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = ((kernel___Discrete_____minus_t)CALL( self,COLOR_kernel___Discrete_____minus))( self,  TAG_Int(1)) /*Discrete::-*/;
  goto return_label12;
  return_label12: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Discrete_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Discrete_____plus, 132};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method %s called (%s: %d)\n", "+", LOCATE_kernel___Discrete___prec, 132);
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Discrete_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Discrete_____minus, 135};
  trace.prev = tracehead; tracehead = &trace;
  fprintf(stderr, "Deferred method %s called (%s: %d)\n", "-", LOCATE_kernel___Discrete___prec, 135);
  nit_exit(1);
  tracehead = trace.prev;
  return NIT_NULL;
}
val_t kernel___Discrete___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Discrete___distance, 138};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
    val_t variable4;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = NIT_NULL /*decl variable cursor*/;
  variable2 = NIT_NULL /*decl variable stop*/;
  variable3 = ((kernel___Comparable_____l_t)CALL( self,COLOR_kernel___Comparable_____l))( self,  variable0 /*d*/) /*Discrete::<*/;
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  self /*cursor=*/;
    variable2 =  variable0 /*d*/ /*stop=*/;
  } else { /*if*/
    variable3 = ((kernel___Comparable_____g_t)CALL( self,COLOR_kernel___Comparable_____g))( self,  variable0 /*d*/) /*Discrete::>*/;
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  variable0 /*d*/ /*cursor=*/;
      variable2 =  self /*stop=*/;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label13;
    }
  }
  variable3 =  TAG_Int(0);
  while (true) { /*while*/
    variable4 = ((kernel___Comparable_____l_t)CALL( variable1 /*cursor*/,COLOR_kernel___Comparable_____l))( variable1 /*cursor*/,  variable2 /*stop*/) /*Discrete::<*/;
    if (!UNTAG_Bool(variable4)) break; /* while*/
    variable4 = ((kernel___Discrete___succ_t)CALL( variable1 /*cursor*/,COLOR_kernel___Discrete___succ))( variable1 /*cursor*/) /*Discrete::succ*/;
    variable1 = variable4 /*cursor=*/;
    variable3 = TAG_Int(UNTAG_Int(variable3)+UNTAG_Int( TAG_Int(1))) /*nb*/;
    continue_14: while(0);
  }
  break_14: while(0);
  variable1 =  variable3 /*nb*/;
  goto return_label13;
  return_label13: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Bool___object_id(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Bool___object_id, 174};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Bool( self));
}
val_t kernel___Bool_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Bool_____eqeq, 175};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Bool_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Bool_____neq, 176};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Bool___output(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Bool___output, 177};
  trace.prev = tracehead; tracehead = &trace;
  (void)printf(UNTAG_Bool( self)?"true\n":"false\n");
  tracehead = trace.prev;
  return;
}
val_t kernel___Float___object_id(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float___object_id, 183};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int)UNBOX_Float( self));
}
void kernel___Float___output(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float___output, 184};
  trace.prev = tracehead; tracehead = &trace;
  printf("%f\n", UNBOX_Float( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Float_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____leq, 186};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)<=UNBOX_Float( param0));
}
val_t kernel___Float_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____l, 187};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)<UNBOX_Float( param0));
}
val_t kernel___Float_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____geq, 188};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)>=UNBOX_Float( param0));
}
val_t kernel___Float_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____g, 189};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNBOX_Float( self)>UNBOX_Float( param0));
}
val_t kernel___Float_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____plus, 190};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)+UNBOX_Float( param0));
}
val_t kernel___Float___unary__minus(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float___unary__minus, 191};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(-UNBOX_Float( self));
}
val_t kernel___Float_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____minus, 192};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)-UNBOX_Float( param0));
}
val_t kernel___Float_____star(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____star, 193};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)*UNBOX_Float( param0));
}
val_t kernel___Float_____slash(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float_____slash, 194};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(UNBOX_Float( self)/UNBOX_Float( param0));
}
val_t kernel___Float___to_i(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Float___to_i, 196};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((int)UNBOX_Float( self));
}
val_t kernel___Int___object_id(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___object_id, 206};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return  self;
}
val_t kernel___Int_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____eqeq, 207};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Int_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____neq, 208};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Int___output(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___output, 209};
  trace.prev = tracehead; tracehead = &trace;
  printf("%d\n", UNTAG_Int( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Int_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____leq, 211};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)<=UNTAG_Int( param0));
}
val_t kernel___Int_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____l, 212};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)<UNTAG_Int( param0));
}
val_t kernel___Int_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____geq, 213};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)>=UNTAG_Int( param0));
}
val_t kernel___Int_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____g, 214};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Int( self)>UNTAG_Int( param0));
}
val_t kernel___Int_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____plus, 215};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)+UNTAG_Int( param0));
}
val_t kernel___Int___unary__minus(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___unary__minus, 216};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(-UNTAG_Int( self));
}
val_t kernel___Int_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____minus, 217};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)-UNTAG_Int( param0));
}
val_t kernel___Int_____star(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____star, 218};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)*UNTAG_Int( param0));
}
val_t kernel___Int_____slash(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____slash, 219};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)/UNTAG_Int( param0));
}
val_t kernel___Int_____percent(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____percent, 220};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)%UNTAG_Int( param0));
}
val_t kernel___Int___lshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___lshift, 221};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)<<UNTAG_Int( param0));
}
val_t kernel___Int___rshift(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___rshift, 222};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)>>UNTAG_Int( param0));
}
val_t kernel___Int___to_f(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___to_f, 224};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float((float)UNTAG_Int( self));
}
val_t kernel___Int___succ(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___succ, 227};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)+1);
}
val_t kernel___Int___prec(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___prec, 228};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Int( self)-1);
}
val_t kernel___Int___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___distance, 229};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = TAG_Int(UNTAG_Int( self)-UNTAG_Int( variable0 /*i*/));
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*d*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*d*/;
    goto return_label15;
  } else { /*if*/
    variable2 = TAG_Int(-UNTAG_Int( variable1 /*d*/));
    variable1 = variable2;
    goto return_label15;
  }
  return_label15: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int_____leqg(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int_____leqg, 239};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*other*/));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label16;
  } else { /*if*/
    variable1 = TAG_Bool(UNTAG_Int( variable0 /*other*/)<UNTAG_Int( self));
    if (UNTAG_Bool(variable1)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label16;
    } else { /*if*/
      variable1 =  TAG_Int(0);
      goto return_label16;
    }
  }
  return_label16: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___is_between(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___is_between, 250};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 =  param1;
  variable2 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*c*/));
  variable3 = variable2;
  if (!UNTAG_Bool(variable3)) { /* or */
    variable3 = TAG_Bool(UNTAG_Int( variable1 /*d*/)<UNTAG_Int( self));
  }
  variable2 = variable3;
  if (UNTAG_Bool(variable2)) { /*if*/
    variable2 =  TAG_Bool(false);
    goto return_label17;
  } else { /*if*/
    variable2 =  TAG_Bool(true);
    goto return_label17;
  }
  return_label17: while(false);
  tracehead = trace.prev;
  return variable2;
}
val_t kernel___Int___max(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___max, 259};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( variable0 /*other*/));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*other*/;
    goto return_label18;
  } else { /*if*/
    variable1 =  self;
    goto return_label18;
  }
  return_label18: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___min(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___min, 268};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Bool(UNTAG_Int( variable0 /*c*/)<UNTAG_Int( self));
  if (UNTAG_Bool(variable1)) { /*if*/
    variable1 =  variable0 /*c*/;
    goto return_label19;
  } else { /*if*/
    variable1 =  self;
    goto return_label19;
  }
  return_label19: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___ascii(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___ascii, 277};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Int( self));
}
val_t kernel___Int___digit_count(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___digit_count, 280};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable1 = TAG_Int((int)0) /*decl variable d*/;
  variable2 = TAG_Int((int)0) /*decl variable n*/;
  variable3 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable3)) { /*if*/
    variable1 =  TAG_Int(1) /*d=*/;
    variable3 = TAG_Int(-UNTAG_Int( self));
    variable2 = variable3 /*n=*/;
  } else { /*if*/
    variable3 = TAG_Bool(( self)==( TAG_Int(0)));
    if (UNTAG_Bool(variable3)) { /*if*/
      variable1 =  TAG_Int(1);
      goto return_label20;
    } else { /*if*/
      variable1 =  TAG_Int(0) /*d=*/;
      variable2 =  self /*n=*/;
    }
  }
  while (true) { /*while*/
    variable3 = TAG_Bool(UNTAG_Int( variable2 /*n*/)>UNTAG_Int( TAG_Int(0)));
    if (!UNTAG_Bool(variable3)) break; /* while*/
    variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(1))) /*d*/;
    variable3 = TAG_Int(UNTAG_Int( variable2 /*n*/)/UNTAG_Int( variable0 /*b*/));
    variable2 = variable3 /*n=*/;
    continue_21: while(0);
  }
  break_21: while(0);
  variable1 =  variable1 /*d*/;
  goto return_label20;
  return_label20: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Int___to_c(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Int___to_c, 303};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Int( self)>=UNTAG_Int( TAG_Int(0)));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Int( self)<=UNTAG_Int( TAG_Int(36)));
  }
  variable0 = variable1;
  if (!UNTAG_Bool(variable0)) { fprintf(stderr, "Assert%s failed (%s: %d)\n", "", LOCATE_kernel___Int___to_c, 308); nit_exit(1);}
  variable0 = TAG_Bool(UNTAG_Int( self)<UNTAG_Int( TAG_Int(10)));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('0')));
    variable0 = TAG_Int(UNTAG_Int( self)+UNTAG_Int(variable0));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label22;
  } else { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('a')));
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int( TAG_Int(10)));
    variable0 = TAG_Int(UNTAG_Int( self)+UNTAG_Int(variable0));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label22;
  }
  return_label22: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___object_id(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___object_id, 324};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(UNTAG_Char( self));
}
val_t kernel___Char_____eqeq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____eqeq, 325};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)==( param0));
}
val_t kernel___Char_____neq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____neq, 326};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(( self)!=( param0));
}
void kernel___Char___output(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___output, 327};
  trace.prev = tracehead; tracehead = &trace;
  printf("%c", (unsigned char)UNTAG_Char( self));
  tracehead = trace.prev;
  return;
}
val_t kernel___Char_____leq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____leq, 329};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( param0));
}
val_t kernel___Char_____l(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____l, 330};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)<UNTAG_Char( param0));
}
val_t kernel___Char_____geq(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____geq, 331};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( param0));
}
val_t kernel___Char_____g(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____g, 332};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Bool(UNTAG_Char( self)>UNTAG_Char( param0));
}
val_t kernel___Char___succ(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___succ, 334};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)+1);
}
val_t kernel___Char___prec(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___prec, 335};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)-1);
}
val_t kernel___Char___distance(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___distance, 337};
  val_t variable0;
  val_t variable1;
  val_t variable2;
  val_t variable3;
  trace.prev = tracehead; tracehead = &trace;
  variable0 =  param0;
  variable2 = TAG_Int((unsigned char)UNTAG_Char( self));
  variable3 = TAG_Int((unsigned char)UNTAG_Char( variable0 /*c*/));
  variable2 = TAG_Int(UNTAG_Int(variable2)-UNTAG_Int(variable3));
  variable1 = variable2;
  variable2 = TAG_Bool(UNTAG_Int( variable1 /*d*/)>=UNTAG_Int( TAG_Int(0)));
  if (UNTAG_Bool(variable2)) { /*if*/
    variable1 =  variable1 /*d*/;
    goto return_label23;
  } else { /*if*/
    variable2 = TAG_Int(-UNTAG_Int( variable1 /*d*/));
    variable1 = variable2;
    goto return_label23;
  }
  return_label23: while(false);
  tracehead = trace.prev;
  return variable1;
}
val_t kernel___Char___to_i(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___to_i, 347};
  val_t variable0;
    val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(( self)==( TAG_Char('-')));
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int(-UNTAG_Int( TAG_Int(1)));
    goto return_label24;
  } else { /*if*/
    variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('0')));
    variable1 = variable0;
    if (UNTAG_Bool(variable1)) { /* and */
      variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('9')));
    }
    variable0 = variable1;
    if (UNTAG_Bool(variable0)) { /*if*/
      variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
      variable1 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('0')));
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
      goto return_label24;
    } else { /*if*/
      variable0 = ((kernel___Char___to_lower_t)CALL( self,COLOR_kernel___Char___to_lower))( self) /*Char::to_lower*/;
      variable0 = TAG_Int((unsigned char)UNTAG_Char(variable0));
      variable1 = TAG_Int((unsigned char)UNTAG_Char( TAG_Char('a')));
      variable1 = TAG_Int(UNTAG_Int(variable1)+UNTAG_Int( TAG_Int(10)));
      variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
      goto return_label24;
    }
  }
  return_label24: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___ascii(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___ascii, 360};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int((unsigned char)UNTAG_Char( self));
}
val_t kernel___Char_____plus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____plus, 363};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)+UNTAG_Char( param0));
}
val_t kernel___Char_____minus(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char_____minus, 364};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Char(UNTAG_Char( self)-UNTAG_Char( param0));
}
val_t kernel___Char___to_lower(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___to_lower, 366};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('A')));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('Z')));
  }
  variable0 = variable1;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
    variable1 = ((kernel___Char___distance_t)CALL( TAG_Char('a'),COLOR_kernel___Discrete___distance))( TAG_Char('a'),  TAG_Char('A')) /*Char::distance*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)+UNTAG_Int(variable1));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label25;
  } else { /*if*/
    variable0 =  self;
    goto return_label25;
  }
  return_label25: while(false);
  tracehead = trace.prev;
  return variable0;
}
val_t kernel___Char___to_upper(val_t  self) {
  struct trace_t trace = {NULL, LOCATE_kernel___Char___to_upper, 376};
  val_t variable0;
  val_t variable1;
  trace.prev = tracehead; tracehead = &trace;
  variable0 = TAG_Bool(UNTAG_Char( self)>=UNTAG_Char( TAG_Char('a')));
  variable1 = variable0;
  if (UNTAG_Bool(variable1)) { /* and */
    variable1 = TAG_Bool(UNTAG_Char( self)<=UNTAG_Char( TAG_Char('z')));
  }
  variable0 = variable1;
  if (UNTAG_Bool(variable0)) { /*if*/
    variable0 = TAG_Int((unsigned char)UNTAG_Char( self));
    variable1 = ((kernel___Char___distance_t)CALL( TAG_Char('a'),COLOR_kernel___Discrete___distance))( TAG_Char('a'),  TAG_Char('A')) /*Char::distance*/;
    variable0 = TAG_Int(UNTAG_Int(variable0)-UNTAG_Int(variable1));
    variable0 = TAG_Char(UNTAG_Int(variable0));
    goto return_label26;
  } else { /*if*/
    variable0 =  self;
    goto return_label26;
  }
  return_label26: while(false);
  tracehead = trace.prev;
  return variable0;
}
