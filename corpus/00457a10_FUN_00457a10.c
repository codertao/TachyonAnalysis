
void FUN_00457a10(int param_1,int param_2)

{
  FUN_00445720(param_1,param_2,s_ENTER_QUADRANT_00548d44);
  FUN_004579c0(param_1);
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  *(undefined4 *)(param_2 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_0041b850(param_1);
  FUN_00457730(param_1);
  *(undefined1 *)(param_1 + 0xc3) = 0;
  FUN_0045cff0(param_1,param_2 + 0x14);
  return;
}

