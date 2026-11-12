
/* sweep */

void Cargo_ArriveAndRemove(int param_1)

{
  Cargo_MsgArrived(param_1);
  SrvSend_EntityDestroyed(param_1 + 0x34,9,0,0,0,0,9,*(undefined4 *)(param_1 + 100));
  Cargo_Remove(param_1);
  return;
}

