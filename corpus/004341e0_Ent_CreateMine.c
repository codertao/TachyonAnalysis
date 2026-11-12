
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE MINE (6) */

undefined4 * Ent_CreateMine(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  code *local_64;
  undefined1 *local_60;
  code *local_58;
  undefined4 local_54;
  code *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  code *local_3c;
  undefined1 *local_38;
  code *local_34;
  undefined1 *local_2c;
  undefined1 *local_20;
  undefined1 *local_c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      Mine_LoadSound(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 6;
  local_6c = 0x1d4;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = Mine_SpawnFromPlacement;
  local_64 = MineReplica_Init;
  local_60 = &LAB_00433d30;
  local_50 = Mine_OnMessage;
  local_3c = Mine_FreeDesc;
  local_38 = &LAB_004341a0;
  local_34 = Ent_FormatGroupField;
  local_48 = 0;
  local_54 = 0;
  local_20 = &LAB_00434060;
  local_2c = &LAB_00434170;
  local_4c = &LAB_00465590;
  local_c = &LAB_00434400;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  DebugLog_Printf(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005a5e40,0x1d4);
  clr_bytes(&DAT_005a6020,0x50);
  puVar3 = puVar1;
  puVar4 = &DAT_005a5e40;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  Cbin_ParseTemplate_Global(&PTR_DAT_0053f438);
  ShipDes_LoadContentScan(&DAT_005a5fd4);
  Cbin_GetScaledParam(&DAT_00532af4,s_SOUND_LOOP_00532ccc,&DAT_005a5f90);
  _DAT_005a5f8c = Race_FindByName(&DAT_005a6060);
  _DAT_005a5e58 = Rtxt_LookupSafe(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005a6020);
  _DAT_005a5e5c = ShipDes_LoadGroupClass();
  if (DAT_005a6040 == '\0') {
    _DAT_005a5fc8 = 0x26;
  }
  else {
    _DAT_005a5fc8 = WeaponName_ToId(&DAT_005a6040);
  }
  ModelPool_Load(&DAT_005a5f80,&DAT_005a5f60,0,&DAT_005a5f70,&g_ObjModelPool,1);
  Mine_InitDesc(&DAT_005a5e40);
  ShipDes_LoadJammer(&DAT_005a6008);
  Cbin_Close();
  puVar3 = &DAT_005a5e40;
  puVar4 = puVar1;
  for (iVar2 = 0x75; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    Mine_LoadSound(puVar1);
  }
  return puVar1;
}

