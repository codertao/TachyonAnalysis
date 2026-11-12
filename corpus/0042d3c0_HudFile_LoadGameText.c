
/* sweep */

void HudFile_LoadGameText(int param_1)

{
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_WEAPON_A_00536918,param_1 + 0x46c,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_WEAPON_B_0053690c,param_1 + 0x488,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_THRUST_00536974,param_1 + 0x4a4,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_SPEED_0053696c,param_1 + 0x4c0,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_WEAPON_A_AMMO_0053695c,param_1 + 0x4dc,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_WEAPON_B_AMMO_0053694c,param_1 + 0x4f8,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_ECM_FLARES_00536940,param_1 + 0x514,param_1);
  HudFile_ReadTextItem(s_GAME_TEXT_0053697c,s_ECM_TEXT_00536934,param_1 + 0x530,param_1);
  return;
}

