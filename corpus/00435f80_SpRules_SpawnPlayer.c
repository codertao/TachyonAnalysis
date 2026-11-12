
/* sweep: PLAYER.SCR */

void SpRules_SpawnPlayer(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 200);
  piVar1 = (int *)(iVar2 + 0x8c);
  local_4 = 0;
  iVar3 = Spx_FindPlayerPlacement(DAT_005a6540,iVar2 + 0x34,iVar2 + 0x4c,piVar1);
  if (iVar3 == 0) {
    clr_bytes(iVar2 + 0x34,0xc);
    clr_bytes(iVar2 + 0x4c,0xc);
    if (DAT_005a6590 == '\0') {
      Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4);
      puVar4 = (undefined1 *)ShipType_ResolveDes(local_4);
    }
    else {
      puVar4 = &DAT_005a6590;
    }
    Desc_CreateByType(puVar4,piVar1,0,0,0,0xffffffff);
    if ((*piVar1 == 0) && (DAT_005a6590 != '\0')) {
      uVar5 = Spx_ResolveDesName(s_DEFAULT_0053f920,piVar1,0,0,0,0xffffffff);
      Desc_CreateByType(uVar5);
    }
  }
  *(undefined1 *)(iVar2 + 0xc2) = (undefined1)DAT_005a5df4;
  uVar5 = Race_GetFlags(DAT_005a5df4);
  *(undefined4 *)(iVar2 + 0x118) = uVar5;
  *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(*piVar1 + 0x548);
  Systems_Reload(0);
  uVar5 = Systems_GetInstalledBits();
  *(undefined4 *)(param_1 + 0x158) = uVar5;
  PlayerShip_LoadMountedWeapons(param_1,param_2);
  Dialog_BindActor(s_PLAYER_SCR_0053fa3c,iVar2,&DAT_005a5dd0);
  *(undefined4 *)(param_1 + 0x154) = DAT_005a5e24;
  *(undefined4 *)(param_1 + 0x150) = DAT_005a5e10;
  *(undefined4 *)(param_1 + 0x14c) = DAT_005a5e0c;
  return;
}

