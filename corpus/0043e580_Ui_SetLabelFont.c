
/* sweep */

void Ui_SetLabelFont(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = find_ui_elem_by_name(param_1,param_2);
  iVar2 = Mnu_FindFont(param_1,param_3);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    str_sprintf(iVar1 + 0x80,param_3);
  }
  return;
}

