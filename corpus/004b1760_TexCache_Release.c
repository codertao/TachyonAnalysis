
/* refine: refcount-- on a material cache entry; frees texture on zero */

void TexCache_Release(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x24);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      Gfx_ReleaseTexture((undefined4 *)(param_1 + 0x28));
      OurFreeMem(*(undefined4 *)(param_1 + 0x28));
    }
    DAT_00666aac = DAT_00666aac + -1;
    if ((param_1 - 0x62c12cU) / 0x50 == DAT_00668fb0 - 1) {
      DAT_00668fb0 = DAT_00668fb0 - 1;
    }
  }
  return;
}

