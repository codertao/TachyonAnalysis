
void FUN_00421dc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbc) - DAT_005653e0;
  *(int *)(param_1 + 0xbc) = iVar1;
  if (iVar1 < 1) {
    FUN_004230f0(param_1 + 0x34,0x10000,6);
    FUN_004666e0(9,4,0,param_1,0x10000);
    FUN_00421320(param_1);
  }
  return;
}

