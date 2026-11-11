
void FUN_00442f60(undefined *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  bool bVar4;
  
  bVar4 = (char)((uint)param_1 >> 8) == '\0';
  ppuVar3 = &PTR_GLBL_spacesav_17__00540a58;
  if (!bVar4) {
    param_1 = (undefined *)((uint)param_1 & 0xff);
  }
  if (PTR_GLBL_spacesav_17__00540a58 != (undefined *)0x0) {
    while (ppuVar3[1] != param_1) {
      ppuVar1 = ppuVar3 + 0x1c;
      ppuVar3 = ppuVar3 + 0x1c;
      if (*ppuVar1 == (undefined *)0x0) {
        return;
      }
    }
    iVar2 = *(int *)*ppuVar3;
    if (bVar4) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = iVar2 + -1;
    }
    *(int *)*ppuVar3 = iVar2;
    if (*(int *)*ppuVar3 < (int)ppuVar3[0x1a]) {
      *(undefined **)*ppuVar3 = ppuVar3[0x1b];
    }
    if ((int)ppuVar3[0x1b] < *(int *)*ppuVar3) {
      *(undefined **)*ppuVar3 = ppuVar3[0x1a];
    }
    if (*ppuVar3 == (undefined *)0x5b2c0c) {
      DAT_005a4020 = 0;
      FUN_00443440();
      iVar2 = Ui_GetButtonState(&g_UiManager,s_BtnHostGameSlot0_00540db8);
      if (iVar2 != 8) {
        set_button_state(&g_UiManager,s_BtnHostGameSlot0_00540db8,4);
      }
      Ui_RefreshWindow(&g_UiManager,s_WndHost_00540e4c,0,0);
    }
    if ((undefined4 *)*ppuVar3 == GLBL_spacesav) {
      str_sprintf(&DAT_005a4028,&DAT_00535eb8,GLBL_spacesav[0]);
      FUN_0043e6a0(&g_UiManager,ppuVar3 + 10,&DAT_005a4028);
      FUN_00443560(0);
      return;
    }
    str_sprintf(&DAT_005a41e0,&DAT_00540a28,ppuVar3 + 2,*(undefined4 *)*ppuVar3);
    FUN_0043e770(&g_UiManager,ppuVar3 + 10,&DAT_005a41e0);
  }
  return;
}

