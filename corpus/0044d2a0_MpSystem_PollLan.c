
/* sweep */

void MpSystem_PollLan(void)

{
  int iVar1;
  
  if (DAT_005912e0 != 0) {
    DAT_00562cc0 = DAT_00562cc0 + -1;
    if (DAT_00562cc0 < 1) {
      DAT_00562cc0 = 0x19;
      MpSystem_ShowSearching();
    }
    DPlay_FreeAllSessions();
    DPlay_EnumSessions();
    iVar1 = NetDrv_FindSessionByGuid(&DAT_00591630);
    if ((iVar1 == 0) && (DAT_0055e3f0 != 0)) {
      LanList_SetCursor(0);
    }
    MpSystem_RefreshLanList();
    return;
  }
  return;
}

