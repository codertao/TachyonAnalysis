
void FUN_00421e61(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar4 = FUN_0048e350();
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(iVar2 + 0x104) = DAT_005b216c;
  }
  else {
    *(undefined4 *)(iVar2 + 0x104) = DAT_005b2160;
  }
  iVar5 = FUN_0048e350();
  uVar4 = iVar5 * 4 - 0x40000U & 0x40000;
  *(uint *)(iVar2 + 0x108) = uVar4;
  *(undefined4 *)(unaff_EBP + 8) = 0x1000;
  *(uint *)(unaff_EBP + -4) = uVar4;
  lVar3 = (longlong)*(int *)(unaff_EBP + -4) * (longlong)*(int *)(unaff_EBP + 8);
  *(uint *)(iVar2 + 0x124) = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  FUN_0048ecf0(*(undefined4 *)(iVar2 + 0x104),(int *)(iVar2 + 0x118));
  piVar1 = (int *)(iVar2 + 0x10c);
  *piVar1 = *(int *)(iVar2 + 0x118);
  *(undefined4 *)(iVar2 + 0x110) = *(undefined4 *)(iVar2 + 0x11c);
  *(undefined4 *)(iVar2 + 0x114) = *(undefined4 *)(iVar2 + 0x120);
  FUN_004e04ba(piVar1);
  *(int *)(iVar2 + 0x110) = *(int *)(iVar2 + 0x110) >> 2;
  *(int *)(iVar2 + 0x114) = *(int *)(iVar2 + 0x114) >> 2;
  *piVar1 = *piVar1 >> 2;
  return;
}

