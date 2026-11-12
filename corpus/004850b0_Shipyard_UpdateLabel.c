
/* sweep */

void Shipyard_UpdateLabel(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (DAT_0056e3a8 != 0) {
    uVar2 = 0xffffffff;
    pcVar4 = (char *)(DAT_0056e3a8 + 0x4c);
    do {
      pcVar5 = pcVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar4 = pcVar5 + -uVar2;
    pcVar5 = (char *)&DAT_00563d80;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtSYShipLabel_00557aa8,&DAT_00563d80);
    if (*(int *)(DAT_0056e3a8 + 0xd0) != 0) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardConfig_00557a94,1);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardLaunch_00557a80,1);
      return;
    }
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardConfig_00557a94,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardLaunch_00557a80,8);
  }
  return;
}

