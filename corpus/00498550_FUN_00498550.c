
void FUN_00498550(int param_1)

{
  Sapper_ThinkServer(param_1);
  if (0 < *(int *)(param_1 + 0xd4)) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
    return;
  }
  FUN_004984e0(param_1);
  SrvSend_MineRemoved(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  FUN_0041b8c0(param_1);
  return;
}

