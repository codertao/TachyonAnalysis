
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419b10(void)

{
  int iVar1;
  int local_8;
  
  FUN_0049bfe0(s_tachyon_cfg_00534930,&PTR_DAT_005343e0);
  iVar1 = Cbin_Open(s_nw_cfg_00534928);
  if (iVar1 != 0) {
    iVar1 = Cbin_GetParam(&DAT_00534918,s_PING_PORT_0053491c,0,0,&DAT_005b2b00,1,1);
    if (iVar1 == 0) {
      _DAT_005b2b00 = 0xf23;
    }
    iVar1 = Cbin_GetParam(&DAT_00534918,s_PING_IP_00534910,&DAT_005b2af0,0xf,0,4,1);
    if (iVar1 == 0) {
      str_sprintf(&DAT_005b2af0,s_12_166_151_201_00534900);
    }
    Cbin_Close();
  }
  if ((DAT_005b2b30 < _DAT_0052e650) || (_DAT_0052e64c < DAT_005b2b30)) {
    _DAT_0055e0cc = DAT_005b2b30;
  }
  else {
    _DAT_0055e0cc = 1.0;
  }
  if (_DAT_005b2b98 < _DAT_0052e648) {
    _DAT_005b2b98 = 1.0;
  }
  _DAT_005b2ac0 = (char *)FUN_004bc6a2(2,&DAT_005b2a80);
  if (_DAT_005b2ac0 == (char *)0x0) {
    _DAT_005b2ac0 = s_Invalid_Locale_005343d0;
  }
  if (DAT_005b2ac4 == 0) {
    DAT_005b2ac4 = 0x79;
  }
  if (DAT_005b2ac8 == 0) {
    DAT_005b2ac8 = 0x6e;
  }
  local_8 = (int)(longlong)ROUND(_DAT_005b2b24 * _DAT_0052e544);
  DAT_005b2b20 = local_8;
  if (local_8 == 0) {
    DAT_005b2b20 = 0x60000;
  }
  FUN_00419ad0();
  DAT_005b2b34 = DAT_005b2d20;
  _DAT_005b2b24 = (float)DAT_005b2cbc * _DAT_0052e644;
  return;
}

