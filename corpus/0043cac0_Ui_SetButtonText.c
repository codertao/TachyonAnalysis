
/* sweep */

void Ui_SetButtonText(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x120) = 0;
    if (param_3 != 0) {
      str_sprintf((undefined1 *)(iVar1 + 0x120),param_3);
    }
  }
  return;
}

