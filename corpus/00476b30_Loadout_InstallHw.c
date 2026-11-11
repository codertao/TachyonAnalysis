
/* (slot, item, image, qty) -> MOUNTED; AMMO_HOLD sets g_HasAmmoHold */

void Loadout_InstallHw(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_80 [128];
  
  uVar1 = Player_GetCurrentShip();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar1);
  if (((param_1 != 0) && (*(int *)(param_1 + 0xb0) != 0)) && (param_3 != 0)) {
    iVar2 = Loadout_MountCheck(param_2,param_1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xa9c) = param_2;
      *(undefined4 *)(param_1 + 0xaa0) = param_4;
      uVar1 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,param_1 + 0xf8);
      Loadout_SetMountIcon
                (uVar1,param_3,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),
                 *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                 *(undefined4 *)(param_1 + 0x158),2,2);
      FUN_0043f840(&GLBL_UI_ELEM_LIST,param_1 + 0xf8,0x20000);
      FUN_0043f5d0(&GLBL_UI_ELEM_LIST,param_1 + 0xb8,9);
      pcVar3 = *(char **)(param_1 + 0xa9c);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_NO_CARD_0053644c;
      }
      Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,pcVar3);
      Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x40,s_MOUNTED_0053648c);
      iVar2 = str_cmp(param_2,s_AMMO_HOLD_005362c0);
      if (iVar2 == 0) {
        g_HasAmmoHold = 1;
      }
    }
  }
  return;
}

