
/* sweep */

void Ui_SetLabelValue100(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x100) = (int)param_3;
  }
  return;
}

