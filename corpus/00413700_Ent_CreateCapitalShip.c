
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
    local_58 = CapShip_SpawnFromPlacement;
    local_64 = CapShipReplica_Init;
    local_60 = CapShip_FillNetCreate;
    local_5c = 0;
    local_54 = CapShip_GetMountPose;
    local_50 = CapShip_OnMessage;
    local_48 = CapShip_TrySpawn;
    local_40 = CapShip_GetRadius;
    local_3c = CapShip_FreeDesc;
    local_30 = MultiPart_UpdateChildOffsets;
    local_38 = CapPart_GetText;
    local_34 = CapShip_GetText;
    local_44 = CapShip_GetLabelPtr;
    local_2c = CapShip_Query;
    local_24 = CapShip_DistanceToHull;
    local_20 = CapShipDebug_Draw;
    local_c = CapShipReplica_Query;
    local_8 = Ent_AdjustEngageCount;
    local_4c = CapShipReplica_OnMessage;
    puVar1 = (undefined4 *)DescReg_Alloc(&local_74,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    DebugLog_Printf(s_Descriptor__s_loaded_00532b28,param_1);
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
    Cbin_ParseTemplate_Global(&PTR_DAT_00533de8);
    ShipDes_ParseRotation(&DAT_005b94a4);
    ShipDes_LoadContentScan(&DAT_005b9588);
    _DAT_005b9500 = DAT_005b94f8 / 100;
    _DAT_005b9578 = Race_FindByName(&DAT_005b95c0);
    _DAT_005b9438 = Rtxt_LookupSafe(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_005b95a0);
    _DAT_005b943c = ShipDes_LoadGroupClass();
    BaseFile_LoadSoundLoops(&DAT_005b957c);
    Cbin_Close();
    if (DAT_005b95d0 == '\0') {
      ModelPool_Load(&DAT_005b9568,&DAT_005b9548,0,&DAT_005b9558,&g_ObjModelPool,1);
    }
    else {
      _DAT_005b9574 = BaseFile_Load(&DAT_005b95d0,&DAT_005b957c);
      _DAT_005b9584 = CapShip_InitPartTransforms(_DAT_005b9574);
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

