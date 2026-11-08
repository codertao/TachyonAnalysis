
void FUN_004578e0(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0xc3) = 1;
  FUN_0048b330(param_1);
  FUN_00457890(param_1);
  FUN_0041b950(param_1);
  FUN_00462380(param_1);
  FUN_0045cf80(param_1,param_2 + 0x14);
  SrvSend_EntityStateOp
            (8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),
             *(undefined4 *)(param_1 + 0xdc));
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
  return;
}

