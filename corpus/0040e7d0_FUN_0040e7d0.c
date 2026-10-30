
void FUN_0040e7d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040e770(param_1);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
    FUN_0042e060(param_1);
    *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  }
  FUN_004b19f0(param_1 + 0x18);
  return;
}

