
void FUN_004853e0(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_4;
  
  piVar5 = &DAT_00587a64;
  DAT_0056e3a8 = &DAT_00587a64;
  DAT_0056e3a4 = 0;
  iVar3 = Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_4);
  uVar1 = DAT_0056e3a4;
  piVar2 = DAT_0056e3a8;
  if ((iVar3 != 0) &&
     (iVar3 = Var_GetTable(s_SHIP_TYPE_0053fbd0), uVar1 = DAT_0056e3a4, piVar2 = DAT_0056e3a8,
     iVar3 != 0)) {
    uVar4 = Var_GetKeyByIndex(iVar3,local_4);
    uVar6 = 0;
    do {
      if ((*piVar5 != 0) &&
         (iVar3 = FUN_004c67c0(piVar5 + 10,uVar4), uVar1 = uVar6, piVar2 = piVar5, iVar3 == 0))
      break;
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 0x6d;
      uVar1 = DAT_0056e3a4;
      piVar2 = DAT_0056e3a8;
    } while (uVar6 < 5);
  }
  DAT_0056e3a8 = piVar2;
  DAT_0056e3a4 = uVar1;
  if (DAT_0056e3a8[0x34] == 0) {
    FUN_0043ce50(&DAT_00583420,s_BtnShipYardConfig_00557a94,8);
    return;
  }
  FUN_0043ce50(&DAT_00583420,s_BtnShipYardConfig_00557a94,1);
  return;
}

