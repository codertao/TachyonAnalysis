
/* sweep */

void OptMenu_DrawItem(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = param_2 + 0x90;
  if (*(char *)(param_2 + 0x90) == '\0') {
    return;
  }
  iVar2 = Ui_FindButton(DAT_00571280,param_2 + 0x50);
  set_flag_10c_on_elem_by_id(DAT_00571280,iVar1,0x20000);
  if (param_1 == 0) {
    if (*(char *)(param_2 + 0xd0) == '\0') goto LAB_00480bd8;
    ImageArea_SetImage(DAT_00571280,iVar1,param_2 + 0xd0);
  }
  else if (param_1 == 1) {
    if (*(char *)(param_2 + 0x110) == '\0') goto LAB_00480bd8;
    ImageArea_SetImage(DAT_00571280,iVar1,param_2 + 0x110);
  }
  else {
    if ((param_1 != 2) || (*(char *)(param_2 + 0x150) == '\0')) goto LAB_00480bd8;
    ImageArea_SetImage(DAT_00571280,iVar1,param_2 + 0x150);
  }
  ImageArea_ClearFlags(DAT_00571280,iVar1,0x20000);
LAB_00480bd8:
  if (iVar2 != 0) {
    ImageArea_StepFrame(DAT_00571280,iVar1,*(undefined4 *)(iVar2 + 0xd4),
                        *(undefined4 *)(iVar2 + 0xd8));
  }
  return;
}

