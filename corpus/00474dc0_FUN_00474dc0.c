
void FUN_00474dc0(void)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulonglong local_8;
  
  iVar6 = FUN_0043bf10(&DAT_00583420,s_CFG_SELL_QUERY_005501d4);
  if ((DAT_005635fc != 0) && (iVar1 = *(int *)(DAT_005635fc + 0x58), iVar1 != 0)) {
    FUN_00474070(DAT_005635fc);
    iVar8 = *(int *)(DAT_005635fc + 0x54);
    if (iVar8 == 0) {
      uVar2 = *(uint *)(iVar1 + 0x9c);
      uVar7 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
      if (uVar7 < uVar2) {
        iVar8 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
      }
      else {
        iVar8 = FUN_00477550(uVar2,DAT_00563610);
      }
    }
    if (iVar8 != 0) {
      fVar3 = (float)iVar8 / (float)*(int *)(iVar1 + 0x9c);
      local_8 = (ulonglong)*(uint *)(iVar1 + 0x98);
      fVar4 = (float)*(uint *)(iVar1 + 0x94) * fVar3;
      FUN_0043e610(&DAT_00583420,s_TxtCFGItemCost_0054780c,0x10000);
      FUN_0043e610(&DAT_00583420,s_TxtCFGItemLabel_005477fc,0x10000);
      Ui_SetButtonFlag(&DAT_00583420,s_BtnCFGSell_00547774,0x80000);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGSell_00547774,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGLaunch_005501c4,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGShipBay_005501b4,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGLobby_005501a8,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGAvailUp_00550198,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGAvailDn_00550188,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGInvUp_00547918,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGInvDn_0054790c,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeWP_00547790,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGModeHW_00547780,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGShipLeft_00550178,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGShipRight_00550168,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGBuy1_0055015c,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGBuy2_00550150,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGBuy3_00550144,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGBuy4_00550138,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGSell1_0055012c,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGSell2_00550120,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGSell3_00550114,8);
      FUN_0043ce50(&DAT_00583420,s_BtnCFGSell4_00550108,8);
      FUN_0043f840(&DAT_00583420,s_IACFGCaution_00550014,0x20000);
      FUN_0043f840(&DAT_00583420,s_IACFGCaution2_00550004,0x20000);
      if (iVar6 == 0) {
        pcVar9 = s__Sell_item_for__d_credits__loss_o_005500d8;
      }
      else {
        pcVar9 = *(char **)(iVar6 + 0x40);
      }
      local_8._0_4_ = (undefined4)(longlong)ROUND((float)local_8 * fVar3 - fVar4);
      uVar5 = (undefined4)local_8;
      local_8._0_4_ = (undefined4)(longlong)ROUND(fVar4);
      str_sprintf(0x582ac0,pcVar9,(undefined4)local_8,uVar5);
      FUN_0043e6a0(&DAT_00583420,s_TxtCFGItemQuery_00550024,0x582ac0);
      FUN_0043e670(&DAT_00583420,s_TxtCFGItemQuery_00550024,0x10000);
      Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseCFG_0054ffc8,0,0);
      DAT_00562bd0 = 1;
      DAT_00563614 = 1;
    }
  }
  return;
}

