
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE POWERUP (0xd) */

undefined4 * Ent_CreatePowerup(undefined4 param_1,undefined4 param_2,int param_3)

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
  code *local_60;
  code *local_58;
  undefined4 local_54;
  code *local_50;
  undefined4 local_48;
  undefined1 *local_3c;
  code *local_38;
  code *local_34;
  code *local_2c;
  undefined1 *local_18;
  code *local_14;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      Nop(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 0xd;
  local_6c = 0xb8;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = Powerup_SpawnDefault;
  local_64 = Powerup_Init;
  local_60 = Powerup_GetType;
  local_50 = Stub_ReturnZeroB;
  local_3c = &LAB_0040e930;
  local_38 = Ent_FormatInfoField;
  local_34 = Ent_FormatGroupField;
  local_48 = 0;
  local_54 = 0;
  local_2c = Stub_ReturnZeroB;
  local_18 = &LAB_00456800;
  local_14 = Powerup_OnPickup;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  DebugLog_Printf(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_0058f360,0xb8);
  clr_bytes(&DAT_0058f340,0x20);
  puVar3 = puVar1;
  puVar4 = &DAT_0058f360;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  Cbin_ParseTemplate_Global(&PTR_DAT_00548ba0);
  ModelPool_Load(&DAT_0058f404,&DAT_0058f3e4,0,&DAT_0058f3f4,&g_ObjModelPool,1);
  Cbin_Close();
  _DAT_0058f410 = Powerup_TypeFromName(&DAT_0058f340);
  puVar3 = &DAT_0058f360;
  puVar4 = puVar1;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    Nop(puVar1);
  }
  return puVar1;
}

