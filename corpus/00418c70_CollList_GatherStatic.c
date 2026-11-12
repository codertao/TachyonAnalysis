
/* sweep */

void CollList_GatherStatic(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_c [2];
  undefined4 local_4;
  
  DAT_005b318c = 0;
  local_c[0] = *param_1;
  local_4 = param_1[2];
  uVar1 = SectorMap_LargeCellPtr(local_c,param_3);
  CollList_Contains(uVar1);
  local_c[0] = *param_2;
  local_4 = param_2[2];
  uVar1 = SectorMap_LargeCellPtr(local_c,param_3);
  CollList_Contains(uVar1);
  local_c[0] = *param_1;
  local_4 = param_2[2];
  uVar1 = SectorMap_LargeCellPtr(local_c,param_3);
  CollList_Contains(uVar1);
  local_c[0] = *param_2;
  local_4 = param_1[2];
  uVar1 = SectorMap_LargeCellPtr(local_c,param_3);
  CollList_Contains(uVar1);
  return;
}

