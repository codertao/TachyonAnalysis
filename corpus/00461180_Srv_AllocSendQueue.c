
/* sweep */

void Srv_AllocSendQueue(int param_1)

{
  Mem_AllocZeroTagged(param_1 + 0x134,0x400,4,s_PLAYER_OBJ_SEND_QUE_005494ec,0xbbbb);
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}

