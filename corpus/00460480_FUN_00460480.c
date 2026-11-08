
void FUN_00460480(undefined4 *param_1)

{
  if (*(short *)((int)param_1 + 6) == 1) {
    SrvSend_EntityFired(*(undefined4 *)(DAT_0058b064 + 0x78),*param_1,*(undefined2 *)(param_1 + 1),0
                        ,DAT_0058b068,*(undefined4 *)(DAT_0058b064 + 100),1);
    return;
  }
  FUN_004985f0(*(undefined4 *)(DAT_0058b064 + 100),*param_1);
  SrvSend_MineRemoved(*param_1,*(undefined4 *)(DAT_0058b064 + 100));
  return;
}

