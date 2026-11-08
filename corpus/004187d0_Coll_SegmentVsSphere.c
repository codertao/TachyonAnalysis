
/* broad phase vs model bounding radius */

bool Coll_SegmentVsSphere
               (int *param_1,vec3 *param_2,int param_3,uint param_4,int *param_5,int param_6)

{
  vec3 *pvVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  vec3 *local_8;
  
  if (param_4 == 0) {
    uVar3 = *(uint *)(*(int *)(param_3 + 0x58) + 0x30);
  }
  else {
    lVar2 = (longlong)*(int *)(*(int *)(param_3 + 0x58) + 0x30) * (longlong)(int)param_4;
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  }
  if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
    lVar2 = (longlong)(int)uVar3 * (longlong)*(int *)(param_3 + 0x1c);
    uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  }
  param_4 = uVar3 * 2;
  if ((int)param_4 < 0x1388000) {
    param_4 = 0x1388000;
  }
  pvVar1 = (vec3 *)(param_3 + 0x34);
  local_8 = pvVar1;
  uVar4 = distance_between(param_2,pvVar1);
  if (param_4 < uVar4) {
    return false;
  }
  local_14 = pvVar1->x - *param_1;
  local_10 = *(int *)(param_3 + 0x38) - param_1[1];
  local_c = *(int *)(param_3 + 0x3c) - param_1[2];
  iVar5 = FUN_004e058e(param_5,&local_14);
  if (iVar5 < (int)-uVar3) {
    return false;
  }
  if ((int)(uVar3 + param_6) < iVar5) {
    return false;
  }
  local_20 = *param_1 +
             ((uint)((longlong)*param_5 * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)*param_5 * (longlong)iVar5) >> 0x20) << 0x10);
  local_1c = param_1[1] +
             ((uint)((longlong)param_5[1] * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[1] * (longlong)iVar5) >> 0x20) << 0x10);
  local_18 = ((uint)((longlong)param_5[2] * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[2] * (longlong)iVar5) >> 0x20) << 0x10) +
             param_1[2];
  iVar5 = FUN_0048e550(&local_20,local_8);
  return iVar5 <= (int)uVar3;
}

