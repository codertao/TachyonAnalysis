
/* HUD cfg SHIELDS: HULL / FRONT / REAR elements */

void HudCfg_ReadShieldStatus(int param_1)

{
  Cbin_SelectGroup(s_SHIELDS_005369a8);
  HudFile_ReadSprite(param_1 + 0x578,&DAT_005334f4,param_1);
  Cbin_SelectGroup(s_SHIELDS_005369a8);
  HudFile_ReadSprite(param_1 + 0x5a4,s_FRONT_005369a0,param_1);
  Cbin_SelectGroup(s_SHIELDS_005369a8);
  HudFile_ReadSprite(param_1 + 0x5d0,&DAT_00536998,param_1);
  return;
}

