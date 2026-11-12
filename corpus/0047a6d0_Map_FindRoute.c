
/* sweep */

undefined4
Map_FindRoute(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_00563690;
  iVar2 = Map_FindRegionById(param_1,param_2);
  iVar3 = MapNode_Find(param_1,param_2);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    MapPath_ClearBest();
    MapPath_Push(&DAT_00571580,iVar2);
    uVar4 = MapPath_Search(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  return 0xffffffff;
}

