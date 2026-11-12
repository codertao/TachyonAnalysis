
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* iBrowse cb 1: page <title> commands: UC= run update.exe /force; UK=<hex> CRC(tachyon.cmd) -> meta
   GOODCRC/BADCRC url; NK=..&CK=..& join */

void NW_OnPageLoaded(void)

{
  char *pcVar1;
  int iVar2;
  int iStack_904;
  char acStack_900 [256];
  char acStack_800 [1024];
  char acStack_400 [1024];
  
  pcVar1 = acStack_900;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  ibrowse_GetTitle(acStack_900);
  pcVar1 = _strstr(acStack_900,&DAT_00548178);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = _strstr(acStack_900,&DAT_0054814c);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = _strstr(acStack_900,&DAT_00548110);
      if (pcVar1 != (char *)0x0) {
        NW_DecodeJoinTitle(acStack_900,&g_NwJoinHost,&g_NwJoinPort,&g_NwJoinKey,0x20);
        _DAT_005916d8 = _atoi(&g_NwJoinKey);
        g_NwJoinPending = 1;
      }
    }
    else {
      DAT_005927c8 = 1;
      Crt_sscanf(pcVar1 + 3,&DAT_00548148,&iStack_904);
      acStack_800[0] = '\0';
      acStack_400[0] = '\0';
      ibrowse_GetMetaValue(s_GOODCRC_00548140,acStack_400,0x400);
      ibrowse_GetMetaValue(s_BADCRC_00548138,acStack_800,0x400);
      iVar2 = NW_FileCrc(s_tachyon_cmd_0054812c);
      if (iVar2 == iStack_904) {
        DAT_005927c8 = 0;
      }
      else if (DAT_005927c8 != 0) {
        if (acStack_800[0] == '\0') {
          return;
        }
        ibrowse_OpenURL(acStack_800);
        return;
      }
      if (acStack_400[0] != '\0') {
        ibrowse_OpenURL(acStack_400);
        return;
      }
    }
  }
  else if (DAT_005927c8 == 0) {
    DAT_005927c8 = 1;
    str_sprintf(&DAT_005a41e0,s_update_exe__lu__force__log_0054815c,GLBL_WindowHandle_);
    NW_RunPatcher(&DAT_005a41e0,1,0,s___TMPEXE____00548150);
    return;
  }
  return;
}

