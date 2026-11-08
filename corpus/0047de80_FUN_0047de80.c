
int FUN_0047de80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  ulonglong local_44;
  int local_38;
  int local_30;
  uint local_20;
  int local_1c;
  
  uVar4 = DAT_005a6810;
  local_1c = 0;
  fVar11 = (float10)FUN_0047ba70();
  local_44._0_4_ = (int)(longlong)ROUND(fVar11);
  iVar5 = (int)local_44;
  fVar11 = (float10)FUN_0047ba80();
  local_44._0_4_ = (int)(longlong)ROUND(fVar11);
  iVar6 = (int)local_44;
  fVar11 = (float10)FUN_0047bc30();
  local_20 = 0;
  fVar1 = (float)fVar11;
  piVar9 = &DAT_005842c8;
  do {
    if (piVar9[7] != 0) {
      iVar10 = *piVar9;
      if (iVar10 == -1) {
        FUN_004abcc0(0x1f,piVar9[1],piVar9[2],piVar9[3]);
        iVar10 = 0x1f;
      }
      FUN_00452180(2);
      fVar2 = (float)iVar5;
      local_38 = (int)(longlong)ROUND(((float)piVar9[-0x12] - fVar2) * fVar1);
      iVar7 = local_38;
      local_38 = (int)(longlong)ROUND(((float)piVar9[-0xe] - fVar2) * fVar1);
      fVar3 = (float)iVar6;
      local_30 = (int)(longlong)ROUND(((float)piVar9[-0x11] - fVar3) * fVar1);
      iVar8 = local_30;
      local_30 = (int)(longlong)ROUND(((float)piVar9[-0xd] - fVar3) * fVar1);
      FUN_004abf90((uint)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   (uint)((longlong)iVar8 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar8 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   (uint)((longlong)local_38 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)local_38 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   (uint)((longlong)local_30 * (longlong)DAT_005a67e4) >> 0x10 |
                   (int)((ulonglong)((longlong)local_30 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                   iVar10);
      if ((DAT_005524dc == 0) && (piVar9[-6] != 0)) {
        FUN_00466860(s_tracer_wav_005528ec,(GLBL_spacesav[0x54] & 0xfffffff) >> 4);
      }
      if (((piVar9[6] != 0) && (piVar9[4] != 0)) && (piVar9[-2] != 0)) {
        FUN_00452180(4);
        local_44 = (ulonglong)(uint)piVar9[-2];
        local_38 = (int)(longlong)ROUND(((float)piVar9[-0x10] - fVar2) * fVar1);
        iVar7 = local_38;
        local_38 = (int)(longlong)ROUND(((float)piVar9[-0xf] - fVar3) * fVar1);
        iVar8 = local_38;
        local_38 = (int)(longlong)ROUND((float)local_44 * fVar1);
        FUN_004ace30((uint)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)iVar7 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                     (uint)((longlong)iVar8 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)iVar8 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
                     (uint)((longlong)local_38 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)local_38 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
                     ,iVar10);
      }
      if ((local_1c == 0) && ((piVar9[-6] != 0 || (piVar9[-5] != 0)))) {
        local_1c = 1;
      }
      if (piVar9[8] != 0) break;
    }
    local_20 = local_20 + 1;
    piVar9 = piVar9 + 0x1b;
  } while (local_20 < 0x80);
  FUN_00452180(uVar4);
  return local_1c;
}

