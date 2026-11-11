
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* /D /VRULES /VECHO /VLOG /NOHELP */

void CmdLine_ParseSwitches(char *param_1)

{
  char *pcVar1;
  
  Rules_Set(&g_Rules_SinglePlayer);
  pcVar1 = _strstr(param_1,s__NOHELP_0053f424);
  if (pcVar1 != (char *)0x0) {
    GLBL_spacesav[0x2b] = 0;
  }
  g_ShipDesStatScale = 0x99;
  g_PlayerDamageScale = 0xa6;
  pcVar1 = _strstr(param_1,s__VLOG_0053f41c);
  if (pcVar1 != (char *)0x0) {
    _DAT_005a6644 = 1;
  }
  pcVar1 = _strstr(param_1,s__VECHO_0053f414);
  if (pcVar1 != (char *)0x0) {
    _DAT_005a6648 = 1;
  }
  pcVar1 = _strstr(param_1,s__VRULES_0053f40c);
  if (pcVar1 != (char *)0x0) {
    _DAT_005a664c = 1;
  }
  return;
}

