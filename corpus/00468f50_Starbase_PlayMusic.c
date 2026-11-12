
/* sweep */

void Starbase_PlayMusic(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = s_BASE_LOBBY_0054a7f0;
  if (param_1 == 0) {
    DAT_005635d0 = (char *)param_1;
    Music_Close();
    return;
  }
  if (s_BASE_LOBBY_0054a7f0[0] != '\0') {
    while (*(int *)(pcVar2 + 0x40) != param_1) {
      pcVar1 = pcVar2 + 0x44;
      pcVar2 = pcVar2 + 0x44;
      if (*pcVar1 == '\0') {
        return;
      }
    }
    if (DAT_005635d0 != pcVar2) {
      Starbase_PlayMusicFile(&DAT_005b2b78,pcVar2 + 0x20);
      DAT_005635d0 = pcVar2;
    }
  }
  return;
}

