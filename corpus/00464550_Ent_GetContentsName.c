
/* sweep: CONT_UNKNOWN */

undefined4 Ent_GetContentsName(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x114) == -1) {
    return 0;
  }
  if (*(char *)(param_1 + 0xf1) != '\0') {
    uVar1 = Rtxt_GetText(DAT_005a6144,(int)*(short *)(param_1 + 0x114));
    return uVar1;
  }
  if (DAT_00549eb0 == -1) {
    DAT_00549eb0 = Rtxt_KeyIndex(DAT_005a6144,s_CONT_UNKNOWN_0054a2c8);
  }
  uVar1 = Rtxt_GetText(DAT_005a6144,DAT_00549eb0);
  return uVar1;
}

