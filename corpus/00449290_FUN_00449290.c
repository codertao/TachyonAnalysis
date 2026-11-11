
void FUN_00449290(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar4 = s_BtnCFGSell1_00545d60;
  cVar2 = s_BtnCFGSell1_00545d60[0];
  if (DAT_00562c74 == 0) {
    while (cVar2 != '\0') {
      iVar3 = Ui_GetButtonState(&g_UiManager,pcVar4);
      if (iVar3 != 8) {
        if (iVar5 == param_1) {
          DAT_00562c68 = *(int *)(pcVar4 + 0x100);
          if (DAT_00562c68 != 0) {
            MpCfg_SetMode(*(undefined4 *)(DAT_00562c68 + 0x50));
          }
        }
        else {
          set_button_state(&g_UiManager,pcVar4,1);
        }
      }
      pcVar1 = pcVar4 + 0x174;
      pcVar4 = pcVar4 + 0x174;
      iVar5 = iVar5 + 1;
      cVar2 = *pcVar1;
    }
    DAT_00562c64 = 0;
    DAT_00562c6c = 0;
    if (DAT_00562c68 != 0) {
      MpCfg_HighlightMounts(DAT_00562c68);
    }
    FUN_00449160();
    MpCfg_SelectItem(DAT_00562c68,0);
  }
  return;
}

