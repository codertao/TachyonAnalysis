
/* sweep: BASE_LOBBY/SHIP_YARD */

void Starbase_FindAudioSection(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_BASE_LOBBY_0054a7f0;
  cVar2 = s_BASE_LOBBY_0054a7f0[0];
  while (cVar2 != '\0') {
    pcVar3[0x20] = '\0';
    Cbin_GetField_Ctx(s_AUDIO_005347ac,pcVar3,pcVar3 + 0x20,0x1f,0,param_1);
    pcVar1 = pcVar3 + 0x44;
    pcVar3 = pcVar3 + 0x44;
    cVar2 = *pcVar1;
  }
  return;
}

