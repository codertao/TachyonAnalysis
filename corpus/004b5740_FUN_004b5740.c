
void FUN_004b5740(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0) {
    DAT_006af524 = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  DAT_006af524 = iVar1 << 0x10;
  return;
}

