
/* sweep */

void Credits_UpdateBlocks(void)

{
  int iVar1;
  
  if (((DAT_005a41b4 != 0) && (DAT_005a41a8 != 0)) && (DAT_005a41b0 == 0)) {
    if (DAT_005a4194 != 0) {
      DAT_005a4194 = DAT_005a4194 + -1;
      return;
    }
    SbHotspot_Select(DAT_005a41b8,&DAT_005a41bc,&DAT_005a41c0,DAT_005a41c4,s_WndCredits_0053ff40);
    DAT_005a4194 = DAT_005a4198;
    for (iVar1 = DAT_005a41b4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x130)) {
      *(float *)(iVar1 + 0x124) = *(float *)(iVar1 + 0x124) - (float)DAT_005a419c;
    }
    DAT_005a41b0 = 1;
  }
  return;
}

