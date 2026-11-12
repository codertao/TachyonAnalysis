
/* sweep: guess */

void Sapper_ThinkAttached(int param_1)

{
  Sapper_ThinkServer(param_1);
  if (0 < *(int *)(param_1 + 0xd4)) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
    return;
  }
  Sapper_SpawnExplosion(param_1);
  SrvSend_MineRemoved(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
  Quad_Unlink(param_1);
  return;
}

