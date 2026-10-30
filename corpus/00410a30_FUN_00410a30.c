
void FUN_00410a30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  FUN_0045de80(8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xe0);
    FUN_0041b8c0(iVar1);
    FUN_0045cf80(iVar1,*(int *)(iVar1 + 100) + 0x14);
    FUN_0045d1c0(iVar1,*(int *)(iVar1 + 100) + 0x14);
    FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
    iVar1 = iVar2;
  }
  FUN_0041b8c0(param_1);
  FUN_00462380(param_1);
  FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

