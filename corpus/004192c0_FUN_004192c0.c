
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004192c0(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 local_8;
  
  uVar3 = param_1 >> 0x10 & 0x1ff;
  if (0x100 < uVar3) {
    uVar3 = 0x200 - uVar3;
  }
  local_8 = (ulonglong)uVar3;
  fVar1 = (float)local_8;
  local_8 = (ulonglong)param_2;
  fVar1 = fVar1 * _DAT_0052e630;
  fVar2 = (float)local_8;
  local_8._0_4_ = (undefined4)(longlong)ROUND(fVar2 * fVar1);
  *param_4 = (undefined4)local_8;
  local_8._0_4_ = (undefined4)(longlong)ROUND((_DAT_0052e59c - fVar1) * fVar2);
  *param_3 = (undefined4)local_8;
  return;
}

