
void FUN_00433640(int param_1)

{
  int iVar1;
  
  FUN_00403bd0(param_1 + 0x34,0,*(undefined4 *)(param_1 + 100));
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x18c) != 0) {
    FUN_004335d0(param_1);
  }
  if ((DAT_005653f4 != 0) && (*(short *)(DAT_005653f4 + 0x76) == 1)) {
    iVar1 = FUN_004344a0(param_1);
    if (iVar1 == 0) {
      *(int *)(DAT_005653f4 + 0xe4) = *(int *)(DAT_005653f4 + 0xe4) + 1;
    }
    else {
      *(int *)(DAT_005653f4 + 0xe0) = *(int *)(DAT_005653f4 + 0xe0) + 1;
    }
  }
  FUN_00403cc0(param_1,*(undefined4 *)(param_1 + 0xd8));
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  SrvSend_Despawn(param_1);
  FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_00462300(param_1);
  FUN_0041b8c0(param_1);
  return;
}

