
void FUN_004634e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004634c0(param_1);
  if (iVar1 != 0) {
    FUN_0042e060(param_1);
  }
  *(short *)(param_1 + 0x30) = (short)(DAT_005b3304 >> 2);
  FUN_004b19f0(param_1 + 0x18);
  if (*(int *)(param_1 + 0xe8) == DAT_005b22f8) {
    FUN_0042e020(param_1,0,DAT_005a6324 & 0xff);
  }
  return;
}

