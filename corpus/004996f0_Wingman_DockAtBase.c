
/* sweep: guess */

void Wingman_DockAtBase(int param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  Gate_SendJumpFx(param_2 + 0x34,*(undefined4 *)(param_1 + 100),0);
  Sped_SendGateMessage(param_1,param_2);
  local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
  local_18 = 1;
  local_10 = 7;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  Wingman_RemoveWrap(param_1);
  return;
}

