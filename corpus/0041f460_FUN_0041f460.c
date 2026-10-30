
void FUN_0041f460(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = DAT_005b22e8;
  if (((DAT_005b22e8 != 0) && (DAT_0058f1c0 == 0)) &&
     (piVar1 = (int *)(*(int *)(DAT_005b22e8 + 0x44) + DAT_005b22f0 * 0x18), *piVar1 != 0)) {
    piVar1[3] = 0x200008;
    DAT_005a64c4 = 0x80;
    piVar1[1] = 0x80;
    lVar2 = (longlong)(0x26c - (1 << (*(byte *)(piVar1 + 2) & 0x1f))) * (longlong)DAT_005a67e4;
    DAT_005a62d8 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    DAT_005a62dc = (uint)((longlong)DAT_005a67e4 * 0x14) >> 0x10 |
                   (int)((ulonglong)((longlong)DAT_005a67e4 * 0x14) >> 0x20) << 0x10;
    lVar2 = (longlong)(1 << (*(byte *)(piVar1 + 2) & 0x1f)) * (longlong)DAT_005a67e4;
    DAT_005a62e0 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)(1 << (*(byte *)((int)piVar1 + 9) & 0x1f)) * (longlong)DAT_005a67e4;
    DAT_005a62e4 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    DAT_005a64c0 = piVar1[3];
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    DAT_005a64cc = 1 << (*(byte *)(piVar1 + 2) & 0x1f);
    DAT_005a64d0 = 1 << (*(byte *)((int)piVar1 + 9) & 0x1f);
    DAT_005a64c8 = piVar1;
    FUN_00452180(1);
    if (*(int *)(iVar3 + 0x68) != 0) {
      FUN_004ad9c0(*(int *)(iVar3 + 0x68),0);
    }
    FUN_004ace10();
  }
  return;
}

