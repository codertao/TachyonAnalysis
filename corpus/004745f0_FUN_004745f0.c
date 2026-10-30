
void FUN_004745f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  char *pcVar10;
  ulonglong local_8;
  
  if ((param_1 != 0) && (iVar9 = *(int *)(param_1 + 0x58), iVar9 != 0)) {
    iVar2 = FUN_0043bf10(&DAT_00583420,s_CFG_FOR_005500d0);
    iVar3 = FUN_0043bf10(&DAT_00583420,s_CFG_CREDIT_AMT_005500c0);
    if (param_2 == 0) {
      iVar4 = FUN_0043bf10(&DAT_00583420,s_MAINT_BUYBACK_0055008c);
      if (DAT_005635fc == 0) {
        if ((DAT_00563600 != 0) && (iVar9 = *(int *)(DAT_00563600 + 0x58), iVar9 != 0)) {
          if (*(int *)(iVar9 + 0x9c) == 0) {
            if (iVar3 == 0) {
              pcVar10 = s__credits_005500b4;
            }
            else {
              pcVar10 = *(char **)(iVar3 + 0x40);
            }
            if (iVar4 == 0) {
              pcVar5 = s__BuyBack_price__0055007c;
            }
            else {
              pcVar5 = *(char **)(iVar4 + 0x40);
            }
            str_sprintf(&DAT_00572080,s__s___d__s_00550070,pcVar5,*(undefined4 *)(iVar9 + 0x94),
                        pcVar10);
          }
          else {
            local_8 = (ulonglong)*(uint *)(iVar9 + 0x94);
            local_8._0_4_ =
                 (undefined4)
                 (longlong)
                 ROUND(((float10)local_8 / (float10)*(int *)(iVar9 + 0x9c)) *
                       (float10)*(int *)(DAT_00563600 + 0x54));
            if (iVar3 == 0) {
              pcVar10 = s__credits_005500b4;
            }
            else {
              pcVar10 = *(char **)(iVar3 + 0x40);
            }
            if (iVar2 == 0) {
              puVar8 = &DAT_005500ac;
            }
            else {
              puVar8 = *(undefined **)(iVar2 + 0x40);
            }
            if (iVar4 == 0) {
              pcVar5 = s__BuyBack_price__0055007c;
            }
            else {
              pcVar5 = *(char **)(iVar4 + 0x40);
            }
            str_sprintf(&DAT_00572080,s__s___d__s__d__s_0055009c,pcVar5,
                        *(int *)(DAT_00563600 + 0x54),puVar8,(undefined4)local_8,pcVar10);
          }
        }
        FUN_0043ce50(&DAT_00583420,s_BtnCFGSell_00547774,8);
        Ui_SetButtonFlag(&DAT_00583420,s_BtnCFGSell_00547774,0x80000);
        FUN_0043ce50(&DAT_00583420,s_BtnCFGPurchase_00547764,8);
        Ui_SetButtonFlag(&DAT_00583420,s_BtnCFGPurchase_00547764,0x80000);
      }
      else {
        iVar9 = *(int *)(DAT_005635fc + 0x58);
        if (iVar9 != 0) {
          uVar1 = *(uint *)(iVar9 + 0x9c);
          if (uVar1 == 0) {
            if (iVar3 == 0) {
              pcVar10 = s__credits_005500b4;
            }
            else {
              pcVar10 = *(char **)(iVar3 + 0x40);
            }
            if (iVar4 == 0) {
              pcVar5 = s__BuyBack_price__0055007c;
            }
            else {
              pcVar5 = *(char **)(iVar4 + 0x40);
            }
            str_sprintf(&DAT_00572080,s__s___d__s_00550070,pcVar5,*(undefined4 *)(iVar9 + 0x94),
                        pcVar10);
          }
          else {
            local_8 = (ulonglong)*(uint *)(iVar9 + 0x94);
            uVar6 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
            if (uVar6 < uVar1) {
              iVar7 = FUN_0046be00(DAT_005635fc + 0x20,DAT_005635fc);
            }
            else {
              iVar7 = FUN_00477550(uVar1,DAT_00563610);
            }
            local_8._0_4_ =
                 (undefined4)(longlong)ROUND((float)iVar7 * ((float)local_8 / (float)(int)uVar1));
            if (iVar3 == 0) {
              pcVar10 = s__credits_005500b4;
            }
            else {
              pcVar10 = *(char **)(iVar3 + 0x40);
            }
            if (iVar2 == 0) {
              puVar8 = &DAT_005500ac;
            }
            else {
              puVar8 = *(undefined **)(iVar2 + 0x40);
            }
            if (iVar4 == 0) {
              pcVar5 = s__BuyBack_price__0055007c;
            }
            else {
              pcVar5 = *(char **)(iVar4 + 0x40);
            }
            str_sprintf(&DAT_00572080,s__s___d__s__d__s_0055009c,pcVar5,iVar7,puVar8,
                        (undefined4)local_8,pcVar10);
          }
        }
      }
    }
    else {
      iVar4 = FUN_0043bf10(&DAT_00583420,s_MAINT_PRICE_0054ffe8);
      if (iVar3 == 0) {
        pcVar10 = s__credits_005500b4;
      }
      else {
        pcVar10 = *(char **)(iVar3 + 0x40);
      }
      if (iVar2 == 0) {
        puVar8 = &DAT_005500ac;
      }
      else {
        puVar8 = *(undefined **)(iVar2 + 0x40);
      }
      if (iVar4 == 0) {
        pcVar5 = s__Price__0054ffe0;
      }
      else {
        pcVar5 = *(char **)(iVar4 + 0x40);
      }
      str_sprintf(&DAT_00572080,s__s___d__s__d__s_0055009c,pcVar5,*(undefined4 *)(iVar9 + 0x9c),
                  puVar8,*(undefined4 *)(iVar9 + 0x98),pcVar10);
    }
    if (((*(int **)(iVar9 + 0x60) != (int *)0x0) && (**(int **)(iVar9 + 0x60) != 0)) &&
       (iVar2 = iVar9 + 0x20, iVar2 != 0)) {
      FUN_0043e6a0(&DAT_00583420,s_TxtCFGItemCost_0054780c,&DAT_00572080);
      if (*(int **)(iVar9 + 0x60) != (int *)0x0) {
        iVar2 = **(int **)(iVar9 + 0x60);
      }
      FUN_0043e6a0(&DAT_00583420,s_TxtCFGItemLabel_005477fc,iVar2);
      return;
    }
    FUN_0043e6a0(&DAT_00583420,s_TxtCFGItemCost_0054780c,&DAT_00572080);
    FUN_0043e6a0(&DAT_00583420,s_TxtCFGItemLabel_005477fc,&DAT_00562b14);
  }
  return;
}

