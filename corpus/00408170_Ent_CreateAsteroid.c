
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE ASTEROID (2) */

undefined4 * Ent_CreateAsteroid(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined4 local_64;
  undefined4 local_60;
  code *local_5c;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    clr_bytes(&local_78,0x74);
    local_74 = 2;
    local_70 = 0xcc;
    local_6c = 0xffff;
    local_78 = param_1;
    local_5c = Asteroid_SpawnAtLoad;
    local_68 = Asteroid_InitClient;
    local_64 = 0;
    local_60 = 0;
    puVar1 = (undefined4 *)DescReg_Alloc(&local_78,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
    clr_bytes(&DAT_005b99e0,0xcc);
    puVar3 = puVar1;
    puVar4 = &DAT_005b99e0;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_0049bfe0(param_1,&PTR_DAT_005329c8);
    ModelPool_Load(&DAT_005b9a8c,&DAT_005b9a6c,&DAT_005b9a7c,&DAT_005b9a7c,&g_ObjModelPool,1);
    DAT_005b9aa0 = DAT_005b9aa0 << 0xd;
    if (DAT_005b9aa0 != 0) {
      if (DAT_005b9aa8 == 0) {
        DAT_005b9aa8 = 0x400;
      }
      _DAT_005b9aa4 =
           (undefined4)((longlong)((ulonglong)DAT_005b9aa8 << 0x20) / (longlong)DAT_005b9aa0);
    }
    puVar3 = &DAT_005b99e0;
    puVar4 = puVar1;
    for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return puVar1;
}

