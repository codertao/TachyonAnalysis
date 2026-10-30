
void FUN_00484230(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_0056f3e4 = 0;
  FUN_0043ce50(&DAT_00583420,s_BtnSPConfig_00557974,8);
  FUN_0043ce50(&DAT_00583420,s_BtnSPSell_00557968,8);
  Ui_SetButtonFlag(&DAT_00583420,s_BtnSPSell_00557968,0x80000);
  FUN_0043ce50(&DAT_00583420,s_BtnSPPurchase_00557958,8);
  FUN_0043c150(&DAT_00583420,s_BtnSPPurchase_00557958,0x80000);
  puVar1 = &DAT_0056f464;
  iVar2 = 5;
  do {
    if (puVar1[-0x20] == '\0') {
      uVar3 = 8;
    }
    else {
      uVar3 = 1;
    }
    FUN_0043ce50(&DAT_00583420,puVar1,uVar3);
    puVar1 = puVar1 + 0x148;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0043f620(&DAT_00583420,s_IALineArt_0055794c,0x20000);
  FUN_00482f80();
  FUN_00482a00(0);
  return;
}

