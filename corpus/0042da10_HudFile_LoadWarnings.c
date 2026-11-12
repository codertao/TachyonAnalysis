
/* sweep: MISSILE/GRAVITY/RADIATION/JAMMING... */

void HudFile_LoadWarnings(undefined4 param_1)

{
  int iVar1;
  undefined1 local_20 [32];
  
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b1944,s_MISSILE_WARNING_00536ba8,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_MISSILE_TEXT_00536b98,&DAT_005b1970,param_1);
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b1994,s_GRAVITY_WARNING_00536b88,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_GRAVITY_TEXT_00536b78,&DAT_005b19c0,param_1);
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b19e4,s_RADIATION_WARNING_00536b64,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_RADIATION_TEXT_00536b54,&DAT_005b1a10,param_1);
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b1a34,s_JAMMING_WARNING_00536b44,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_JAMMING_TEXT_00536b34,&DAT_005b1a60,param_1);
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b1a84,s_TARGETED_WARNING_00536b20,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_TARGETED_TEXT_00536b10,&DAT_005b1ab0,param_1);
  Cbin_SelectGroup(s_WARNINGS_00536bb8);
  HudFile_ReadSprite(&DAT_005b1ad4,s_MINE_WARNING_00536b00,param_1);
  HudFile_ReadTextItem(s_WARNINGS_00536bb8,s_MINE_TEXT_00536af4,&DAT_005b1b00,param_1);
  Cbin_GetScalar(s_WARNINGS_00536bb8,s_ACTIVE_COLOR_00536a08,local_20,0x18,0);
  iVar1 = HudFile_FindColor(param_1,local_20);
  if (iVar1 != 0) {
    DAT_005b1b28 = (*(int *)(iVar1 + 0x1c) << 8 | *(uint *)(iVar1 + 0x20)) << 8 |
                   *(uint *)(iVar1 + 0x24);
  }
  return;
}

