
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d770(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  undefined8 local_34;
  undefined4 local_24;
  undefined4 local_1c;
  
  fVar11 = (float10)FUN_0047ba70();
  local_34._0_4_ = (uint)(longlong)ROUND(fVar11);
  uVar8 = (uint)local_34 & 0x8000003f;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
  }
  fVar11 = (float10)FUN_0047ba80();
  local_34._0_4_ = (uint)(longlong)ROUND(fVar11);
  uVar9 = (uint)local_34 & 0x8000003f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
  }
  fVar11 = (float10)FUN_0047bc30();
  uVar7 = DAT_005a6810;
  fVar1 = (float)fVar11;
  FUN_00452180(2);
  uVar10 = 0;
  local_34._0_4_ = (uint)(longlong)ROUND(fVar1 * _DAT_0052ec64);
  iVar5 = -(uint)local_34;
  if (iVar5 != -1) {
    do {
      local_34 = (ulonglong)uVar10;
      fVar6 = ((float)local_34 * _DAT_0052ec60 - (float)(int)uVar8) + (float)DAT_00571fd0;
      lVar2 = (longlong)(int)(longlong)ROUND((float10)DAT_00571724) * (longlong)DAT_005a67e4;
      lVar3 = (longlong)(int)(longlong)ROUND(fVar6 * fVar1) * (longlong)DAT_005a67e4;
      lVar4 = (longlong)(int)(longlong)ROUND((float)DAT_00571fd4) * (longlong)DAT_005a67e4;
      local_1c = (int)(longlong)ROUND(fVar6 * fVar1);
      Gfx_DrawLine((uint)((longlong)local_1c * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)local_1c * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10,
                   (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10,
                   (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10,0x1e);
      uVar10 = uVar10 + 1;
    } while (uVar10 < iVar5 + 1U);
  }
  uVar8 = 0;
  do {
    local_34 = (ulonglong)uVar8;
    fVar6 = ((float)local_34 * _DAT_0052ec60 - (float)(int)uVar9) + (float)DAT_00571fd4;
    lVar2 = (longlong)(int)(longlong)ROUND(fVar6 * fVar1) * (longlong)DAT_005a67e4;
    lVar3 = (longlong)(int)(longlong)ROUND((float)DAT_00571720) * (longlong)DAT_005a67e4;
    lVar4 = (longlong)(int)(longlong)ROUND(fVar6 * fVar1) * (longlong)DAT_005a67e4;
    local_24 = (int)(longlong)ROUND((float)DAT_00571fd0);
    Gfx_DrawLine((uint)((longlong)local_24 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)local_24 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                 (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10,
                 (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10,
                 (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10,0x1e);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  FUN_00452180(uVar7);
  return;
}

