
void FUN_0044ffe0(int param_1,char *param_2)

{
  char cVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  short *psVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  uVar4 = 0xffffffff;
  pcVar9 = (char *)(*(int *)(*(int *)(param_1 + 200) + 0x8c) + 4);
  do {
    pcVar7 = pcVar9;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar9 = param_2;
  for (uVar5 = uVar4 >> 2; pcVar9 = pcVar9 + 4, uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar6 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar6 + 0x34);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar6 + 0x38);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar6 + 0x3c);
  iVar6 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_1 + 0x140);
  psVar8 = (short *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x158);
  clr_bytes(psVar8,0x20);
  puVar10 = (undefined4 *)(param_1 + 0x164);
  iVar6 = 8;
  do {
    psVar2 = (short *)*puVar10;
    if ((psVar2 != (short *)0x0) && (*psVar8 = *psVar2 + 1, *(int *)(psVar2 + 0x28) != 0)) {
      sVar3 = FUN_00492b40(psVar2,*(uint *)(param_1 + 0x158) & 0x100000);
      psVar8[1] = sVar3;
    }
    puVar10 = puVar10 + 3;
    psVar8 = psVar8 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

