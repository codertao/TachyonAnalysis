
undefined4 MpCfg_MountWeapon(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_88;
  undefined1 local_80 [128];
  
  local_88 = 0;
  uVar1 = Player_GetCurrentShip();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar1);
  if (((param_1 != 0) && (*(int *)(param_1 + 0xb0) != 0)) && (param_3 != 0)) {
    iVar2 = Mount_Accepts(param_2,param_1);
    if (iVar2 != 0) {
      uVar3 = Player_GetVarInt(local_80,param_1 + 0x40);
      uVar4 = Mount_GetCapacity(param_2,param_1);
      if (uVar3 < uVar4) {
        iVar2 = Mount_GetCapacity(param_2,param_1);
        uVar3 = iVar2 - uVar3;
        if (uVar3 < param_4) {
          local_88 = param_4 - uVar3;
          param_4 = uVar3;
        }
        *(int *)(param_1 + 0xa9c) = param_2;
        *(uint *)(param_1 + 0xaa0) = *(int *)(param_1 + 0xaa0) + param_4;
        uVar1 = find_ui_elem_by_id_(&g_UiManager,param_1 + 0xf8);
        MpCfg_SetMountIcon(uVar1,param_3,*(undefined4 *)(param_1 + 0x150),
                           *(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x148),
                           *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x158),2,2);
        FUN_0043f840(&g_UiManager,param_1 + 0xf8,0x20000);
        FUN_0043f5d0(&g_UiManager,param_1 + 0xb8,9);
        pcVar5 = *(char **)(param_1 + 0xa9c);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = s_NOT_USED_005478f8;
        }
        Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,pcVar5);
        Player_AddVarInt(local_80,param_1 + 0x40,param_4);
        if (local_88 == 0) {
          return 1;
        }
        *(int *)(param_2 + 0x54) = local_88;
      }
    }
  }
  return 0;
}

