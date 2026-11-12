
/* sweep */

void OptMenu_Refresh(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == (undefined4 *)0x0) || (iVar4 = param_1[0x12], iVar4 == 0)) {
    return;
  }
  iVar3 = 0;
  iVar2 = 0;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x68)) {
    iVar1 = *(int *)(iVar4 + 0x24);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
  }
  do {
    do {
      iVar4 = *(int *)*param_1;
      if (param_2 == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      *(int *)*param_1 = iVar4;
      if (*(int *)*param_1 < iVar2) {
        *(int *)*param_1 = iVar3;
      }
      if (iVar3 < *(int *)*param_1) {
        *(int *)*param_1 = iVar2;
      }
      iVar4 = param_1[0x12];
    } while (iVar4 == 0);
    do {
      if (*(int *)(iVar4 + 0x24) == *(int *)*param_1) {
        if (iVar4 != 0) {
          Ui_SetLabelTextById(DAT_00571280,param_1 + 2,iVar4 + 0x28);
          OptMenu_DrawItem(*(undefined4 *)(iVar4 + 0x24),param_1);
          Ui_RefreshWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0,0);
          return;
        }
        break;
      }
      iVar4 = *(int *)(iVar4 + 0x68);
    } while (iVar4 != 0);
  } while( true );
}

