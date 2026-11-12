
/* sweep */

void Starbase_FreeAll(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  Starbase_FreeImages();
  SbPak_FreeAll();
  SbAudio_StopAll();
  Mem_FreeTag(0xa100);
  puVar2 = &DAT_005879a0;
  for (iVar1 = 0x76f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

