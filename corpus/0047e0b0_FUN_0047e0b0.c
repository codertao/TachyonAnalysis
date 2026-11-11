
void FUN_0047e0b0(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_34;
  int local_2c;
  int local_20;
  int local_10;
  
  uVar2 = DAT_005a6810;
  iVar8 = DAT_0056365c;
  iVar9 = DAT_00563658;
  local_10 = DAT_00563658;
  fVar10 = (float10)FUN_0047ba70();
  local_34 = (int)(longlong)ROUND(fVar10);
  iVar3 = local_34;
  fVar10 = (float10)FUN_0047ba80();
  local_34 = (int)(longlong)ROUND(fVar10);
  iVar4 = local_34;
  fVar10 = (float10)FUN_0047bc30();
  fVar1 = (float)fVar10;
  FUN_00452180(2);
  if (iVar9 != 0) {
    iVar9 = iVar8 + 0x40;
    do {
      if (iVar9 == 0x40) break;
      str_sprintf(&DAT_005a41e0,s__s_REGION_00534288,iVar8);
      iVar6 = FUN_0047a8b0(&DAT_005a41e0,iVar9 + -0x20);
      str_sprintf(&DAT_005a41e0,s__s_REGION_00534288,iVar9);
      iVar7 = FUN_0047a8b0(&DAT_005a41e0,iVar9 + 0x20);
      if ((((iVar6 != 0) && (iVar7 != 0)) && (*(int *)(iVar6 + 0x98) != 0)) &&
         (*(int *)(iVar7 + 0x98) != 0)) {
        local_34 = (int)(longlong)ROUND(((float)*(int *)(iVar6 + 0x80) - (float)iVar3) * fVar1);
        local_2c = (int)(longlong)ROUND(((float)*(int *)(iVar7 + 0x80) - (float)iVar3) * fVar1);
        iVar5 = local_2c;
        local_2c = (int)(longlong)ROUND(((float)*(int *)(iVar6 + 0x84) - (float)iVar4) * fVar1);
        local_20 = (int)(longlong)ROUND(((float)*(int *)(iVar7 + 0x84) - (float)iVar4) * fVar1);
        FUN_004abcc0(0x1f,*(undefined4 *)(iVar9 + 0x40),*(undefined4 *)(iVar9 + 0x44),
                     *(undefined4 *)(iVar9 + 0x48));
        Gfx_DrawLine((uint)((longlong)local_34 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)local_34 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
                     ,(uint)((longlong)local_2c * (longlong)DAT_005a67e4) >> 0x10 |
                      (int)((ulonglong)((longlong)local_2c * (longlong)DAT_005a67e4) >> 0x20) <<
                      0x10,(uint)((longlong)iVar5 * (longlong)DAT_005a67e4) >> 0x10 |
                           (int)((ulonglong)((longlong)iVar5 * (longlong)DAT_005a67e4) >> 0x20) <<
                           0x10,
                     (uint)((longlong)local_20 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)local_20 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
                     ,0x1f);
      }
      iVar8 = iVar8 + 0x8c;
      iVar9 = iVar9 + 0x8c;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  FUN_00452180(uVar2);
  return;
}

