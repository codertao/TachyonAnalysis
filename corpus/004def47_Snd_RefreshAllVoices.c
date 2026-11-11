
/* re-apply vol/pan to all 24 voices, 24 aux and 24 queued records */

void __cdecl Snd_RefreshAllVoices(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &g_SndVoices;
  iVar3 = 0x18;
  do {
    if (*(char *)(puVar4 + 0xf) != '\0') {
      Snd_SetVoiceVolPan(puVar4,-1,-1,-1);
      *(undefined1 *)((int)puVar4 + 0x3e) = 1;
    }
    puVar4 = puVar4 + 0x10;
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  puVar4 = &DAT_004c9a02;
  iVar3 = 0x18;
  do {
    if (*(char *)(puVar4 + 0xf) != '\0') {
      Snd_SetVoiceVolPan(puVar4,-1,-1,-1);
    }
    puVar4 = puVar4 + 0x10;
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  puVar4 = &g_SndVoiceNext;
  iVar3 = 0x18;
  do {
    Snd_SetVoiceVolPan(puVar4,-1,-1,-1);
    puVar4 = puVar4 + 0xf;
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}

