
void FUN_00453c40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_005b1ee8 == 0) && (DAT_005b9094 == 0)) {
    iVar2 = DAT_005b1ee0 * 0x82 >> 10;
  }
  else {
    iVar2 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  iVar2 = iVar2 - iVar1;
  if (0xf < iVar2) {
    *(int *)(param_1 + 0x100) = iVar1 + 0xf;
    return;
  }
  if (iVar2 < -0xf) {
    iVar2 = -0xf;
  }
  *(int *)(param_1 + 0x100) = iVar1 + iVar2;
  return;
}

