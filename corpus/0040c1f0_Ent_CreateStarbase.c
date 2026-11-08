
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE STARBASE (5) */

undefined4 * Ent_CreateStarbase(undefined4 param_1,undefined4 param_2,int param_3)

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
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_40;
  code *local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_2c;
  code *local_24;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 4) != 0)) {
      FUN_0040b420(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 5;
  local_6c = 0x128;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_0040ab10;
  local_64 = FUN_0040b360;
  local_60 = &LAB_0040b3e0;
  local_5c = 0;
  local_50 = &LAB_0040b5f0;
  local_3c = FUN_0040b880;
  local_2c = &LAB_0040b920;
  local_c = &LAB_0040ba50;
  local_38 = &LAB_0040bb60;
  local_54 = &LAB_00408f40;
  local_4c = &LAB_0040b770;
  local_24 = FUN_004132f0;
  local_20 = &LAB_0040bd10;
  local_18 = &LAB_0040bdf0;
  local_40 = &LAB_0040bf10;
  local_30 = &LAB_0040bf40;
  local_8 = &LAB_0040c030;
  local_4 = &LAB_0040c1b0;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005b98a0,0x128);
  clr_bytes(&DAT_005b9820,0x80);
  puVar3 = puVar1;
  puVar4 = &DAT_005b98a0;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  FUN_0049bfc0(&PTR_DAT_00532b40);
  Dock_PickRandomScene(&DAT_005b98a0);
  _DAT_005b99bc = FUN_0040b8c0(&DAT_005b9820);
  _DAT_005b99c0 = FUN_004580c0(&DAT_005b9860);
  _DAT_005b98b8 = FUN_0048e820(DAT_005a6144,s_BASE_NAMES_00532ec8,&DAT_005b9840);
  _DAT_005b99c4 = FUN_00408de0(&DAT_005b9880);
  if (puVar1[0x46] == 0) {
    FUN_004091f0(&DAT_005b99b4);
  }
  Cbin_Close();
  _DAT_005b9934 = FUN_00409b80(&DAT_005b9924,&DAT_005b99b4);
  puVar3 = &DAT_005b98a0;
  puVar4 = puVar1;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (puVar1[0x25] != 0) {
    *(undefined4 **)(puVar1[0x25] + 8) = puVar1 + 0x45;
  }
  if (param_3 != 0) {
    FUN_0040b420(puVar1);
  }
  return puVar1;
}

