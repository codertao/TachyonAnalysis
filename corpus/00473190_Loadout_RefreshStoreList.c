
/* BtnCFGBuy rows: icon, price (MAINT_PRICE), availability */

void Loadout_RefreshStoreList(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iStack_10;
  int iStack_c;
  
  iVar1 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_MAINT_PRICE_0054ffe8);
  iVar7 = DAT_005720c0;
  if (s_BtnCFGBuy1_0054e9f0[0] != '\0') {
    pcVar8 = s_TxtItemQty1_0054ea70;
    do {
      pcVar6 = pcVar8 + -0x80;
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar6,4);
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar6,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar6,0x400000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar8 + 0x40,0x20000);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,pcVar8,0x20000);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8,&DAT_00562b14);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,0x200);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,&DAT_00562b14);
      pcVar8[0x80] = '\0';
      pcVar8[0x81] = '\0';
      pcVar8[0x82] = '\0';
      pcVar8[0x83] = '\0';
      iVar2 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar6);
      if (iVar2 != 0) {
        *(undefined4 *)(pcVar8 + 0xe4) = *(undefined4 *)(iVar2 + 0xd4);
        *(undefined4 *)(pcVar8 + 0xe8) = *(undefined4 *)(iVar2 + 0xd8);
        *(int *)(pcVar8 + 0xec) = *(int *)(iVar2 + 200) + *(int *)(iVar2 + 0xd4);
        *(int *)(pcVar8 + 0xf0) = *(int *)(iVar2 + 0xcc) + *(int *)(iVar2 + 0xd8);
      }
      pcVar6 = pcVar8 + 0xf4;
      pcVar8 = pcVar8 + 0x174;
    } while (*pcVar6 != '\0');
  }
  iStack_c = DAT_0058974c;
  iStack_10 = DAT_00589750;
  if (DAT_00589750 != 0) {
    for (; (iVar7 != 0 && (iStack_c != 0)); iStack_c = iStack_c + -1) {
      iVar7 = iVar7 + -1;
      iStack_10 = iStack_10 + 0x5c;
    }
    if (s_BtnCFGBuy1_0054e9f0[0] != '\0') {
      pcVar8 = s_IAItemAvail1_0054eab0;
      do {
        if (iStack_c == 0) {
          return;
        }
        if ((iStack_10 != 0) && (iVar7 = *(int *)(iStack_10 + 0x58), iVar7 != 0)) {
          pcVar6 = pcVar8 + -0xc0;
          *(int *)(pcVar8 + 0x40) = iStack_10;
          iVar2 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar6);
          if ((iVar2 == 8) && (uVar3 = Player_GetCredits(), *(uint *)(iVar7 + 0x98) <= uVar3)) {
            set_button_state(&GLBL_UI_ELEM_LIST,pcVar6,1);
          }
          iVar2 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar6);
          if (iVar2 != 0) {
            FUN_0046d770(&GLBL_UI_ELEM_LIST,pcVar8,iVar7 + 0xb0,1,*(undefined4 *)(iVar7 + 0xc0),
                         *(undefined4 *)(iVar7 + 0xc4),*(undefined4 *)(iVar2 + 0xd4),
                         *(undefined4 *)(iVar2 + 0xd8),0);
            iVar4 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,pcVar8);
            str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar7 + 0xb0);
            iVar5 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0);
            iVar2 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,iVar2 + 0x80);
            if (((iVar4 != 0) && (iVar5 != 0)) && (iVar2 != 0)) {
              if (iVar1 == 0) {
                pcVar6 = s__Price__0054ffe0;
              }
              else {
                pcVar6 = *(char **)(iVar1 + 0x40);
              }
              str_sprintf(pcVar8 + 0x84,s__s__d_0054ffd8,pcVar6,*(undefined4 *)(iVar7 + 0x98));
              FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,pcVar8 + 0x84);
              if (*(undefined4 **)(iVar7 + 0x60) == (undefined4 *)0x0) {
                pcVar6 = s__ITEM_005476a0;
              }
              else {
                pcVar6 = (char *)**(undefined4 **)(iVar7 + 0x60);
              }
              str_sprintf(pcVar8 + 0x44,&DAT_00536768,pcVar6);
              FUN_00473080(pcVar8 + -0x80,pcVar8 + 0x44,*(undefined4 *)(iVar4 + 0xc4),
                           *(undefined4 *)(iVar4 + 200),*(undefined4 *)(iVar2 + 0x166c),
                           *(int *)(iVar2 + 0x1670) / *(int *)(iVar2 + 0x1680));
              Loadout_SetMountIcon
                        (iVar4,iVar5,*(undefined4 *)(iVar4 + 0xc4),*(undefined4 *)(iVar4 + 200),
                         *(undefined4 *)(iVar2 + 0x166c),*(undefined4 *)(iVar2 + 0x1670),
                         *(undefined4 *)(iVar2 + 0x1680),2,5);
            }
          }
        }
        pcVar6 = pcVar8 + 0xb4;
        pcVar8 = pcVar8 + 0x174;
        iStack_10 = iStack_10 + 0x5c;
        iStack_c = iStack_c + -1;
      } while (*pcVar6 != '\0');
    }
  }
  return;
}

