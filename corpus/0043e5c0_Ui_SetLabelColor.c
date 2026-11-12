
/* sweep: guess */

void Ui_SetLabelColor(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(param_1,param_2);
  if ((iVar1 != 0) && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(iVar1 + 0x10c) = *param_3;
    *(undefined4 *)(iVar1 + 0x110) = param_3[1];
    *(undefined4 *)(iVar1 + 0x114) = param_3[2];
    *(undefined4 *)(iVar1 + 0x118) = param_3[3];
    sbi_label_flags_11c(param_1,param_2,4);
  }
  return;
}

