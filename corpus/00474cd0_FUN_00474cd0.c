
void FUN_00474cd0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar2 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_STAT_CREDITS_00550060);
  if ((DAT_005635f8 != 0) && (iVar1 = *(int *)(DAT_005635f8 + 0x58), iVar1 != 0)) {
    uVar5 = *(uint *)(iVar1 + 0x98);
    uVar3 = FUN_004699a0();
    if (uVar5 <= uVar3) {
      FUN_004699d0(-uVar5);
      if (iVar2 == 0) {
        pcVar6 = s__Credits_00550054;
      }
      else {
        pcVar6 = *(char **)(iVar2 + 0x40);
      }
      uVar4 = FUN_004699a0();
      str_sprintf(&DAT_00577f20,s__s___d_005367b8,pcVar6,uVar4);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtCFGCreditLabel_00550040,&DAT_00577f20);
      FUN_0046be30(DAT_005635f8 + 0x20,DAT_005635f8,*(undefined4 *)(iVar1 + 0x9c));
      uVar5 = FUN_004699a0();
      if (uVar5 < *(uint *)(iVar1 + 0x98)) {
        set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,8);
      }
      FUN_00473500();
      FUN_004740b0(DAT_005635f8);
      Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
    }
  }
  return;
}

