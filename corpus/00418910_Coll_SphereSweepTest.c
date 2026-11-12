
/* sweep */

bool Coll_SphereSweepTest
               (int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_4 == 0) {
    uVar2 = *(uint *)(*(int *)(param_3 + 0x58) + 0x30);
  }
  else {
    lVar1 = (longlong)*(int *)(*(int *)(param_3 + 0x58) + 0x30) * (longlong)param_4;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
    lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_3 + 0x1c);
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  local_8 = (int *)(param_3 + 0x34);
  local_14 = *local_8 - *param_1;
  local_10 = *(int *)(param_3 + 0x38) - param_1[1];
  local_c = *(int *)(param_3 + 0x3c) - param_1[2];
  iVar3 = MathAsm_DotFixed16_Fwd(param_5,&local_14);
  if (iVar3 < (int)-uVar2) {
    return false;
  }
  if ((int)(uVar2 + param_6) < iVar3) {
    return false;
  }
  local_20 = *param_1 +
             ((uint)((longlong)*param_5 * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)*param_5 * (longlong)iVar3) >> 0x20) << 0x10);
  local_1c = param_1[1] +
             ((uint)((longlong)param_5[1] * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[1] * (longlong)iVar3) >> 0x20) << 0x10);
  local_18 = param_1[2] +
             ((uint)((longlong)param_5[2] * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)param_5[2] * (longlong)iVar3) >> 0x20) << 0x10);
  iVar3 = Vec3_DistanceTo(&local_20,local_8);
  return iVar3 <= (int)uVar2;
}

