
void FUN_0040a250(int param_1)

{
  int iVar1;
  
  FUN_00403480((undefined4 *)(param_1 + 0x15c),*(int *)(param_1 + 0x8c) + 0xc4,param_1);
  iVar1 = *(int *)(param_1 + 0xe8);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xf8) & 8) != 0)) && (*(short *)(iVar1 + 0xfc) != 0)) {
    FUN_00404c00(param_1);
    *(undefined4 *)(param_1 + 0x15c) = 40000;
  }
  return;
}

