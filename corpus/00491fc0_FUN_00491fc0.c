
void FUN_00491fc0(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (uint)((longlong)DAT_005a67e4 * 5) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_005a67e4 * 5) >> 0x20) << 0x10;
  uVar3 = (uint)((longlong)DAT_005a67e4 * 2) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_005a67e4 * 2) >> 0x20) << 0x10;
  uVar4 = (uint)((longlong)DAT_00565860 * (longlong)DAT_005a67e4) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_00565860 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  uVar5 = (uint)((longlong)DAT_005a67e4 * 0x1e2) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1e2) >> 0x20) << 0x10;
  lVar1 = (longlong)(int)uVar2 * (longlong)DAT_005a67e4;
  iVar6 = ((int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 1) + uVar4;
  uVar7 = (uint)((longlong)DAT_005a67e4 * 0x22b) >> 0x10 |
          (int)((ulonglong)((longlong)DAT_005a67e4 * 0x22b) >> 0x20) << 0x10;
  FUN_004abcc0(0x1f,0xc0,0xc0,0xc0);
  Gfx_DrawLine(uVar5 + 1,iVar6,uVar7 - 1,iVar6,DAT_005a633f);
  DAT_005a62d0 = 0;
  DAT_005a62d4 = 0;
  DAT_005a62d8 = uVar5 + (((uVar7 - uVar3) - uVar5) * GLBL_spacesav[0x42] >> 8);
  DAT_005a64cc = 2;
  DAT_005a64d0 = 5;
  DAT_005a64c4 = 0xffffffff;
  DAT_005a64c8 = &DAT_005657d4;
  DAT_005a64c0 = DAT_005657e0;
  DAT_005657d8 = 0xc0c0c0;
  DAT_005a62dc = uVar4;
  DAT_005a62e0 = uVar3;
  DAT_005a62e4 = uVar2;
  FUN_004ace10();
  return;
}

