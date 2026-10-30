
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* /D /VRULES /VECHO /VLOG /NOHELP */

void CmdLine_ParseSwitches(char *param_1)

{
  char *pcVar1;
  
  FUN_004256f0(&PTR_FUN_0053f6d8);
  pcVar1 = _strstr(param_1,s__NOHELP_0053f424);
  if (pcVar1 != (char *)0x0) {
    DAT_005b2c6c = 0;
  }
  DAT_005a6638 = 0x99;
  DAT_005a663c = 0xa6;
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

