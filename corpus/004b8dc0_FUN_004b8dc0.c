
void FUN_004b8dc0(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = DAT_006af62c;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x1c) == 0) {
      *(undefined4 *)(iVar3 + 0x1c) = DAT_006af648;
    }
    uVar1 = *(ushort *)(iVar3 + 0x22);
    puVar6 = (undefined4 *)(iVar3 + 0x20);
    puVar7 = DAT_006af5d4;
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DAT_006af5d4 = (undefined4 *)((int)DAT_006af5d4 + (uint)*(ushort *)(iVar3 + 0x22));
    iVar5 = *(int *)(iVar3 + 0x18) + -1;
    *(int *)(iVar3 + 0x18) = iVar5;
    if (iVar5 < 1) {
      FUN_004b7930(iVar3,&DAT_006af62c);
      FUN_004b78a0(&DAT_006af5e4,iVar3);
    }
  }
  return;
}

