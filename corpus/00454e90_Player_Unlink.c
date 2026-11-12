
/* sweep */

void Player_Unlink(void)

{
  if (GLBL_SOME_CONTEXT != (SpED *)0x0) {
    Snd3D_Release(*(undefined4 *)&GLBL_SOME_CONTEXT->field_0xc8);
    Snd3D_Release(*(undefined4 *)&GLBL_SOME_CONTEXT[1].field_0x30);
    Quad_UnlinkDynamic(GLBL_SOME_CONTEXT);
    Dcb_Free(GLBL_SOME_CONTEXT);
    GLBL_SOME_CONTEXT = (SpED *)0x0;
  }
  return;
}

