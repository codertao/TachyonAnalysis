
/* sweep */

int Bdf_FindFree(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = DAT_005b9080;
  do {
    if (*(int *)(iVar2 + 0xd0) == 0) {
      clr_bytes(iVar2,0x144);
      return iVar2;
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x144;
  } while (uVar1 < 0x10);
  return 0;
}

