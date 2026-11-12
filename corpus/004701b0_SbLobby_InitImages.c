
/* sweep */

void SbLobby_InitImages(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_80 [128];
  
  iVar6 = DAT_0058971c;
  iVar5 = DAT_00589714;
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IADoor1_0054e62c,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IADoor2_0054e624,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IASlotMachine1_0054e5d8,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IASlotMachine2_0054e5c8,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IASlotMachine3_0054e5b8,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IASlotMachine4_0054e5a8,0x20000);
  uVar4 = 1;
  do {
    str_sprintf(&DAT_005a41e0,s_IAMonitor_d_0054e780,uVar4);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x20000);
    str_sprintf(&DAT_005a41e0,s_IAPanel_d_0054e774,uVar4);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x20000);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x11);
  iVar1 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768);
  iVar2 = Starbase_FindMaterial(s_BackGround_0054e75c);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    str_sprintf(iVar1 + 0xa8,s_IMAGE__s_005444a8,iVar2 + 0x40);
    uVar3 = MnuImage_Find(&GLBL_UI_ELEM_LIST,iVar1 + 0xa8);
    *(undefined4 *)(iVar1 + 0xe8) = uVar3;
    *(undefined4 *)(iVar1 + 0x4c) = 0x280;
    *(undefined4 *)(iVar1 + 0x50) = 0x1e0;
  }
  uVar4 = 0;
  if (DAT_00589718 != 0) {
    do {
      set_button_state(&GLBL_UI_ELEM_LIST,iVar6,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,iVar6,0x80000);
      iVar1 = Starbase_FindMaterial(iVar6 + 0x40);
      if (iVar1 != 0) {
        set_button_state(&GLBL_UI_ELEM_LIST,iVar6,1);
        Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,iVar6,0x80000);
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar1 + 0x40);
        Ui_SetButtonImageByName(&GLBL_UI_ELEM_LIST,iVar6,local_80);
        Ui_SetButtonImage(&GLBL_UI_ELEM_LIST,iVar6,*(undefined4 *)(iVar6 + 0x80),
                          *(undefined4 *)(iVar6 + 0x84));
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x88;
    } while (uVar4 < DAT_00589718);
  }
  uVar4 = 0;
  if (DAT_00589710 != 0) {
    do {
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,iVar5,0x20000);
      iVar6 = Starbase_FindMaterial(iVar5 + 0x40);
      if (iVar6 != 0) {
        str_sprintf(local_80,s_IMAGE__s_005444a8,iVar6 + 0x40);
        ImageArea_SetImage(&GLBL_UI_ELEM_LIST,iVar5,local_80);
        ImageArea_StepFrame(&GLBL_UI_ELEM_LIST,iVar5,*(undefined4 *)(iVar5 + 0x80),
                            *(undefined4 *)(iVar5 + 0x84));
        ImageArea_SetValueE4(&GLBL_UI_ELEM_LIST,iVar5,*(undefined4 *)(iVar5 + 0x88));
        ImageArea_Randomize(&GLBL_UI_ELEM_LIST,iVar5,*(undefined4 *)(iVar5 + 0x8c));
        ImageArea_SetScaled(&GLBL_UI_ELEM_LIST,iVar5,*(undefined4 *)(iVar5 + 0x90));
        ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,iVar5,1);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,iVar5,0x20000);
        if (*(char *)(iVar5 + 0x94) != '\0') {
          ImageArea_SetRect(&GLBL_UI_ELEM_LIST,iVar5,0,SbLobby_AnimCallback,iVar5);
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xd4;
    } while (uVar4 < DAT_00589710);
  }
  return;
}

