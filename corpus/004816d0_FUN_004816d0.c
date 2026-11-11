
void FUN_004816d0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = DAT_005a6810;
  FUN_00452180(2);
  for (uVar3 = (uint)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x10 |
               (int)((ulonglong)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
      lVar1 = (longlong)(param_2 + param_4) * (longlong)DAT_005a67e4,
      (int)uVar3 < (int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
      uVar3 = uVar3 + 1) {
    lVar1 = (longlong)(param_1 + param_3) * (longlong)DAT_005a67e4;
    Gfx_DrawLine((uint)((longlong)param_1 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_1 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                 uVar3,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10,uVar3,param_5);
  }
  FUN_00452180(uVar2);
  return;
}

