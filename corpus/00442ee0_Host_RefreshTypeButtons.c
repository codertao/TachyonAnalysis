
/* sweep */

void Host_RefreshTypeButtons(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_GLBL_spacesav_17__00540a58;
  puVar2 = PTR_GLBL_spacesav_17__00540a58;
  while (puVar2 != (undefined *)0x0) {
    if ((undefined4 *)*ppuVar3 == GLBL_spacesav) {
      str_sprintf(&DAT_005a4028,&DAT_00535eb8,GLBL_spacesav[0]);
      Ui_SetLabelText(&g_UiManager,ppuVar3 + 10,&DAT_005a4028);
    }
    else {
      str_sprintf(&DAT_005a41e0,&DAT_00540a28,ppuVar3 + 2,*(undefined4 *)*ppuVar3);
      Ui_SetLabelTextById(&g_UiManager,ppuVar3 + 10,&DAT_005a41e0);
    }
    ppuVar1 = ppuVar3 + 0x1c;
    ppuVar3 = ppuVar3 + 0x1c;
    puVar2 = *ppuVar1;
  }
  return;
}

