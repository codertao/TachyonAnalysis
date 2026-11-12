
/* sweep */

void MnuImage_Free(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = MnuImage_Find(param_1,param_2);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x60);
    iVar2 = 0x80;
    do {
      if (*piVar3 != 0) {
        Gfx_ReleaseTexture(piVar3);
        OurFreeMem(*piVar3);
        if (*(int *)(iVar1 + 0x1650) != 0) {
          PalRef_Free(*(int *)(iVar1 + 0x1650));
          *(undefined4 *)(iVar1 + 0x1650) = 0;
        }
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(iVar1 + 0x1664) = 0;
    *(undefined4 *)(iVar1 + 0x1668) = 0;
    *(undefined4 *)(iVar1 + 0x1674) = 0;
  }
  return;
}

