
/* BtnCFGSell rows: owned items + qty */

void Loadout_RefreshInventoryList(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int local_c;
  
  iVar7 = DAT_00577f00;
  if (s_BtnCFGSell1_0054f138[0] != '\0') {
    pcVar8 = s_TxtInvQty1_0054f1b8;
    do {
      pcVar6 = pcVar8 + -0x80;
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar6,4);
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar6,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar6,0x400000);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar8 + 0x40,0x20000);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,0x200);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,pcVar8,0x20000);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8,&DAT_00562b14);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,&DAT_00562b14);
      pcVar8[0x84] = '\0';
      pcVar8[0xc4] = '\0';
      pcVar8[0x80] = '\0';
      pcVar8[0x81] = '\0';
      pcVar8[0x82] = '\0';
      pcVar8[0x83] = '\0';
      iVar1 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar6);
      if (iVar1 != 0) {
        *(undefined4 *)(pcVar8 + 0xe4) = *(undefined4 *)(iVar1 + 0xd4);
        *(undefined4 *)(pcVar8 + 0xe8) = *(undefined4 *)(iVar1 + 0xd8);
        *(int *)(pcVar8 + 0xec) = *(int *)(iVar1 + 200) + *(int *)(iVar1 + 0xd4);
        *(int *)(pcVar8 + 0xf0) = *(int *)(iVar1 + 0xcc) + *(int *)(iVar1 + 0xd8);
      }
      pcVar6 = pcVar8 + 0xf4;
      pcVar8 = pcVar8 + 0x174;
    } while (*pcVar6 != '\0');
  }
  FUN_0046bf30();
  local_c = DAT_00589744;
  iVar1 = DAT_00589748;
  if (DAT_00589748 != 0) {
    for (; (iVar7 != 0 && (local_c != 0)); local_c = local_c + -1) {
      iVar7 = iVar7 + -1;
      iVar1 = iVar1 + 0x24;
    }
    if (s_BtnCFGSell1_0054f138[0] != '\0') {
      piVar2 = (int *)(iVar1 + 0x20);
      pcVar8 = s_IAItemSell1_0054f1f8;
      do {
        if (local_c == 0) {
          return;
        }
        iVar7 = *piVar2;
        if (iVar7 == 0) {
          return;
        }
        iVar1 = *(int *)(iVar7 + 0x58);
        if (iVar1 != 0) {
          pcVar6 = pcVar8 + -0xc0;
          *(int *)(pcVar8 + 0x40) = iVar7;
          iVar7 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,pcVar6);
          if (iVar7 == 8) {
            set_button_state(&GLBL_UI_ELEM_LIST,pcVar6,1);
          }
          iVar7 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar6);
          if (iVar7 != 0) {
            FUN_0046d770(&GLBL_UI_ELEM_LIST,pcVar8,iVar1 + 0xb0,1,*(undefined4 *)(iVar1 + 0xc0),
                         *(undefined4 *)(iVar1 + 0xc4),*(undefined4 *)(iVar7 + 0xd4),
                         *(undefined4 *)(iVar7 + 0xd8),0);
            iVar3 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,pcVar8);
            str_sprintf(&DAT_005a41e0,s_IMAGE__s_005444a8,iVar1 + 0xb0);
            iVar4 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0);
            iVar7 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,iVar7 + 0x80);
            if (((iVar3 != 0) && (iVar4 != 0)) && (iVar7 != 0)) {
              uVar5 = Player_GetVarInt(*piVar2 + 0x20,*piVar2);
              str_sprintf(pcVar8 + 0x84,s___SHADOW8r__d_SHADOW8w___005476a8,uVar5);
              FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar8 + -0x40,pcVar8 + 0x84);
              if (*(undefined4 **)(iVar1 + 0x60) == (undefined4 *)0x0) {
                pcVar6 = s__ITEM_005476a0;
              }
              else {
                pcVar6 = (char *)**(undefined4 **)(iVar1 + 0x60);
              }
              str_sprintf(pcVar8 + 0x44,&DAT_00536768,pcVar6);
              FUN_00473080(pcVar8 + -0x80,pcVar8 + 0x44,*(undefined4 *)(iVar3 + 0xc4),
                           *(undefined4 *)(iVar3 + 200),*(undefined4 *)(iVar7 + 0x166c),
                           *(int *)(iVar7 + 0x1670) / *(int *)(iVar7 + 0x1680));
              Loadout_SetMountIcon
                        (iVar3,iVar4,*(undefined4 *)(iVar3 + 0xc4),*(undefined4 *)(iVar3 + 200),
                         *(undefined4 *)(iVar7 + 0x166c),*(undefined4 *)(iVar7 + 0x1670),
                         *(undefined4 *)(iVar7 + 0x1680),2,4);
            }
          }
        }
        pcVar6 = pcVar8 + 0xb4;
        pcVar8 = pcVar8 + 0x174;
        piVar2 = piVar2 + 9;
        local_c = local_c + -1;
      } while (*pcVar6 != '\0');
    }
  }
  return;
}

