
void FUN_00454e90(void)

{
  if (GLBL_SOME_CONTEXT != (SpED *)0x0) {
    FUN_00465ff0(*(undefined4 *)&GLBL_SOME_CONTEXT->field_0xc8);
    FUN_00465ff0(*(undefined4 *)&GLBL_SOME_CONTEXT[1].field_0x30);
    Quad_UnlinkDynamic(GLBL_SOME_CONTEXT);
    FUN_0041b9b0(GLBL_SOME_CONTEXT);
    GLBL_SOME_CONTEXT = (SpED *)0x0;
  }
  return;
}

