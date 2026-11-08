
void FUN_00456850(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
    return;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_004565e0(param_1);
  FUN_0045cbf0(param_1,*(int *)(param_1 + 100) + 0x14);
  SrvSend_SpawnEntity(param_1);
  *(undefined1 *)(param_1 + 0xc3) = 3;
  return;
}

