
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a520(int param_1)

{
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  if (DAT_005b2a54 != 4) {
    if ((DAT_005b2a70 != 0) && (DAT_005b2a70 == DAT_005b2a5c)) {
      DAT_005b2a64 = DAT_005b2a64 + _DAT_005b29c4 * 500;
      if (DAT_005a6730 != 0) {
        str_sprintf(local_80,s_Bonus_All_Targets_Hit___d_00534ae0,_DAT_005b29c4 * 500);
        FUN_0045d9d0(local_80,0);
      }
    }
    DAT_005b2a6c = DAT_005b29a8 / 0x32;
    DAT_005b2a58 = param_1 * 300 + DAT_005b2a64 + DAT_005b2a6c * _DAT_005b29c4 * 2;
    DAT_005b2a68 = DAT_005b2a64;
    DAT_005b2a64 = 0;
    DAT_005b2a60 = DAT_005b2a5c;
    DAT_005b2a5c = 0;
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CREDITS_005341ac,DAT_005b2a58);
    local_88 = 0xffffffff;
    local_84 = 0xffffffff;
    local_98 = 0;
    local_94 = 0;
    local_90 = 10;
    local_8c = 0;
    Mission_PostEvent(&local_98,g_SrvCurShip->quadrant);
  }
  return;
}

