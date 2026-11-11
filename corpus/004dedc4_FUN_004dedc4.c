
int __fastcall FUN_004dedc4(int param_1,int param_2)

{
  int in_EAX;
  int vol;
  int arg;
  int unaff_EBX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_SndVoices;
  iVar1 = 0x18;
  while (puVar2[4] != in_EAX) {
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      puVar2 = &DAT_004c9a02;
      iVar1 = 0x18;
      do {
        if (puVar2[4] == in_EAX) {
          return in_EAX;
        }
        puVar2 = puVar2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  *(undefined1 *)((int)puVar2 + 0x3e) = 1;
  Snd_SetVoiceVolPan(puVar2,unaff_EBX,param_1,param_2);
  puVar2 = &g_SndVoiceNext;
  iVar1 = 0x18;
  do {
    if (puVar2[4] == in_EAX) {
      Snd_SetVoiceVolPan(puVar2,unaff_EBX,vol,arg);
      puVar2[2] = puVar2[0xd];
      return in_EAX;
    }
    puVar2 = puVar2 + 0xf;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_EAX;
}

