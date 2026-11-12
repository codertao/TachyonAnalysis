
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: "Menu Sentinel" */

void Mnu_Begin(undefined4 param_1)

{
  _DAT_005a4b3c = 0;
  _DAT_005a4314 = 0;
  Mnu_Shutdown(param_1);
  Pal_FreeAllRefs();
  Mem_AllocZeroTagged(param_1,0,4,s_Menu_Sentinel_0053fd54,0xa000);
  Menu_BuildFadeTable();
  ScreenZoom_Reset();
  Mnu_InitStdMaterials();
  return;
}

