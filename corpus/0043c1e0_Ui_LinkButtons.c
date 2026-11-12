
/* sweep: guess */

void Ui_LinkButtons(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  iVar2 = Ui_FindButton(param_1,param_3);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    *(int *)(iVar1 + 0x238) = iVar2;
  }
  return;
}

