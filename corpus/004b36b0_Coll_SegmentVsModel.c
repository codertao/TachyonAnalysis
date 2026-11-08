
/* narrow phase: model = entity +0xc4 override or instance +0x40 pak; needs pak flags +0x28 & 1,
   tris at +0x48 */

void Coll_SegmentVsModel(undefined4 param_1,undefined4 param_2,byte *param_3,undefined4 *param_4,
                        int param_5,int param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [4];
  ulonglong local_c;
  
  if (param_6 == 0) {
    param_6 = *(int *)(param_3 + 0x40);
  }
  if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    return;
  }
  Coll_SegmentToModelSpace(local_28,local_10,param_1,param_2,param_3);
  if ((*param_3 & 0x10) == 0) {
    uVar2 = 0x10000;
  }
  else {
    uVar2 = *(uint *)(param_3 + 4);
  }
  if (param_5 != 0) {
    uVar2 = (uint)((longlong)(int)uVar2 * (longlong)param_5) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar2 * (longlong)param_5) >> 0x20) << 0x10;
  }
  Coll_ScaleSegment(local_28,local_10,uVar2);
  iVar3 = Coll_SegmentVsTriList(local_28,local_10,*(undefined4 *)(param_6 + 0x48),&local_1c);
  if (iVar3 != 0) {
    local_c = (ulonglong)uVar2;
    fVar1 = (float)local_c;
    local_c._0_4_ = (undefined4)(longlong)ROUND(local_1c * fVar1);
    *param_4 = (undefined4)local_c;
    local_c._0_4_ = (undefined4)(longlong)ROUND(local_18 * fVar1);
    param_4[1] = (undefined4)local_c;
    local_c._0_4_ = (undefined4)(longlong)ROUND(local_14 * fVar1);
    param_4[2] = (undefined4)local_c;
  }
  return;
}

