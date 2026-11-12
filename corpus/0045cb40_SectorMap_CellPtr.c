
/* sweep */

int SectorMap_CellPtr(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = SectorMap_CellIndex(param_1);
  return *param_2 + iVar1 * 4;
}

