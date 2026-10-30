
/* ordnance proximity detonation / effect spawn */

void Dcb_Detonate(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 0x100);
  iVar5 = *(int *)(param_1 + 0x138) * 0x80 + *(int *)(param_1 + 0x4c) * -0x80;
  uVar6 = iVar5 >> 7;
  uVar8 = iVar5 >> 0x1f;
  uVar10 = uVar6 ^ uVar8;
  if ((int)uVar6 < 0x20001) {
    if ((int)uVar6 < -0x20000) {
      uVar6 = 0xfffe0000;
    }
  }
  else {
    uVar6 = 0x20000;
  }
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar6;
  iVar5 = *(int *)(param_1 + 0x13c) * 0x80 + *(int *)(param_1 + 0x50) * -0x80;
  uVar7 = iVar5 >> 7;
  uVar9 = iVar5 >> 0x1f;
  uVar6 = uVar7 ^ uVar9;
  if ((int)uVar7 < 0x20001) {
    if ((int)uVar7 < -0x20000) {
      uVar7 = 0xfffe0000;
    }
  }
  else {
    uVar7 = 0x20000;
  }
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar7;
  if ((((int)((uVar10 - uVar8) + (uVar6 - uVar9)) >> 1 < *(int *)(iVar2 + 0xc)) &&
      (*(int *)(param_1 + 0x150) != 0)) && (*(int *)(param_1 + 0x90) != 0)) {
    FUN_00497790(param_1,param_1 + 0x100,param_1 + 0x15c,0x10000,0);
  }
  uVar6 = *(uint *)(param_1 + 0x154) ^ DAT_005897e4;
  if ((uVar6 & 0x1f) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x90) == 0) || ((char)uVar6 == '\0')) {
    iVar5 = FUN_0048b2b0(param_1,*(undefined4 *)
                                  ((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8),0,
                         *(undefined4 *)(param_1 + 0x158),param_1,*(undefined4 *)(iVar2 + 0x5c));
    *(int *)(param_1 + 0x90) = iVar5;
    if (iVar5 == 0) goto LAB_00404eb3;
  }
  iVar5 = *(int *)(param_1 + 0x90);
  piVar1 = (int *)(param_1 + 0x34);
  iVar4 = FUN_0048e440(piVar1,(int *)(iVar5 + 0x34));
  if (iVar4 <= *(int *)(param_1 + 0x158)) {
    local_54 = *(int *)(iVar5 + 0x34) - *piVar1;
    local_50 = *(int *)(iVar5 + 0x38) - *(int *)(param_1 + 0x38);
    local_4c = *(int *)(iVar5 + 0x3c) - *(int *)(param_1 + 0x3c);
    local_30 = -*(int *)(param_1 + 0xf4);
    local_2c = -*(int *)(param_1 + 0xf8);
    local_28 = -*(int *)(param_1 + 0xfc);
    FUN_004b1bb0(local_18,&local_30);
    FUN_004b2410(&local_54,&local_54);
    FUN_004b2410(iVar5 + 0xa0,local_24);
    local_54 = local_54 + *piVar1;
    local_50 = local_50 + *(int *)(param_1 + 0x38);
    piVar3 = *(int **)(param_1 + 0x108);
    local_4c = local_4c + *(int *)(param_1 + 0x3c);
    local_48 = *piVar3 + *piVar1;
    local_40 = piVar3[2] + *(int *)(param_1 + 0x3c);
    local_44 = piVar3[1] + *(int *)(param_1 + 0x38);
    FUN_00402a20(&local_48,&local_54,local_24,iVar5,iVar4,*(undefined4 *)(iVar2 + 0x54),&local_3c,
                 *(undefined4 *)(param_1 + 0x18c));
    if ((0x71c70 < local_38) && (local_38 < 0x800001)) {
      *(undefined4 *)(param_1 + 0x144) = local_3c;
      *(int *)(param_1 + 0x148) = local_38;
      *(undefined4 *)(param_1 + 0x14c) = local_34;
      FUN_0048e720(&local_3c,param_1 + 0xf4,param_1 + 0x138);
      *(undefined4 *)(param_1 + 0x150) = 1;
      return;
    }
  }
LAB_00404eb3:
  FUN_00404bb0(param_1);
  return;
}

