
/* sweep */

void SbLobby_GoSlots(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageSlotBg_0054e928);
  g_StarbaseScreen = &PTR_Slots_Enter_00557b58;
  g_TitleMenu_ExitFlag = 1;
  return;
}

