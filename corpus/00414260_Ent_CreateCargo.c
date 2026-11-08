
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE CARGO (7) */

undefined4 * Ent_CreateCargo(undefined4 param_1,undefined4 param_2,int param_3)

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
  undefined1 *local_50;
  code *local_48;
  undefined1 *local_3c;
  undefined1 *local_38;
  code *local_34;
  undefined1 *local_2c;
  code *local_28;
  undefined1 *local_20;
  undefined1 *local_c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      FUN_00445720(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 7;
  local_6c = 0x160;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_00413cb0;
  local_64 = FUN_00413d20;
  local_60 = &LAB_00413da0;
  local_3c = &LAB_00413e20;
  local_38 = &LAB_00414240;
  local_34 = FUN_004646f0;
  local_48 = FUN_00413ad0;
  local_54 = 0;
  local_2c = &LAB_00413fd0;
  local_50 = &LAB_00414000;
  local_20 = &LAB_00414170;
  local_28 = FUN_00413a60;
  local_c = &LAB_00414230;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005b9280,0x160);
  clr_bytes(&DAT_005b93e0,0x40);
  puVar3 = puVar1;
  puVar4 = &DAT_005b9280;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  FUN_0049bfc0(&PTR_DAT_00533f30);
  FUN_00462d70(&DAT_005b93cc);
  _DAT_005b9298 = FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005b93e0);
  _DAT_005b929c = FUN_00463cf0();
  ModelPool_Load(&DAT_005b93c0,&DAT_005b93a0,0,&DAT_005b93b0,&g_ObjModelPool,1);
  if (DAT_005b9400 != '\0') {
    iVar2 = FUN_0048f670(s_CARGO_TYPES_00534004,&DAT_005b9400,&DAT_005b93d8);
    if (iVar2 != 0) goto LAB_00414417;
  }
  _DAT_005b93d8 = 0xffffffff;
LAB_00414417:
  if (DAT_005b93dc == 0) {
    DAT_005b93dc = 0x186a0000;
  }
  else {
    DAT_005b93dc = DAT_005b93dc << 0xd;
  }
  Cbin_Close();
  puVar3 = &DAT_005b9280;
  puVar4 = puVar1;
  for (iVar2 = 0x58; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    FUN_00445720(puVar1);
  }
  return puVar1;
}

