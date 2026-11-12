
/* sweep */

void MpSystem_ClearLanSlots(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = Mnu_FindText(&g_UiManager,s_MP_SYS_NOSESSION_00548030);
  uVar4 = 0;
  puVar5 = &DAT_00591b40;
  do {
    str_sprintf(puVar5,s_BtnLanSlot_d_00548020,uVar4);
    set_button_state(&g_UiManager,puVar5,8);
    Ui_SetButtonFlag(&g_UiManager,puVar5,0x2000);
    Ui_SetButtonFlag(&g_UiManager,puVar5,4);
    puVar1 = puVar5 + 0x80;
    uVar3 = Ui_FindButton(&g_UiManager,puVar5);
    *(undefined4 *)(puVar5 + 0x100) = uVar3;
    if (iVar2 == 0) {
      str_sprintf(puVar1,s__No_Session_Found__00548008);
      Ui_SetLabelText(&g_UiManager,puVar5,puVar1);
    }
    else {
      str_sprintf(puVar1,&DAT_0054801c,*(undefined4 *)(iVar2 + 0x40));
      Ui_SetLabelText(&g_UiManager,puVar5,puVar1);
    }
    Ui_SetLabelText(&g_UiManager,puVar5,puVar1);
    uVar4 = uVar4 + 1;
    *(undefined4 *)(puVar5 + 0x104) = 0;
    puVar5 = puVar5 + 0x108;
  } while (uVar4 < 0xc);
  return;
}

