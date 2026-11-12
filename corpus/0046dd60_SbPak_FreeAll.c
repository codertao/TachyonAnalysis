
/* sweep */

void SbPak_FreeAll(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = DAT_00589754; iVar2 = DAT_00589754, iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60)) {
    Pak_Unload(iVar1);
  }
  while (iVar2 != 0) {
    DAT_00589754 = *(int *)(iVar2 + 0x60);
    OurFreeMem(iVar2);
    iVar2 = DAT_00589754;
  }
  DAT_00589754 = 0;
  SbPak_SetActive(0,0);
  Mem_FreeTag(0xa104);
  return;
}

