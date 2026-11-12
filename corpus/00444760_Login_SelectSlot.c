
/* slot click (cbLoginSlotN): Profile_Select, create-if-empty, refresh WndLogin */

void Login_SelectSlot(int param_1)

{
  if ((param_1 < 0) || (9 < param_1)) {
    g_CurrentProfileSlot = 0xffffffff;
  }
  else {
    WndLogin_RefreshSlotPanels();
    Profile_Select(param_1);
    if ((DAT_00541184 == -1) && (g_CurrentProfile == '\0')) {
      Profile_CreateNew(param_1);
    }
  }
  Ui_RefreshWindow(&g_UiManager,s_WndLogin_00541204,0,0);
  return;
}

