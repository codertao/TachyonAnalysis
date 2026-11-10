
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* script opcodes 0x3d/0x3e */

void Music_PlaySegment(undefined4 param_1)

{
  Music_SelectSegment(param_1);
  _DAT_006af518 = param_1;
  if (GLBL_MAYBE_AUDIO_CB_1 != (code *)0x0) {
    (*GLBL_MAYBE_AUDIO_CB_1)(param_1,DAT_006af50c);
  }
  return;
}

