
/* player ship killed: sends 0x1006, 0x1003 (effect 3), 0x1014 op 8; kill/death credit */

void TachSrv_OnShipKilled(int param_1)

{
  FUN_0048b330(param_1);
  FUN_00457760(param_1);
  SrvSend_YouDied(*(undefined4 *)(param_1 + 0xdc));
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 0x14c) = 0;
  FUN_00462380(param_1);
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x1d0) = 1;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  SrvSend_EntityDestroyed
            (param_1 + 0x34,3,0,0,*(undefined4 *)(param_1 + 0xdc),0,0,*(undefined4 *)(param_1 + 100)
            );
  SrvSend_EntityStateOp
            (8,*(undefined4 *)(param_1 + 0x78),0,0,*(undefined4 *)(param_1 + 100),
             *(undefined4 *)(param_1 + 0xdc));
  *(undefined1 *)(param_1 + 0xc3) = 1;
  if (DAT_005653f4 == 0) {
    if (DAT_00565410 == 2) {
      FUN_0045fbb0(*(undefined4 *)(param_1 + 0xdc));
    }
  }
  else if (*(short *)(DAT_005653f4 + 0x76) == 1) {
    if (DAT_005653f4 != param_1) {
      *(int *)(DAT_005653f4 + 0xe0) = *(int *)(DAT_005653f4 + 0xe0) + 1;
    }
    if (DAT_00565410 == 0) {
      FUN_0045faa0(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(DAT_005653f4 + 0xdc));
    }
    else if (DAT_00565410 == 1) {
      FUN_0045fb30(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(DAT_005653f4 + 0xdc));
    }
  }
  if (*(code **)(g_ActiveRules + 0x24) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x24))(param_1,DAT_005653f4);
  }
  SrvSend_Scoreboard();
  return;
}

