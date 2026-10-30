
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004294c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_18;
  int local_10;
  float fStack_c;
  float local_8;
  
  iVar2 = FUN_0048e4c0(param_1,param_2,DAT_005b0738,DAT_005b073c);
  if (0xf80 < iVar2) {
    fStack_c = (float)(param_1 - DAT_005b0738);
    local_8 = (float)(param_2 - DAT_005b073c);
    FUN_0048e510(&fStack_c,&local_8);
    local_10 = (int)(longlong)ROUND(fStack_c * _DAT_0052e820);
    param_1 = local_10 + DAT_005b0738;
    local_10 = (int)(longlong)ROUND(local_8 * _DAT_0052e820);
    param_2 = local_10 + DAT_005b073c;
    iVar2 = 0xf80;
  }
  param_1 = param_1 - DAT_005b0738;
  if ((param_1 == 0) && (param_2 - DAT_005b073c == 0)) {
    param_1 = 0x80;
  }
  fStack_c = (float)param_1;
  local_8 = (float)(param_2 - DAT_005b073c);
  FUN_0048e510(&fStack_c,&local_8);
  local_8 = (float)(0x1f00 - iVar2) * local_8;
  local_18 = (int)(longlong)ROUND((float)(0x1f00 - iVar2) * fStack_c);
  lVar1 = (longlong)local_18;
  local_18 = (int)(longlong)ROUND(local_8);
  lVar1 = (longlong)
          (((int)(DAT_005b0738 +
                 ((uint)(lVar1 * DAT_005b0730) >> 0x10 |
                 (int)((ulonglong)(lVar1 * DAT_005b0730) >> 0x20) << 0x10)) >> 7) + DAT_005b0140) *
          (longlong)DAT_005a67e4;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)
          (((int)(DAT_005b073c +
                 ((uint)((longlong)local_18 * (longlong)DAT_005b072c) >> 0x10 |
                 (int)((ulonglong)((longlong)local_18 * (longlong)DAT_005b072c) >> 0x20) << 0x10))
           >> 7) + DAT_005b0144) * (longlong)DAT_005a67e4;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (DAT_005b0984 != 0) {
    FUN_0042a2b0(&DAT_005b01e0,uVar3,uVar4,param_3,param_4);
    return;
  }
  FUN_00452180(2);
  FUN_004abf90(uVar3,uVar4,uVar3 + 1,uVar4,param_3);
  iVar2 = uVar4 + 1;
  FUN_004abf90(uVar3,iVar2,uVar3 + 1,iVar2,param_3);
  if (param_4 != 0) {
    FUN_004abf90(uVar3 - 1,uVar4,uVar3 - 1,iVar2,DAT_005a6324 & 0xff);
    FUN_004abf90(uVar3 + 2,uVar4,uVar3 + 2,iVar2,DAT_005a6324 & 0xff);
  }
  return;
}

