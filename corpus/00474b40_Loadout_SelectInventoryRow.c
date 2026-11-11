
/* (index) select sell row, show item info */

void Loadout_SelectInventoryRow(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar4 = s_BtnCFGSell1_0054f138;
  cVar2 = s_BtnCFGSell1_0054f138[0];
  if (g_LoadoutDragging == 0) {
    while (cVar2 != '\0') {
      iVar3 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar4);
      if (iVar3 != 8) {
        if (iVar5 == param_1) {
          DAT_005635fc = *(int *)(pcVar4 + 0x100);
          if (DAT_005635fc != 0) {
            *(undefined4 *)(DAT_005635fc + 0x54) = 0;
            Loadout_SetMode(*(undefined4 *)(*(int *)(pcVar4 + 0x100) + 0x50));
          }
        }
        else {
          set_button_state(&GLBL_UI_ELEM_LIST,pcVar4,1);
        }
      }
      pcVar1 = pcVar4 + 0x174;
      pcVar4 = pcVar4 + 0x174;
      iVar5 = iVar5 + 1;
      cVar2 = *pcVar1;
    }
    pcVar4 = s_BtnCFGBuy1_0054e9f0;
    cVar2 = s_BtnCFGBuy1_0054e9f0[0];
    while (cVar2 != '\0') {
      iVar5 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar4);
      if (iVar5 != 8) {
        set_button_state(&GLBL_UI_ELEM_LIST,pcVar4,1);
      }
      pcVar1 = pcVar4 + 0x174;
      pcVar4 = pcVar4 + 0x174;
      cVar2 = *pcVar1;
    }
    DAT_005635f8 = 0;
    DAT_00563600 = 0;
    if (DAT_005635fc != 0) {
      Loadout_HighlightMounts(DAT_005635fc);
    }
    Loadout_UpdateSellBtn();
    Loadout_SelectItem(DAT_005635fc,0);
  }
  return;
}

