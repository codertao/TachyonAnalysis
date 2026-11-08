
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b56b0(undefined4 param_1)

{
  FUN_004b5320(param_1);
  _DAT_006af518 = param_1;
  if (GLBL_MAYBE_AUDIO_CB_1 != (code *)0x0) {
    (*GLBL_MAYBE_AUDIO_CB_1)(param_1,DAT_006af50c);
  }
  return;
}

