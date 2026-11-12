
/* sweep */

void SbJobsDone_Exit(void)

{
  int iVar1;
  
  g_NextMode = g_StarbaseScreen;
  Teletype_ResetSlot(0);
  Teletype_ResetSlot(1);
  if (((DAT_0056364c != 0) && (iVar1 = *(int *)(DAT_0056364c + 0x180), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,iVar1 + 0xcc,0x20000);
  }
  Sw_EnableZBuffer(0);
  SbPak_SetActive(0,0);
  Light_ApplyDefault();
  return;
}

