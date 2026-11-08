
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE BEACON (8) */

undefined4 * Ent_CreateBeacon(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  code *local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 *local_3c;
  undefined1 *local_38;
  code *local_34;
  code *local_2c;
  code *local_28;
  undefined1 *local_c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      FUN_00445720(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 8;
  local_6c = 0xb8;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_0040e840;
  local_64 = &LAB_0040e880;
  local_60 = &LAB_0040e8c0;
  local_3c = &LAB_0040e930;
  local_38 = &LAB_0040e810;
  local_34 = FUN_004646f0;
  local_48 = 0;
  local_54 = 0;
  local_2c = Ent_CreateMiscObject;
  local_50 = &LAB_0040e9a0;
  local_28 = FUN_0040e770;
  local_c = &LAB_00414230;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005b96e0,0xb8);
  puVar3 = puVar1;
  puVar4 = &DAT_005b96e0;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  FUN_0049bfc0(&PTR_DAT_005339b0);
  _DAT_005b96f8 = FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005b96c0);
  ModelPool_Load(&DAT_005b9784,&DAT_005b9764,0,&DAT_005b9774,&g_ObjModelPool,1);
  Cbin_Close();
  if (DAT_005b9794 == 0) {
    DAT_005b9794 = 0x186a0000;
  }
  else {
    DAT_005b9794 = DAT_005b9794 << 0xd;
  }
  puVar3 = &DAT_005b96e0;
  puVar4 = puVar1;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    FUN_00445720(puVar1);
  }
  return puVar1;
}

