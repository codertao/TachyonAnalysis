
/* sweep */

void Ui_SetWindowPos(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x44) = param_3;
    *(undefined4 *)(iVar1 + 0x48) = param_4;
  }
  return;
}

