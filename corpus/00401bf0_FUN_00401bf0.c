
void FUN_00401bf0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  FUN_00401b30(param_1,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
  return;
}

