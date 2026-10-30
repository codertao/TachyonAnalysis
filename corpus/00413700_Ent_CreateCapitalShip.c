
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
  undefined1 *local_60;
  undefined4 local_5c;
  code *local_58;
  code *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  code *local_48;
  undefined1 *local_44;
  code *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puVar1 = (undefined4 *)FUN_0041dbb0(param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0048e380(&local_74,0x74);
    local_70 = 3;
    local_6c = 0x174;
    local_68 = 0xffff;
    local_74 = param_1;
    local_58 = FUN_004126b0;
    local_64 = FUN_00412cb0;
    local_60 = &LAB_00412730;
    local_5c = 0;
    local_54 = FUN_00412ce0;
    local_50 = &LAB_004116c0;
    local_48 = FUN_00412630;
    local_40 = FUN_00412da0;
    local_3c = &LAB_00412df0;
    local_30 = &LAB_00411e30;
    local_38 = &LAB_00413290;
    local_34 = &LAB_00412e40;
    local_44 = &LAB_00412e10;
    local_2c = &LAB_00413170;
    local_24 = &LAB_004132f0;
    local_20 = &LAB_004135c0;
    local_c = &LAB_00413090;
    local_8 = &LAB_00413630;
    local_4c = &LAB_004136a0;
    puVar1 = (undefined4 *)FUN_0041db50(&local_74,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
    FUN_0048e380(&DAT_005b9420,0x174);
    FUN_0048e380(&DAT_005b95a0,0x40);
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
      FUN_00431850(&DAT_005b9568,&DAT_005b9548,0,&DAT_005b9558,&DAT_005a7538,1);
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

