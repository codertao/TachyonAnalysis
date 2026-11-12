
/* sweep: asm, reg-passed args; guess */

void SndAsm_StartVoice(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = &g_SndVoices;
  puVar2 = &DAT_004c9a02;
  iVar1 = 0x18;
  do {
    if (puVar4[4] == in_EAX) {
      *(undefined1 *)(puVar2 + 0xf) = 0;
      puVar2[1] = 0x400;
      puVar2[3] = 0xfff00400;
      *puVar2 = &DAT_004c9401;
      puVar2[2] = 0x400;
      puVar2[0xd] = 0x400;
      puVar2[0xe] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      *(undefined1 *)(puVar2 + 0xf) = 1;
    }
    puVar4 = puVar4 + 0x10;
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar5 = &g_SndVoiceNext;
  puVar3 = &DAT_004c9a02;
  puVar4 = &DAT_004ca5a2;
  puVar2 = &g_SndVoices;
  iVar1 = 0x18;
  do {
    if (puVar5[4] == in_EAX) {
      *(undefined1 *)(puVar3 + 0xf) = 0;
      puVar3[1] = 0x400;
      puVar3[3] = 0xfff00400;
      *puVar3 = &DAT_004c9401;
      puVar3[2] = 0x400;
      puVar3[0xd] = 0x400;
      puVar3[0xe] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined1 *)(puVar3 + 0xf) = 1;
      *(undefined1 *)(puVar4 + 0xf) = 0;
      puVar4[1] = 0x400;
      puVar4[3] = 0xfff00400;
      *puVar4 = &DAT_004c9401;
      puVar4[2] = 0x400;
      puVar4[0xd] = 0x400;
      puVar4[0xe] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(undefined1 *)(puVar4 + 0xf) = 1;
      puVar5[3] = 0xffffffff;
      puVar2[3] = 0xffffffff;
    }
    puVar5 = puVar5 + 0xf;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 0x10;
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

