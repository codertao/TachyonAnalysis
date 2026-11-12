
/* sweep */

void Mnu_FreePolyFonts(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x58);
    PolyFont_Free(*(int *)(param_1 + 0x3c) + 0x20);
    OurFreeMem(*(undefined4 *)(param_1 + 0x3c));
    *(int *)(param_1 + 0x3c) = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

