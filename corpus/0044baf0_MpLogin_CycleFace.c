
/* sweep */

void MpLogin_CycleFace(int param_1)

{
  char *pcVar1;
  
  DAT_00562c90 = param_1 + DAT_00562c90;
  if (DAT_00562c90 < 0) {
    DAT_00562c90 = DAT_00592e5c + -1;
  }
  if (DAT_00592e5c <= DAT_00562c90) {
    DAT_00562c90 = 0;
  }
  pcVar1 = (char *)Ui_FindImageByName(DAT_00592e58 + DAT_00562c90 * 0x18);
  if (pcVar1 != (char *)0x0) {
    ImageArea_SetImage(&g_UiManager,s_IALoginFace_00547a78,pcVar1);
    pcVar1 = _strstr(pcVar1,s_IMAGE__00547a70);
    if (pcVar1 != (char *)0x0) {
      _strncpy(&DAT_00592950 + DAT_005a60c0 * 0x8c,pcVar1 + 6,0xf);
      _strncpy(&DAT_005a60c4,pcVar1 + 6,0xf);
    }
  }
  return;
}

