
void FUN_00431570(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    DAT_005aed90 = DAT_005aed90 + -0x1e;
    if (DAT_005aed90 < 0) {
      DAT_005aed90 = 0;
      FUN_00466590(1,0xb,0,0xff);
      return;
    }
  }
  else {
    iVar1 = DAT_005aed90 + 0x3c;
    DAT_005aed90 = DAT_005aed90 + 0x1e;
    if (DAT_005aed8c <= iVar1) {
      DAT_005aed90 = DAT_005aed8c + -0x1e;
      FUN_00466590(1,0xb,0,0xff);
      return;
    }
  }
  FUN_00466590(1,9,0,0xff);
  return;
}

