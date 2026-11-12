
/* sweep */

int Coll_LookaheadCast(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  DAT_005b2d80 = param_4;
  DAT_005b2d84 = 0;
  DAT_005b3190 = param_5;
  if ((*(int *)(param_3 + 0x10) != 0) &&
     (iVar1 = Coll_SegmentVsList(*(int *)(param_3 + 0x10),param_2,param_1,local_c), iVar1 != 0)) {
    return iVar1;
  }
  if ((*(int *)(param_3 + 0xc) != 0) &&
     (iVar1 = Coll_SegmentVsList(*(int *)(param_3 + 0xc),param_2,param_1,local_c), iVar1 != 0)) {
    return iVar1;
  }
  piVar2 = (int *)SectorMap_CellPtr(&local_18,param_3);
  if ((*piVar2 != 0) && (iVar1 = Coll_SegmentVsList(*piVar2,param_2,param_1,local_c), iVar1 != 0)) {
    return iVar1;
  }
  piVar2 = (int *)SectorMap_LargeCellPtr(&local_18,param_3);
  if ((*piVar2 != 0) && (iVar1 = Coll_SegmentVsList(*piVar2,param_2,param_1,local_c), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}

