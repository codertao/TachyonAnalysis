
/* sweep: guess */

void SbLobby_OnHoverLeave(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  g_TitleHoverState = g_TitleHoverState + -1;
  if (g_TitleHoverState < 0) {
    g_TitleHoverState = 0;
    pcVar2 = s_Cursor1_0053ff4c;
  }
  else if (g_TitleHoverState == 0) {
    pcVar2 = s_Cursor1_0053ff4c;
  }
  else {
    pcVar2 = s_Cursor2_005444a0;
  }
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,pcVar2);
  if ((0 < param_1) && (iVar1 = TitleHover_Get_stub(), iVar1 < 1)) {
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtMainItemSel_0054e684,&DAT_00562b14);
  }
  switch(param_1) {
  case 1:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor1_0054e618,0xffffffff);
    pcVar2 = s_IAMonitor1_0054e618;
    break;
  case 2:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor2_0054e60c,0xffffffff);
    pcVar2 = s_IAMonitor2_0054e60c;
    break;
  case 3:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor3_0054e600,0xffffffff);
    pcVar2 = s_IAMonitor3_0054e600;
    break;
  case 4:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor4_0054e5f4,0xffffffff);
    pcVar2 = s_IAMonitor4_0054e5f4;
    break;
  case 5:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor5_0054e5e8,0xffffffff);
    pcVar2 = s_IAMonitor5_0054e5e8;
    break;
  case 6:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,0xffffffff);
    ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,0,&LAB_0046ffb0,0);
    Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_BIGDOORROLL_DOWN_0054e668);
    return;
  case 7:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,0xffffffff);
    ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,0,&LAB_0046ffb0,0);
    Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_EXITDOORROLL_DOWN_0054e64c);
    return;
  case 8:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,0xffffffff);
    pcVar2 = s_IASlotMachine1_0054e5d8;
    break;
  case 9:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,0xffffffff);
    pcVar2 = s_IASlotMachine2_0054e5c8;
    break;
  case 10:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,0xffffffff);
    pcVar2 = s_IASlotMachine3_0054e5b8;
    break;
  case 0xb:
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,0xffffffff);
    pcVar2 = s_IASlotMachine4_0054e5a8;
    break;
  default:
    goto switchD_0046f9a1_default;
  }
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,pcVar2,0,&LAB_0046ffb0,0);
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_SCREENROLL_DOWN_0054e634);
switchD_0046f9a1_default:
  return;
}

