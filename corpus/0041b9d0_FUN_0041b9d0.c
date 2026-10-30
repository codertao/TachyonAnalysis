
void FUN_0041b9d0(int param_1,uint param_2)

{
  int iVar1;
  
  while (iVar1 = param_1, iVar1 != 0) {
    param_1 = *(int *)(iVar1 + 8);
    if (*(ushort *)(iVar1 + 0x76) == param_2) {
      FUN_0041b950(iVar1);
      FUN_0041b9b0(iVar1);
    }
  }
  return;
}

