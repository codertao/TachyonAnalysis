
/* hover (0x10) -> normal on all buy/sell rows */

void Loadout_ClearRowHover(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = s_BtnCFGSell1_0054f138;
  pcVar6 = s_BtnCFGBuy1_0054e9f0;
  cVar2 = s_BtnCFGSell1_0054f138[0];
  while (cVar3 = s_BtnCFGBuy1_0054e9f0[0], cVar2 != '\0') {
    iVar4 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar5);
    if (iVar4 == 0x10) {
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar5,1);
    }
    pcVar1 = pcVar5 + 0x174;
    pcVar5 = pcVar5 + 0x174;
    cVar2 = *pcVar1;
  }
  while (cVar3 != '\0') {
    iVar4 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar6);
    if (iVar4 == 0x10) {
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar6,1);
    }
    pcVar5 = pcVar6 + 0x174;
    pcVar6 = pcVar6 + 0x174;
    cVar3 = *pcVar5;
  }
  return;
}

