
/* sweep */

void SbJobs_Exit(void)

{
  int iVar1;
  
  g_NextMode = g_StarbaseScreen;
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageJobsBg_0054e950);
  SbJobs_ClearSlots();
  ScreenZoom_FreeAll();
  Sw_EnableZBuffer(0);
  Teletype_ResetSlot(0);
  if (((DAT_00563644 != 0) && (iVar1 = *(int *)(DAT_00563644 + 0x180), iVar1 != 0)) &&
     (*(int *)(iVar1 + 200) != 0)) {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,iVar1 + 0xcc,0x20000);
  }
  SbPak_SetActive(0,0);
  SbAudio_StopAll();
  return;
}

