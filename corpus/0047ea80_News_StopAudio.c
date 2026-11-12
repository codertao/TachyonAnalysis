
/* sweep */

void News_StopAudio(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005636a4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (*(int *)(iVar1 + 0x18) != 0) {
      Audio_StopSample(*(undefined4 *)(iVar1 + 0x10));
    }
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  return;
}

