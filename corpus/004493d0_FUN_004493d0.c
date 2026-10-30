
void FUN_004493d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_0046e900();
  iVar3 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x20) + -1;
    iVar6 = iVar2;
    do {
      iVar5 = iVar6 + param_1;
      iVar6 = iVar1;
      if ((-1 < iVar5) && (iVar6 = iVar5, iVar1 < iVar5)) {
        iVar6 = 0;
      }
      if (iVar2 == iVar6) goto LAB_00449435;
      iVar5 = Var_GetKeyByIndex(iVar3,iVar6);
    } while (iVar5 == 0);
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,iVar6);
LAB_00449435:
    FUN_00449750();
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,0,0);
    FUN_0044a930();
    if (DAT_00562c64 != 0) {
      FUN_0044aa40(DAT_00562c64);
    }
    if (DAT_00562c68 != 0) {
      FUN_0044aa40(DAT_00562c68);
    }
    FUN_0048b6f0(1);
    FUN_0048b6f0(2);
    uVar4 = Ship_GetCurrentModel();
    FUN_00446d40(&DAT_00546c38,uVar4);
    uVar4 = Ship_GetCurrentModel();
    str_sprintf(&DAT_005a6114,uVar4);
    FUN_00448360();
  }
  return;
}

