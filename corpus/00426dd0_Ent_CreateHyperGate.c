
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE HYPER_GATE (4) */

undefined4 * Ent_CreateHyperGate(undefined4 param_1,undefined4 param_2,int param_3)

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
  undefined4 local_5c;
  code *local_58;
  undefined1 *local_54;
  undefined1 *local_4c;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_2c;
  undefined1 *local_20;
  code *local_18;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      FUN_00426570(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 4;
  local_6c = 0x1a4;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = Gate_SpawnAndPreload;
  local_64 = FUN_00426700;
  local_60 = &LAB_004268a0;
  local_5c = 0;
  local_54 = &LAB_004269e0;
  local_38 = &LAB_00426880;
  local_30 = FUN_00425ee0;
  local_2c = &LAB_00426a30;
  local_18 = FUN_00426a60;
  local_10 = &LAB_00426ad0;
  local_8 = &LAB_00426b10;
  local_c = &LAB_00426b30;
  local_4c = &LAB_00426c00;
  local_20 = &LAB_00426c20;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005b1c20,0x1a4);
  puVar3 = puVar1;
  puVar4 = &DAT_005b1c20;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0049bfe0(param_1,&PTR_DAT_00535ec8);
  ModelPool_Load(&DAT_005b1d3c,&DAT_005b1cb0,&DAT_005b1cc0,&DAT_005b1cc0,&g_ObjModelPool,1);
  if (DAT_005b1d60 != '\0') {
    _DAT_005b1d80 = Pak_LoadPlain(&DAT_005b1d60);
  }
  if (DAT_005b1d70 != '\0') {
    _DAT_005b1d84 = Pak_LoadPlain(&DAT_005b1d70);
  }
  puVar3 = &DAT_005b1c20;
  puVar4 = puVar1;
  for (iVar2 = 0x69; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    FUN_00426570(puVar1);
  }
  return puVar1;
}

