
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DESC_TYPE CAPITOL_SHIP (3) */

undefined4 * Ent_CreateCapitalShip(undefined4 param_1,undefined4 param_2)

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
  undefined4 local_5c;
  code *local_58;
  code *local_54;
  code *local_50;
  code *local_4c;
  code *local_48;
  code *local_44;
  code *local_40;
  code *local_3c;
  code *local_38;
  code *local_34;
  code *local_30;
  code *local_2c;
  code *local_24;
  code *local_20;
  code *local_c;
  code *local_8;
  
  puVar1 = (undefined4 *)DescReg_FindByName(param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    clr_bytes(&local_74,0x74);
    local_70 = 3;
    local_6c = 0x174;
    local_68 = 0xffff;
    local_74 = param_1;
    local_58 = FUN_004126b0;
    local_64 = FUN_00412cb0;
    local_60 = FUN_00412730;
    local_5c = 0;
    local_54 = FUN_00412ce0;
    local_50 = CapShip_OnMessage;
    local_48 = FUN_00412630;
    local_40 = FUN_00412da0;
    local_3c = FUN_00412df0;
    local_30 = FUN_00411e30;
    local_38 = FUN_00413290;
    local_34 = FUN_00412e40;
    local_44 = FUN_00412e10;
    local_2c = FUN_00413170;
    local_24 = FUN_004132f0;
    local_20 = FUN_004135c0;
    local_c = FUN_00413090;
    local_8 = FUN_00413630;
    local_4c = FUN_004136a0;
    puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
    clr_bytes(&DAT_005b9420,0x174);
    clr_bytes(&DAT_005b95a0,0x40);
    puVar3 = puVar1;
    puVar4 = &DAT_005b9420;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    Cbin_Open(param_1);
    FUN_0049bfc0(&PTR_DAT_00533de8);
    ShipDes_ParseRotation(&DAT_005b94a4);
    FUN_00462d70(&DAT_005b9588);
    _DAT_005b9500 = DAT_005b94f8 / 100;
    _DAT_005b9578 = FUN_004580c0(&DAT_005b95c0);
    _DAT_005b9438 = FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005b95a0);
    _DAT_005b943c = FUN_00463cf0();
    FUN_004091f0(&DAT_005b957c);
    Cbin_Close();
    if (DAT_005b95d0 == '\0') {
      ModelPool_Load(&DAT_005b9568,&DAT_005b9548,0,&DAT_005b9558,&g_ObjModelPool,1);
    }
    else {
      _DAT_005b9574 = FUN_00409b80(&DAT_005b95d0,&DAT_005b957c);
      _DAT_005b9584 = FUN_00409c40(_DAT_005b9574);
    }
    puVar3 = &DAT_005b9420;
    puVar4 = puVar1;
    for (iVar2 = 0x5d; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 **)(puVar1[0x55] + 8) = puVar1 + 0x57;
  }
  return puVar1;
}

