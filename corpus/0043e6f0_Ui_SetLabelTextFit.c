
/* sweep: guess */

void Ui_SetLabelTextFit(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar1 = param_1;
  iVar3 = find_ui_elem_by_name(param_1,param_2);
  if (iVar3 != 0) {
    Mnu_DrawText(iVar1,iVar3 + 0x80,*(undefined4 *)(iVar3 + 0x104),&param_2,&param_1);
    *(int *)(iVar3 + 0x10c) = param_3;
    *(int *)(iVar3 + 0x110) = param_4;
    *(int *)(iVar3 + 0x114) = param_2 + param_3;
    *(int *)(iVar3 + 0x118) = param_1 + param_4;
    sbi_label_flags_11c(iVar1,iVar2,4);
  }
  return;
}

