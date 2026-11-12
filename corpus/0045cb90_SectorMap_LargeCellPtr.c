
/* sweep */

int SectorMap_LargeCellPtr(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = SectorMap_LargeCellIndex(param_1);
  return *(int *)(param_2 + 4) + iVar1 * 4;
}

