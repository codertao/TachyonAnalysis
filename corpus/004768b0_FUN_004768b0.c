
undefined4 FUN_004768b0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int local_84;
  undefined1 local_80 [128];
  
  uVar5 = 0;
  local_84 = 0;
  uVar1 = FUN_0046e900();
  str_sprintf(local_80,s_SHIP__02d_DATA_0053643c,uVar1);
  if (((param_1 == 0) || (*(int *)(param_1 + 0xb0) == 0)) || (param_3 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa9c) != 0) {
    uVar5 = FUN_0046be00(local_80,param_1 + 0x40);
    uVar2 = FUN_00449f70(param_2,param_1);
    if (uVar2 <= uVar5) {
      return 0;
    }
  }
  iVar3 = FUN_00449f70(param_2,param_1);
  uVar2 = iVar3 - uVar5;
  if (uVar2 < param_4) {
    local_84 = param_4 - uVar2;
    param_4 = uVar2;
  }
  *(int *)(param_1 + 0xa9c) = param_2;
  iVar3 = str_cmp(param_2,s_GATLING_GUN_0054ffbc);
  if (iVar3 == 0) {
    iVar3 = FUN_00477550(*(undefined4 *)(*(int *)(param_2 + 0x58) + 0x9c),DAT_00563610);
  }
  else {
    iVar3 = *(int *)(param_1 + 0xaa0) + param_4;
  }
  *(int *)(param_1 + 0xaa0) = iVar3;
  uVar1 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,param_1 + 0xf8);
  FUN_00473110(uVar1,param_3,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),
               *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
               *(undefined4 *)(param_1 + 0x158),2,2);
  FUN_0043f840(&GLBL_UI_ELEM_LIST,param_1 + 0xf8,0x20000);
  FUN_0043f5d0(&GLBL_UI_ELEM_LIST,param_1 + 0xb8,9);
  pcVar4 = *(char **)(param_1 + 0xa9c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = s_NOT_USED_005478f8;
  }
  Var_SetStr(g_PlayerVarStore,local_80,param_1 + 0x20,pcVar4);
  FUN_0046bde0(local_80,param_1 + 0x40,uVar5 + param_4);
  if (local_84 != 0) {
    *(int *)(param_2 + 0x54) = local_84;
    return 0;
  }
  return 1;
}

