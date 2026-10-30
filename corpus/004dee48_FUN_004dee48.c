
void __fastcall FUN_004dee48(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  int iVar7;
  uint uVar8;
  int unaff_EDI;
  
  if (unaff_EBX == 0xffffffff) {
    unaff_EBX = *(uint *)(unaff_EDI + 0x18);
  }
  if (param_1 == -1) {
    param_1 = *(int *)(unaff_EDI + 0x1c);
  }
  *(uint *)(unaff_EDI + 0x18) = unaff_EBX;
  *(int *)(unaff_EDI + 0x1c) = param_1;
  bVar4 = (char)*(undefined4 *)(unaff_EDI + 0x20) + 0x10;
  DAT_004dee40 = (int)(char)((ushort)*(undefined2 *)(&DAT_004df8d0 + (unaff_EBX & 0xff) * 2) >> 8) *
                 param_1 * DAT_00601e20 >> (bVar4 & 0x1f);
  DAT_004dee44 = (int)(char)*(undefined2 *)(&DAT_004df8d0 + (unaff_EBX & 0xff) * 2) *
                 param_1 * DAT_00601e20 >> (bVar4 & 0x1f);
  if (param_2 == 0) {
    param_2 = 0x10000;
  }
  if (param_2 != -1) {
    *(int *)(unaff_EDI + 0x34) =
         (int)((longlong)param_2 * (longlong)*(int *)(unaff_EDI + 0x14) >> 0x22);
  }
  uVar2 = DAT_004dee44;
  uVar1 = DAT_004dee40;
  uVar5 = 0;
  if (((int)(*(uint *)(unaff_EDI + 0x24) ^ DAT_004dee40) < 0) &&
     (uVar5 = *(int *)(unaff_EDI + 0x24) - DAT_004dee40, (int)uVar5 < 0)) {
    uVar5 = -uVar5;
  }
  if ((int)(*(uint *)(unaff_EDI + 0x28) ^ DAT_004dee44) < 0) {
    iVar7 = *(int *)(unaff_EDI + 0x28) - DAT_004dee44;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    uVar5 = uVar5 + iVar7;
  }
  DAT_004dee40 = -DAT_004dee40;
  DAT_004dee44 = -DAT_004dee44;
  uVar6 = 0;
  if (((int)(*(uint *)(unaff_EDI + 0x24) ^ DAT_004dee40) < 0) &&
     (uVar6 = *(int *)(unaff_EDI + 0x24) + uVar1, (int)uVar6 < 0)) {
    uVar6 = -uVar6;
  }
  if ((int)(*(uint *)(unaff_EDI + 0x28) ^ DAT_004dee44) < 0) {
    iVar7 = *(int *)(unaff_EDI + 0x28) + uVar2;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    uVar6 = uVar6 + iVar7;
  }
  uVar3 = DAT_004dee40;
  uVar8 = DAT_004dee44;
  if (uVar5 <= uVar6) {
    uVar3 = uVar1;
    uVar8 = uVar2;
  }
  *(uint *)(unaff_EDI + 0x24) = uVar3;
  *(uint *)(unaff_EDI + 0x28) = uVar8;
  return;
}

