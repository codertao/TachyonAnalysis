
void FUN_0047f3b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  iVar3 = DAT_00589738;
  g_TitleMenu_ExitFlag = 0;
  DAT_005636b4 = 0;
  FUN_0047f370();
  FUN_0043ab40(&DAT_00583420);
  FUN_0047ebf0();
  Ui_ShowWindow(&DAT_00583420,s_WndStarBaseNews_00552c88,0);
  FUN_0043a8d0(&DAT_00583420,s_WndStarBaseNews_00552c88);
  FUN_00437b30(FUN_0047f680);
  FUN_00437b10(FUN_0047f680);
  FUN_00445710();
  FUN_0043e8f0(&DAT_00583420,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_00468f50(g_NextMode);
  FUN_0047ed30(0xffffffff);
  FUN_0047ef20();
  FUN_0047f150();
  DAT_005636b8 = 0;
  if (DAT_00589734 != 0) {
    piVar2 = (int *)(iVar3 + 0xfc);
    iVar3 = DAT_00589734;
    do {
      if (*piVar2 != 0) {
        DAT_005636b8 = DAT_005636b8 + 1;
      }
      piVar2 = piVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043ce50(&DAT_00583420,s_BtnNewsFwd_00552ce8,8);
  FUN_0043ce50(&DAT_00583420,s_BtnNewsBck_00552cdc,8);
  FUN_004af2e0();
  FUN_004b1b70(DAT_005a6818,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_004e4b65(1);
  FUN_0047f7f0();
  return;
}

