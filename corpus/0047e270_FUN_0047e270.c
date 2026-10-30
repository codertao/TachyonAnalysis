
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e270(int param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  int local_8;
  
  iVar3 = param_1;
  fVar6 = (float10)FUN_0047ba70();
  local_20 = (longlong)ROUND(fVar6);
  local_8 = (int)local_20;
  fVar6 = (float10)FUN_0047ba80();
  local_20 = (longlong)ROUND(fVar6);
  local_10._4_4_ = (int)local_20;
  iVar4 = FUN_0047a830(param_1 + 0x60);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x6c + *(int *)(param_1 + 0x90) * 0x18) != 0)) {
    FUN_004ad9c0(*(undefined4 *)(iVar4 + 0xcc),0);
    fVar2 = (float)local_8;
    local_8 = *(int *)(iVar4 + 0x54);
    local_10 = (longlong)
               ROUND((((float)*(int *)(param_1 + 0x84) - (float)local_10._4_4_) -
                     (float)(local_8 >> 1) * *(float *)(iVar4 + 0x5c)) * _DAT_005524d4);
    local_18._0_4_ =
         (int)(longlong)
              ROUND((float)*(int *)(iVar4 + 0x48) * *(float *)(iVar4 + 0x5c) * _DAT_005524d4);
    iVar5 = (int)local_18 * DAT_005a67e4;
    local_18 = (longlong)ROUND((float)local_8 * *(float *)(iVar4 + 0x5c) * _DAT_005524d4);
    lVar1 = (longlong)
            (int)(longlong)
                 ROUND((((float)*(int *)(param_1 + 0x80) - fVar2) -
                       (float)(*(int *)(iVar4 + 0x48) >> 1) * *(float *)(iVar4 + 0x5c)) *
                       _DAT_005524d4) * (longlong)DAT_005a67e4;
    local_30 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    local_2c = (uint)((longlong)(int)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
               (int)((ulonglong)((longlong)(int)local_10 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    local_28 = local_30 + (iVar5 + 0xffff >> 0x10);
    local_24 = local_2c + ((int)local_18 * DAT_005a67e4 + 0xffff >> 0x10);
    param_1 = 0xff;
    if (param_2 == 2) {
      param_1 = 0xc4;
    }
    local_20 = (longlong)ROUND(_DAT_005524d4 * _DAT_0052e594 * (float)param_1);
    iVar5 = (int)local_20 - DAT_005524e8;
    if (param_2 == -1) {
      iVar5 = 0xff - DAT_005524e8;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    *(int *)(iVar4 + 0x70 + *(int *)(iVar3 + 0x90) * 0x18) = iVar5;
    FUN_0046ee10(iVar4 + 0x6c + *(int *)(iVar3 + 0x90) * 0x18,&local_30,
                 *(undefined4 *)(iVar3 + 0x94),0x32000008);
  }
  return;
}

