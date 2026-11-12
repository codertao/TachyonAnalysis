
/* sweep: guess */

void Ui_BindButtonToLabel(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  iVar2 = find_ui_elem_by_name(param_1,param_3);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    *(int *)(iVar1 + 0x1e4) = iVar2;
    str_sprintf(iVar1 + 0x1a0,iVar2 + 0x80);
  }
  return;
}

