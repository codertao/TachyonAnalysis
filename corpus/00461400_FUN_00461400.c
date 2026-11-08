
void FUN_00461400(int param_1)

{
  int iVar1;
  undefined1 auStack_80 [128];
  
  FUN_00445720(param_1);
  FUN_004611c0(param_1);
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 != 0) {
    SrvSend_EntityDestroyed(iVar1 + 0x34,3,0,0,0,0,0,*(undefined4 *)(iVar1 + 100));
    Ent_LeaveQuadrant(*(int *)(param_1 + 200),*(undefined4 *)(*(int *)(param_1 + 200) + 100));
    FUN_0041b9b0(*(undefined4 *)(param_1 + 200));
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    OurFreeMem(*(int *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  str_sprintf(auStack_80,s__s_has_left_the_game_00549518,param_1 + 0xcc);
  SrvSend_TextMsg(auStack_80,0,0,0,0xffffffff,0,DAT_005a6324 & 0xff);
  FUN_0045db40(1,0x18,0);
  FUN_00490370(param_1);
  SrvSend_RosterClear(param_1);
  SrvSend_Scoreboard();
  return;
}

