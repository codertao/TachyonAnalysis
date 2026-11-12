
/* (mount, qty) pick up from a weapon mount (GATLING_GUN takes full load) */

int Loadout_TakeFromMount(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_80 [128];
  
  uVar1 = Player_GetCurrentShip();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar1);
  if ((((param_1 == 0) || (*(int *)(param_1 + 0xb0) == 0)) || (*(int *)(param_1 + 0xa9c) == 0)) ||
     (iVar5 = *(int *)(*(int *)(param_1 + 0xa9c) + 0x58), iVar5 == 0)) {
    return 0;
  }
  uVar6 = 1;
  if (1 < *(uint *)(iVar5 + 0x9c)) {
    uVar2 = Player_GetVarInt(local_80,param_1 + 0x40);
    if (param_2 <= uVar2) {
      iVar3 = __stricmp(*(undefined4 *)(param_1 + 0xa9c),s_GATLING_GUN_0054ffbc);
      uVar6 = param_2;
      if (iVar3 != 0) goto LAB_004767ff;
    }
    uVar6 = uVar2;
  }
LAB_004767ff:
  iVar3 = *(int *)(param_1 + 0xa9c);
  iVar4 = __stricmp(iVar3,s_GATLING_GUN_0054ffbc);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar5 + 0x9c);
  }
  else {
    *(uint *)(iVar3 + 0x54) = uVar6;
  }
  *(int *)(param_1 + 0xaa0) = *(int *)(param_1 + 0xaa0) - uVar6;
  Player_AddVarInt(local_80,param_1 + 0x40,-uVar6);
  iVar5 = Player_GetVarInt(local_80,param_1 + 0x40);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xa9c) = 0;
    *(undefined4 *)(param_1 + 0xaa0) = 0;
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,param_1 + 0xf8,0x20000);
    Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,s_NOT_USED_005478f8);
  }
  return iVar3;
}

