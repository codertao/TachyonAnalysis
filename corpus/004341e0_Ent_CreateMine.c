
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
      FUN_00433dc0(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 6;
  local_6c = 0x1d4;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_00433bd0;
  local_64 = FUN_00433c90;
  local_60 = &LAB_00433d30;
  local_50 = Mine_OnMessage;
  local_3c = FUN_00433d80;
  local_38 = &LAB_004341a0;
  local_34 = FUN_004646f0;
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
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
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
  FUN_0049bfc0(&PTR_DAT_0053f438);
  FUN_00462d70(&DAT_005a5fd4);
  FUN_00465f60(&DAT_00532af4,s_SOUND_LOOP_00532ccc,&DAT_005a5f90);
  _DAT_005a5f8c = FUN_004580c0(&DAT_005a6060);
  _DAT_005a5e58 = FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005a6020);
  _DAT_005a5e5c = FUN_00463cf0();
  if (DAT_005a6040 == '\0') {
    _DAT_005a5fc8 = 0x26;
  }
  else {
    _DAT_005a5fc8 = FUN_00492c90(&DAT_005a6040);
  }
  ModelPool_Load(&DAT_005a5f80,&DAT_005a5f60,0,&DAT_005a5f70,&g_ObjModelPool,1);
  FUN_00433fd0(&DAT_005a5e40);
  FUN_00462dd0(&DAT_005a6008);
  Cbin_Close();
  puVar3 = &DAT_005a5e40;
  puVar4 = puVar1;
  for (iVar2 = 0x75; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    FUN_00433dc0(puVar1);
  }
  return puVar1;
}

