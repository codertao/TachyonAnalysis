
void FUN_0040e950(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10c) = param_2;
  if (param_2 != 0) {
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
    SrvSend_EntityStateOp(4,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
    return;
  }
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
  return;
}

