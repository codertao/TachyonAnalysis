
/* sweep: guess */

void Ui_SetButtonImage(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xd4) = param_3;
    *(int *)(iVar1 + 0xd8) = param_4;
    local_10 = param_3;
    local_c = param_4;
    local_8 = *(int *)(iVar1 + 200) + param_3;
    local_4 = *(int *)(iVar1 + 0xcc) + param_4;
    Ui_SetLabelColor(param_1,iVar1,&local_10);
  }
  return;
}

