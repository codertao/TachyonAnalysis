
void FUN_00402020(int param_1,int param_2)

{
  if (param_1 == DAT_005653a0) {
    FUN_00499670(param_1);
  }
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  FUN_0045cf80(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_0041b8c0(param_1);
  FUN_00462380(param_1);
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_0045b6f0(param_1);
  SrvSend_EntityStateOp(8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

