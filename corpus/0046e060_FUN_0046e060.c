
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e060(int *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  float local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (DAT_005878c0 != 0)) {
    DAT_005878d0 = *param_1;
    DAT_005878d4 = param_1[1];
    DAT_005878d8 = param_1[2];
    DAT_005878dc = param_1[3];
    local_10 = (ulonglong)*(uint *)(DAT_005635c4 + 0x30);
    local_8 = (float)DAT_00604470;
    lVar1 = (longlong)((DAT_005878d8 - DAT_005878d0 >> 1) + 1) * (longlong)DAT_005a67e4;
    _DAT_0058789c = 0;
    _DAT_005878a0 = 0;
    fVar2 = ((local_8 * (float)local_10 * _DAT_0052e5d8) /
            (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10)) *
            _DAT_0052e544;
    local_10 = (ulonglong)ROUND(fVar2 * _DAT_0052e594 + fVar2);
    _DAT_005878a4 = (undefined4)local_10;
    FUN_004b1940(&local_28,&local_1c);
  }
  return;
}

