
undefined4 FUN_004347f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x5c) == -1) {
    return 0;
  }
  iVar1 = FUN_00434830(param_1,param_2);
  uVar2 = FUN_004345b0(*(int *)(iVar1 + 0xf8) + *(int *)(param_2 + 0x5c) * 0x20);
  return uVar2;
}

