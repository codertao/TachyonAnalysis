
/* sweep */

void SbWing_Exit(void)

{
  int iVar1;
  
  g_NextMode = g_StarbaseScreen;
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageWingBg_00559714);
  ScreenZoom_FreeAll();
  SbWing_ClearSlots();
  if (((DAT_0056c488 != 0) && (iVar1 = *(int *)(DAT_0056c488 + 0xd8), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,iVar1 + 0xcc,0x20000);
  }
  Teletype_ResetSlot(0);
  Sw_EnableZBuffer(0);
  SbPak_SetActive(0,0);
  return;
}

