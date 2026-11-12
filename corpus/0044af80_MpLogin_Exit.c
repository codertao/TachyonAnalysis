
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void MpLogin_Exit(void)

{
  MpLogin_UnfocusAll();
  MpLogin_SaveSlotHeader();
  Box_Free(DAT_005a3848);
  DAT_005a3848 = 0;
  _DAT_00562c8c = 0;
  Faces_Free();
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
  return;
}

