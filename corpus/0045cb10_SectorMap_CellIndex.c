
/* sweep */

uint SectorMap_CellIndex(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0x3fff0000 < iVar1) {
    return 0x7f;
  }
  if (iVar1 < -0x3fff0000) {
    iVar1 = -0x3fff0000;
  }
  return iVar1 + 0x40000000U >> 0x18;
}

