
/* +0x64 = cached .pal or default */

void Pak_SetPalette(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 100) = DAT_00666af8;
  }
  else {
    iVar1 = Pal_GetCached(param_2);
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 100) = DAT_00666af8;
      return;
    }
  }
  return;
}

