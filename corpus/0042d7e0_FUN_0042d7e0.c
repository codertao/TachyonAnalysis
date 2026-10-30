
void FUN_0042d7e0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_18 [24];
  
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x7a4,s_RADAR_DOT_00536ae8,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 2000,s_RADAR_DOT_OUTLINE_00536ad4,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x854,s_WEAPON_A_LINK_00536ac4,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x880,s_WEAPON_B_LINK_00536ab4,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x828,s_WEAPON_DOUBLE_LINK_00536aa0,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x680,s_TARGET_LEAD_PIP_005363f4,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x8ac,s_MOUSE_PIP_00536a94,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x7fc,s_CROSSHAIR_00536a88,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x8d8,s_TARGET_LOCK_00536a7c,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x904,s_TARGET_TL_00536a70,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x930,s_2ND_TARGET_TL_00536a60,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x95c,s_NAV_GATE_TL_00536a54,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x988,s_NAV_GATE_TT_00536a48,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x9b4,s_TOP_TORPEDO_00536a3c,param_1);
  Cbin_SelectGroup(&DAT_00535990);
  FUN_0042d010(param_1 + 0x9e0,s_BTM_TORPEDO_00536a30,param_1);
  FUN_0042cd70(s_RECHARGE_TEXT_00536a20,s_LASER_00536924,param_1 + 0xa28,param_1);
  FUN_0042cd70(s_RECHARGE_TEXT_00536a20,s_BURNER_0053692c,param_1 + 0xa0c,param_1);
  FUN_0042cd70(s_RECHARGE_TEXT_00536a20,s_SHIELD_00536a18,param_1 + 0xa44,param_1);
  Cbin_GetScalar(s_RECHARGE_TEXT_00536a20,s_ACTIVE_COLOR_00536a08,local_18,0x18,0);
  uVar1 = FUN_0042cce0(param_1,local_18);
  *(undefined4 *)(param_1 + 0xa60) = uVar1;
  return;
}

