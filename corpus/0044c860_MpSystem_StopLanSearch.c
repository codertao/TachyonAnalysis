
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void MpSystem_StopLanSearch(void)

{
  DAT_00591100 = 0;
  DAT_005912e0 = 0;
  _DAT_00591620 = 0xffffffff;
  MpSystem_SetBanner(s_MP_SYS_IPXBANNER_00547ff0);
  DPlay_StopEnumSessions();
  DPlay_FreeAllSessions();
  DAT_00591630 = 0;
  DAT_00591634 = 0;
  _DAT_00591638 = 0;
  _DAT_0059163c = 0;
  return;
}

