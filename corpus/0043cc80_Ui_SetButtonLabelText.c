
/* sweep */

void Ui_SetButtonLabelText(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    Ui_SetLabelText(param_1,param_2,param_3);
  }
  return;
}

