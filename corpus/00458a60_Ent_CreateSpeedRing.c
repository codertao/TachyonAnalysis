
/* DESC_TYPE SPEED_RING (9) */

undefined4 * Ent_CreateSpeedRing(undefined4 param_1,undefined4 param_2,int param_3)

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
  code *local_60;
  code *local_58;
  undefined4 local_54;
  code *local_50;
  undefined4 local_48;
  undefined1 *local_3c;
  code *local_38;
  code *local_34;
  code *local_2c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_3 != 0) || ((g_FlightStateFlags & 2) != 0)) {
      FUN_00445720(puVar1);
    }
    return puVar1;
  }
  clr_bytes(&local_74,0x74);
  local_70 = 9;
  local_6c = 0xb4;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_004588a0;
  local_64 = &LAB_004589e0;
  local_60 = FUN_00458a30;
  local_3c = &LAB_0040e930;
  local_38 = FUN_004645c0;
  local_34 = FUN_004646f0;
  local_48 = 0;
  local_54 = 0;
  local_2c = Ent_CreateMiscObject;
  local_50 = Ent_CreateMiscObject;
  puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  clr_bytes(&DAT_0058f220,0xb4);
  puVar3 = puVar1;
  puVar4 = &DAT_0058f220;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  Cbin_Open(param_1);
  FUN_0049bfc0(&PTR_DAT_00548dd8);
  ModelPool_Load(&DAT_0058f2c4,&DAT_0058f2a4,0,&DAT_0058f2b4,&g_ObjModelPool,1);
  DAT_0058f2d0 = FUN_00423e60(DAT_0058f2d0);
  Cbin_Close();
  puVar3 = &DAT_0058f220;
  puVar4 = puVar1;
  for (iVar2 = 0x2d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != 0) {
    FUN_00445720(puVar1);
  }
  return puVar1;
}

