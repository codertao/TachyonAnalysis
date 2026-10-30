
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422280(undefined4 param_1)

{
  uint uVar1;
  undefined8 local_8;
  
  uVar1 = FUN_0048e440(param_1,DAT_005b3300 + 0x34);
  if (uVar1 < 0xfa0001) {
    local_8 = (ulonglong)uVar1;
    local_8._0_4_ = (int)(longlong)ROUND((float)local_8 * _DAT_0052e74c * _DAT_0052e748);
    FUN_004a0aa0(10000 - (int)local_8,500000);
  }
  return;
}

