
/* DESC_TYPE COURSE (0xb) */

undefined4 * Ent_CreateCourse(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  code *local_58;
  undefined4 local_54;
  undefined4 local_48;
  code *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_20;
  undefined1 *local_18;
  undefined1 *local_c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      FUN_0041b190(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 0xb;
  local_6c = 0x158;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_0041b280;
  local_64 = &LAB_0041b420;
  local_60 = &LAB_0041b3b0;
  local_3c = FUN_0041b310;
  local_38 = 0;
  local_34 = 0;
  local_48 = 0;
  local_54 = 0;
  local_20 = 0;
  local_2c = 0;
  local_18 = &LAB_0041b560;
  local_c = &LAB_00414230;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_005b2840,0x158);
  puVar4 = puVar1;
  puVar5 = &DAT_005b2840;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  Cbin_Open(param_1);
  FUN_0049bfc0(&PTR_DAT_00534940);
  if (DAT_005b2984 == 0) {
    DAT_005b2984 = 0x14;
  }
  uVar2 = FUN_0041b200();
  DAT_005b2998 = (uint)(DAT_005b2984 < uVar2);
  FUN_00465f60(&DAT_00532af4,s_SOUND_LOOP_00532ccc,&DAT_005b2948);
  Cbin_Close();
  FUN_0041b380(&DAT_005b28c4);
  FUN_0041b380(&DAT_005b28f0);
  FUN_0041b380(&DAT_005b291c);
  puVar4 = &DAT_005b2840;
  puVar5 = puVar1;
  for (iVar3 = 0x56; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_3 != 0) {
    FUN_0041b190(puVar1);
  }
  return puVar1;
}

