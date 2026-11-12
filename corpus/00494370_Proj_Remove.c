
/* if server-owned & networked (+0xd8==0, !(+0xc3&1)) send 0x1014 op 8; free */

void Proj_Remove(int param_1)

{
  if ((*(int *)(param_1 + 0xd8) == 0) && ((*(byte *)(param_1 + 0xc3) & 1) == 0)) {
    Srv_NotifyEntityRemoved(param_1);
    SrvSend_EntityStateOp(8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),0);
  }
  Quad_Unlink(param_1);
  return;
}

