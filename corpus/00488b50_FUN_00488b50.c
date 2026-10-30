
void FUN_00488b50(void)

{
  int iVar1;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  FUN_00440460(&DAT_00583420,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  FUN_0043ab40(&DAT_00583420);
  FUN_0043a8d0(&DAT_00583420,s_WndStarBaseStats_0055883c);
  Ui_ShowWindow(&DAT_00583420,s_WndStarBaseStats_0055883c,0);
  FUN_00437b30(FUN_00488eb0);
  FUN_00437b10(FUN_00488750);
  FUN_00445710();
  FUN_0043e8f0(&DAT_00583420,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_00468f50(g_NextMode);
  FUN_004af2e0();
  FUN_004b1b70(DAT_005a6818,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_004885d0();
  FUN_004e4b65(1);
  if (DAT_00590e24 != &g_Mode_StarbaseHub) {
    FUN_00488750();
    return;
  }
  FUN_00488950();
  return;
}

