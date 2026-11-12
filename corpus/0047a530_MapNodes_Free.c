
/* sweep */

void MapNodes_Free(void)

{
  int iVar1;
  
  if (DAT_00563690 != 0) {
    do {
      iVar1 = *(int *)(DAT_00563690 + 0x2c);
      OurFreeMem(DAT_00563690);
      DAT_00563690 = iVar1;
    } while (iVar1 != 0);
    DAT_00563690 = 0;
  }
  return;
}

