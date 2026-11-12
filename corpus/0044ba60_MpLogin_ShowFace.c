
/* sweep */

void MpLogin_ShowFace(int param_1)

{
  char *_Dest;
  char *pcVar1;
  
  if ((-1 < param_1) && (param_1 < 10)) {
    _Dest = &DAT_00592950 + param_1 * 0x8c;
    pcVar1 = (char *)Ui_FindImageByName(_Dest);
    if ((pcVar1 == (char *)0x0) && (pcVar1 = (char *)Faces_GetDefault(), pcVar1 == (char *)0x0)) {
      return;
    }
    (&DAT_00592960)[param_1 * 0x23] = pcVar1;
    DAT_00562c90 = Faces_FindIndex(_Dest);
    ImageArea_SetImage(&g_UiManager,s_IALoginFace_00547a78,pcVar1);
    pcVar1 = _strstr(pcVar1,s_IMAGE__00547a70);
    if (pcVar1 != (char *)0x0) {
      _strncpy(_Dest,pcVar1 + 6,0xf);
    }
  }
  return;
}

