
/* sweep */

void Fx_ScatterType11(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005b31c0; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(short *)(iVar1 + 0x76) == 0x11) {
      Fx_RandomOffsetNearCamera(iVar1 + 0x34,DAT_005b1e30 + 0xa0000);
    }
  }
  return;
}

