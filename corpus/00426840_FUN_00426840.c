
int FUN_00426840(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    return param_1 + 0xf8;
  }
  iVar1 = FUN_0048e800(DAT_005a6140,0x62);
  return iVar1;
}

