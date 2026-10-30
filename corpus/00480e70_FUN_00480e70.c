
void FUN_00480e70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004803a0(param_1 & 0x7fffffff);
  if (iVar1 != 0) {
    FUN_00480dc0(iVar1,param_1 & 0x80000000);
  }
  return;
}

