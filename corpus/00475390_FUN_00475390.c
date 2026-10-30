
void FUN_00475390(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  ulonglong local_8;
  
  iVar4 = FUN_0043bf10(&DAT_00583420,s_STAT_CREDITS_00550060);
  if (DAT_005635fc != 0) {
    iVar1 = *(int *)(DAT_005635fc + 0x58);
    if (iVar1 == 0) {
      return;
    }
    FUN_00474070(DAT_005635fc);
    iVar2 = *(int *)(iVar1 + 0x9c);
    local_8 = (ulonglong)*(uint *)(iVar1 + 0x94);
    iVar6 = *(int *)(DAT_005635fc + 0x54);
    if (iVar6 == 0) {
      uVar3 = *(uint *)(iVar1 + 0x9c);
      uVar5 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
      if (uVar5 < uVar3) {
        iVar6 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
      }
      else {
        iVar6 = FUN_00477550(uVar3,DAT_00563610);
      }
    }
    if (*(int *)(DAT_005635fc + 0x54) == 0) {
      FUN_0046be30(DAT_005635fc + 0x20,DAT_005635fc,-iVar6);
    }
    local_8._0_4_ = (undefined4)(longlong)ROUND((float)iVar6 * ((float)local_8 / (float)iVar2));
    FUN_004699d0((undefined4)local_8);
    if (iVar4 == 0) {
      pcVar8 = s__Credits_00550054;
    }
    else {
      pcVar8 = *(char **)(iVar4 + 0x40);
    }
    uVar7 = FUN_004699a0();
    str_sprintf(&DAT_00577f20,s__s___d_005367b8,pcVar8,uVar7);
    FUN_0043e6a0(&DAT_00583420,s_TxtCFGCreditLabel_00550040,&DAT_00577f20);
    if (DAT_005635fc != 0) {
      iVar4 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
      if (iVar4 == 0) {
        DAT_005635fc = 0;
      }
      else if (DAT_005635fc != 0) goto LAB_00475518;
    }
  }
  FUN_00474a40(0xffffffff);
  FUN_00474430();
  FUN_0043ce50(&DAT_00583420,s_BtnCFGSell_00547774,8);
  Ui_SetButtonFlag(&DAT_00583420,s_BtnCFGSell_00547774,0x80000);
LAB_00475518:
  FUN_00473500();
  if (DAT_005635fc != 0) {
    FUN_00474580();
    FUN_004745f0(DAT_005635fc,0);
  }
  FUN_00474010(0);
  Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseCFG_0054ffc8,0,0);
  return;
}

