
/* sweep */

void MpSystem_OnLanCancel(void)

{
  DAT_005912e0 = 0;
  DAT_00591100 = 0;
  if (DAT_00591248 == 0) {
    MpSystem_SetBanner(s_MP_SYS_IPXBANNER_00547ff0);
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
  return;
}

