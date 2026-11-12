
/* sweep */

void Box_Free(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    Gfx_ReleaseTexture((int *)(param_1 + 0x120));
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      OurFreeMem(iVar1);
    }
    OurFreeMem(param_1);
  }
  return;
}

