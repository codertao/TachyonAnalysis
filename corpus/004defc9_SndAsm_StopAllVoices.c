
/* sweep: asm, reg-passed args; guess */

int SndAsm_StopAllVoices(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_SndVoices;
  iVar1 = 0x18;
  do {
    if (puVar2[4] == in_EAX) {
      return in_EAX;
    }
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_004c9a02;
  iVar1 = 0x18;
  while ((*(char *)(puVar2 + 0xf) == '\0' || (puVar2[4] != in_EAX))) {
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return in_EAX;
}

