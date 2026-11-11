
void FUN_00465970(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar5 = param_1;
  FUN_00452180(2);
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    param_1 = *(undefined4 *)(param_1 + 0x10);
  }
  else if (iVar9 == 1) {
    param_1 = *(undefined4 *)(param_1 + 0x14);
  }
  else if (iVar9 == 2) {
    param_1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    param_1 = DAT_00563568;
  }
  if (*(int *)(iVar5 + 8) == 0) {
    *(int *)(iVar5 + 0x30) =
         ((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 0x3c)) /
         *(int *)(iVar5 + 0x38) + -1;
    lVar1 = (longlong)(*(int *)(*(int *)(iVar5 + 4) + 0x48) + *(int *)(iVar5 + 0x20)) *
            (longlong)DAT_005a67e4;
    lVar2 = (longlong)(*(int *)(*(int *)(iVar5 + 4) + 0x48) + *(int *)(iVar5 + 0x28)) *
            (longlong)DAT_005a67e4;
    iVar9 = ((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x1c)) * *(int *)(iVar5 + 0x34)) /
            *(int *)(iVar5 + 0x38) + *(int *)(*(int *)(iVar5 + 4) + 0x44) + 1 +
            *(int *)(iVar5 + 0x1c);
    lVar3 = (longlong)iVar9 * (longlong)DAT_005a67e4;
    lVar4 = (longlong)(iVar9 + *(int *)(iVar5 + 0x30)) * (longlong)DAT_005a67e4;
    for (uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        (int)uVar6 < (int)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        uVar6 = uVar6 + 1) {
      Gfx_DrawLine((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10,uVar6,
                   (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10,uVar6,param_1);
    }
  }
  else {
    iVar9 = *(int *)(iVar5 + 0x28) - *(int *)(iVar5 + 0x20);
    *(int *)(iVar5 + 0x30) = (*(int *)(iVar5 + 0x3c) * iVar9) / *(int *)(iVar5 + 0x38) + -1;
    lVar1 = (longlong)
            ((*(int *)(iVar5 + 0x34) * iVar9) / *(int *)(iVar5 + 0x38) +
             *(int *)(*(int *)(iVar5 + 4) + 0x48) + 1 + *(int *)(iVar5 + 0x20)) *
            (longlong)DAT_005a67e4;
    uVar6 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)*(int *)(iVar5 + 0x30) * (longlong)DAT_005a67e4;
    lVar2 = (longlong)(*(int *)(*(int *)(iVar5 + 4) + 0x44) + *(int *)(iVar5 + 0x1c)) *
            (longlong)DAT_005a67e4;
    uVar7 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)(*(int *)(*(int *)(iVar5 + 4) + 0x44) + *(int *)(iVar5 + 0x24)) *
            (longlong)DAT_005a67e4;
    uVar8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    if ((int)uVar7 < (int)uVar8) {
      do {
        Gfx_DrawLine(uVar7,uVar6,uVar7,
                     ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) + uVar6,param_1
                    );
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar8);
      FUN_00452150();
      return;
    }
  }
  FUN_00452150();
  return;
}

