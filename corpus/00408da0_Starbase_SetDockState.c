
/* sweep: +0xfe, SrvSend_EntityStateOp(0x10) */

void Starbase_SetDockState(int param_1,undefined4 param_2)

{
  *(short *)(param_1 + 0xfe) = (short)param_2;
  SrvSend_EntityStateOp
            (0x10,*(undefined4 *)(param_1 + 0x78),param_2,0,*(undefined4 *)(param_1 + 100),0);
  return;
}

