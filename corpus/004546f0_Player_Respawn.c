
/* sweep */

void Player_Respawn(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = GLBL_SOME_CONTEXT;
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x34) = *param_1;
  *(undefined4 *)(iVar1 + 0x38) = param_1[1];
  *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
  iVar1 = GLBL_SOME_CONTEXT;
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x4c) = *param_2;
  *(undefined4 *)(iVar1 + 0x50) = param_2[1];
  *(undefined4 *)(iVar1 + 0x54) = param_2[2];
  PlayerDcb_InstallHandlers(GLBL_SOME_CONTEXT);
  Player_FindSpawnSlot();
  SpaceDust_SetEnabled(1);
  if (*(code **)(g_ActiveRules + 0x88) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x88))(1);
  }
  Fade_StartDefault(0,0);
  Camera_SetDefaultMode();
  Scoreboard_SetMode(0);
  Input_ResetForFlight();
  Input_PopBindingSet(&PTR_DAT_0053e9b8);
  Input_PopBindingSet(&PTR_DAT_0053e978);
  Input_PushBindingSet(&PTR_DAT_0053e600);
  return;
}

