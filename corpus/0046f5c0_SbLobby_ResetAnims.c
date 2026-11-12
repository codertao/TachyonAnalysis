
/* sweep */

void SbLobby_ResetAnims(void)

{
  undefined4 uVar1;
  
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor1_0054e618,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor2_0054e60c,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor3_0054e600,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor4_0054e5f4,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMonitor5_0054e5e8,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,0);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAMonitor1_0054e618,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAMonitor2_0054e60c,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAMonitor3_0054e600,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAMonitor4_0054e5f4,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IAMonitor5_0054e5e8,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,0);
  ImageArea_SetFrame(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,0);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IAMonitor1_0054e618,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAMonitor1_0054e618,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IAMonitor2_0054e60c,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAMonitor2_0054e60c,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IAMonitor3_0054e600,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAMonitor3_0054e600,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IAMonitor4_0054e5f4,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAMonitor4_0054e5f4,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IAMonitor5_0054e5e8,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IAMonitor5_0054e5e8,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,uVar1);
  uVar1 = ImageArea_GetValueDC(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,&LAB_0046ffb0,0);
  ImageArea_SetRect(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,uVar1);
  return;
}

