
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SbWing_ShowDetails(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_8;
  
  iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_WING_HIRECOST_005597d4);
  iVar2 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_WING_FEE_005597c8);
  SbWing_UpdateCredits();
  if (DAT_0056c488 == 0) {
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtWingName_00559778,&DAT_00562b14);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingCurrent_00559720,0x10000);
    DAT_0056c380 = 0;
  }
  else {
    if (iVar2 == 0) {
      pcVar4 = s__Fee___d_percent_005597b4;
    }
    else {
      pcVar4 = *(char **)(iVar2 + 0x40);
    }
    if (iVar1 == 0) {
      pcVar5 = s__Hire_Cost___d_005597a4;
    }
    else {
      pcVar5 = *(char **)(iVar1 + 0x40);
    }
    if (*(undefined4 **)(DAT_0056c488 + 0x74) == (undefined4 *)0x0) {
      pcVar3 = s__Wingman_Name_00559794;
    }
    else {
      pcVar3 = (char *)**(undefined4 **)(DAT_0056c488 + 0x74);
    }
    str_sprintf(&DAT_005a41e0,s__s_c_c_s_c_c_s_00559784,pcVar3,0xd,10,pcVar5,0xd,10,pcVar4);
    local_8 = (undefined4)(longlong)ROUND(*(float *)(DAT_0056c488 + 0xa4) * _DAT_0052ec38);
    str_sprintf(&DAT_0056c380,&DAT_005a41e0,*(undefined4 *)(DAT_0056c488 + 0xa0),local_8);
    if (*(undefined4 **)(DAT_0056c488 + 0x74) == (undefined4 *)0x0) {
      pcVar4 = s__Wingman_Name_00559794;
    }
    else {
      pcVar4 = (char *)**(undefined4 **)(DAT_0056c488 + 0x74);
    }
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtWingName_00559778,pcVar4);
  }
  if (DAT_00563e28 == 0) {
    iVar1 = Wingman_GetCurrent();
    if (iVar1 != 0) {
      clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingCurrent_00559720,0x10000);
    }
  }
  else {
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtWingCurrent_00559720,0x10000);
  }
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtWingData_0055976c,&DAT_0056c380);
  return;
}

