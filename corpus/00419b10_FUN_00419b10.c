
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419b10(void)

{
  int iVar1;
  int local_8;
  
  FUN_0049bfe0(s_tachyon_cfg_00534930,&PTR_DAT_005343e0);
  iVar1 = Cbin_Open(s_nw_cfg_00534928);
  if (iVar1 != 0) {
    iVar1 = Cbin_GetParam(&DAT_00534918,s_PING_PORT_0053491c,0,0,&GLBL_NW_PING_PORT,1,1);
    if (iVar1 == 0) {
      _GLBL_NW_PING_PORT = 0xf23;
    }
    iVar1 = Cbin_GetParam(&DAT_00534918,s_PING_IP_00534910,&GLBL_NW_PING_IP,0xf,0,4,1);
    if (iVar1 == 0) {
      str_sprintf(&GLBL_NW_PING_IP,s_12_166_151_201_00534900);
    }
    Cbin_Close();
  }
  if ((GLBL_some_scale_override < _DAT_0052e650) || (_DAT_0052e64c < GLBL_some_scale_override)) {
    _GLBL_some_scale_factor = GLBL_some_scale_override;
  }
  else {
    _GLBL_some_scale_factor = 1.0;
  }
  if (_DAT_005b2b98 < _DAT_0052e648) {
    _DAT_005b2b98 = 1.0;
  }
  _GLBL_error_msg_str_ptr = (char *)something_locale_related(2,&DAT_005b2a80);
  if (_GLBL_error_msg_str_ptr == (char *)0x0) {
    _GLBL_error_msg_str_ptr = s_Invalid_Locale_005343d0;
  }
  if (GLBL_init_to_127 == 0) {
    GLBL_init_to_127 = 0x79;
  }
  if (GLBL_init_to_110 == 0) {
    GLBL_init_to_110 = 0x6e;
  }
  local_8 = (int)(longlong)ROUND(_DAT_005b2b24 * _DAT_0052e544);
  DAT_005b2b20 = local_8;
  if (local_8 == 0) {
    DAT_005b2b20 = 0x60000;
  }
  load_or_init_spacesav();
  DAT_005b2b34 = GLBL_spacesav[0x58];
  _DAT_005b2b24 = (float)GLBL_spacesav[0x3f] * _DAT_0052e644;
  return;
}

