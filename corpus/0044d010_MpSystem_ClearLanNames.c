
/* sweep */

void MpSystem_ClearLanNames(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar1 = Mnu_FindText(&g_UiManager,s_MP_SYS_NOSESSION_00548030);
  puVar3 = &DAT_00591bc0;
  iVar2 = 0xc;
  do {
    if (iVar1 == 0) {
      str_sprintf(puVar3,s__No_Session_Found__00548008);
      Ui_SetLabelText(&g_UiManager,puVar3 + -0x80,puVar3);
    }
    else {
      str_sprintf(puVar3,&DAT_0054801c,*(undefined4 *)(iVar1 + 0x40));
      Ui_SetLabelText(&g_UiManager,puVar3 + -0x80,puVar3);
    }
    puVar3 = puVar3 + 0x108;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

