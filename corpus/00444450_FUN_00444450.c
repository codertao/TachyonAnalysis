
void FUN_00444450(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  puVar2 = &DAT_005a39b0;
  do {
    FUN_00440270(&g_UiManager,puVar2);
    str_sprintf(&DAT_005a41e0,s_BtnLoginSel_d_0054118c,iVar1);
    set_button_state(&g_UiManager,&DAT_005a41e0,1);
    str_sprintf(&DAT_005a41e0,s_LOPanel_d_00541264,iVar1);
    FUN_0043f5d0(&g_UiManager,&DAT_005a41e0,0);
    puVar2 = puVar2 + 0x8c;
    iVar1 = iVar1 + 1;
  } while ((int)puVar2 < 0x5a3f28);
  return;
}

