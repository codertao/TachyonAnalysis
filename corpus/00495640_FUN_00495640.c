
void FUN_00495640(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  if (*(int *)(param_1 + 0x90) != 0) {
    Vec_DirAngles((undefined4 *)(param_1 + 0x34),*(int *)(param_1 + 0x90) + 0x34,param_1 + 0x4c);
    FUN_00495590(param_1);
  }
  return;
}

