
/* sweep */

void Slots_ShowWinLine(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine1_00557f64,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine12_00557f40,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e050,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e134,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e218,1);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e050,0);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e134,1);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e218,2);
    ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayPanel1_00557f1c,0x20000);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayPanel1_00557f1c,1);
    pcVar2 = s_IAPayPanel1_00557f1c;
  }
  else if (iVar1 == 2) {
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine2_00557f58,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine22_00557f34,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e00c,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e0f0,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e1d4,1);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e00c,1);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e0f0,2);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e1d4,3);
    ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayPanel2_00557f10,0x20000);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayPanel2_00557f10,1);
    pcVar2 = s_IAPayPanel2_00557f10;
  }
  else {
    if (iVar1 != 3) goto LAB_00487308;
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine3_00557f4c,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayLine32_00557f28,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e094,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e178,1);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,&DAT_0056e25c,1);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e094,2);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e178,3);
    ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,&DAT_0056e25c,0);
    ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayPanel3_00557f04,0x20000);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAPayPanel3_00557f04,1);
    pcVar2 = s_IAPayPanel3_00557f04;
  }
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,pcVar2,0);
LAB_00487308:
  if (param_1[4] == 100000) {
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_PLAYER_GOT_LUCKY_00558080,1);
    SndTrig_PostEvent(s_SLOTS_WIN_777_00558070,&DAT_005833e0,&DAT_00583498);
  }
  return;
}

