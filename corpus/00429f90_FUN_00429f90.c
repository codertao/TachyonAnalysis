
void FUN_00429f90(int param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_34 [24];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_1;
  iVar8 = DAT_005b3300;
  if ((((((byte)DAT_005b2154 & 1) != 0) && (iVar9 = *(int *)(DAT_005b3300 + 0x90), iVar9 != 0)) &&
      (local_8 = FUN_00492c60(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4), local_8 != 0)) &&
     (*(int *)(iVar9 + 0x8c) != 0)) {
    pcVar2 = *(code **)(*(int *)(iVar9 + 0x8c) + 0x78);
    if ((pcVar2 != (code *)0x0) && (iVar5 = (*pcVar2)(iVar9,9,0), iVar5 == 0)) {
      return;
    }
    param_1 = FUN_0048e440(iVar8 + 0x34,iVar9 + 0x34);
    if (*(int *)(local_8 + 0x54) < 0x8000) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 / *(int *)(local_8 + 0x54);
    }
    local_1c = *(int *)(iVar9 + 0xa0) * param_1 + *(int *)(iVar9 + 0x34);
    local_18 = *(int *)(iVar9 + 0xa4) * param_1 + *(int *)(iVar9 + 0x38);
    local_14 = *(int *)(iVar9 + 0xa8) * param_1 + *(int *)(iVar9 + 0x3c);
    FUN_0052db6a(local_34,-*(int *)(iVar8 + 0x4c),-*(int *)(iVar8 + 0x50),-*(int *)(iVar8 + 0x54));
    FUN_0052dbcd(local_34);
    local_1c = local_1c - *(int *)(iVar8 + 0x34);
    local_18 = local_18 - *(int *)(iVar8 + 0x38);
    local_14 = local_14 - *(int *)(iVar8 + 0x3c);
    FUN_004b2410(&local_1c,&local_1c);
    if (-1 < local_14) {
      piVar1 = (int *)(iVar4 + 0x684);
      FUN_004b2e00(&local_1c,piVar1);
      local_10 = DAT_005a67dc << 7;
      local_c = DAT_005a67e0 << 7;
      uVar6 = FUN_0048e480(piVar1,&local_10);
      uVar6 = uVar6 >> 7;
      if (0x20 < uVar6) {
        uVar6 = 0x20;
      }
      if (param_1 < *(int *)(local_8 + 0x3c)) {
        iVar9 = (int)((0x20 - uVar6) * 0xff) >> 5;
        uVar7 = (int)(uVar6 << 5) >> 5;
        iVar8 = ((int)(uVar6 * 0xff) >> 5) + iVar9;
        uVar6 = iVar9 + uVar7;
      }
      else {
        iVar8 = 0x60;
        uVar6 = 0x60;
        uVar7 = 0x60;
      }
      *(uint *)(*(int *)(iVar4 + 0x680) + 4) = (iVar8 << 8 | uVar6) << 8 | uVar7;
      *piVar1 = *piVar1 >> 7;
      *(int *)(iVar4 + 0x688) = *(int *)(iVar4 + 0x688) >> 7;
      lVar3 = (longlong)(*(int *)(iVar4 + 0x694) >> 1) * (longlong)DAT_005a67e4;
      *piVar1 = *piVar1 - ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      lVar3 = (longlong)(*(int *)(iVar4 + 0x698) >> 1) * (longlong)DAT_005a67e4;
      *(uint *)(iVar4 + 0x688) =
           *(int *)(iVar4 + 0x688) - ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10)
      ;
      FUN_00452180(1);
      FUN_004281f0(*(undefined4 *)(iVar4 + 0x680),*piVar1,*(undefined4 *)(iVar4 + 0x688),4,
                   0xffffffff,*(undefined4 *)(iVar4 + 0x68c),*(undefined4 *)(iVar4 + 0x690),
                   *(undefined4 *)(iVar4 + 0x694),*(undefined4 *)(iVar4 + 0x698));
    }
  }
  return;
}

