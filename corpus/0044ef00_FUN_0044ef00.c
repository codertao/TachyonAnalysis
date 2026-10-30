
void FUN_0044ef00(int param_1)

{
  int iVar1;
  
  if (DAT_005b9014 < 0x11) {
    FUN_00466590(1,0xb,0,0xff);
    return;
  }
  if (param_1 < 0) {
    DAT_00590d60 = DAT_00590d60 + -0x10;
    iVar1 = DAT_00590d60;
    if (DAT_00590d60 < 0) {
      DAT_00590d60 = 0;
      FUN_00466590(1,0xb,0,0xff);
      return;
    }
  }
  else {
    iVar1 = DAT_00590d60 + 0x10;
    DAT_00590d60 = DAT_005b9014 - 0x10;
    if (DAT_00590d60 < iVar1) {
      if (DAT_00590d60 < 0) {
        DAT_00590d60 = 0;
      }
      FUN_00466590(1,0xb,0,0xff);
      return;
    }
  }
  DAT_00590d60 = iVar1;
  FUN_00466590(1,9,0,0xff);
  return;
}

