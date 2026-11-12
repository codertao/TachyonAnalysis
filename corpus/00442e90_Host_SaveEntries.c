
/* sweep */

void Host_SaveEntries(void)

{
  Profile_ParseNameFields(0x5b2bc4);
  Ui_UnfocusTextEntry(&g_UiManager,s_EntryHOGameName_00540e24);
  Ui_UnfocusTextEntry(&g_UiManager,s_EntryHOPassWord_00540e14);
  set_button_state(&g_UiManager,s_BtnHOGameName_00540e04,1);
  set_button_state(&g_UiManager,s_BtnHOPassWord_00540df4,1);
  return;
}

