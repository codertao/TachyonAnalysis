
void FUN_00444d80(void)

{
  int iVar1;
  
  if (g_UiManager == 0) {
    FUN_004af2e0();
    FUN_00444d00(&g_UiManager);
    iVar1 = FUN_00439560(s_space_mnu_00544434,&g_UiManager);
    if (iVar1 == 0) {
      Profile_StartGame();
    }
    FUN_0046f100();
    FUN_0046c310(&g_UiManager);
    FUN_004450a0(0x440000);
    FUN_0049e7d0(0xff);
    load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
    FUN_00452510(GLBL_spacesav[0x37],0x80,0x80);
    FUN_004af260(GLBL_spacesav[0x38],0x80,0x80);
    FUN_004acfa0();
    iVar1 = FUN_00432b70(1);
    if (iVar1 == 0) {
      cb_MainExit();
      return;
    }
  }
  return;
}

