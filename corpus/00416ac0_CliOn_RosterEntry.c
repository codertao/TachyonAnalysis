
/* S->C 0x1110 handler */

void CliOn_RosterEntry(short *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  short *psVar7;
  short *psVar8;
  undefined4 *puVar9;
  
  iVar3 = (int)*param_1;
  iVar1 = iVar3 * 0x44;
  uVar4 = 0xffffffff;
  psVar7 = param_1 + 4;
  do {
    psVar8 = psVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    psVar8 = (short *)((int)psVar7 + 1);
    sVar2 = *psVar7;
    psVar7 = psVar8;
  } while ((char)sVar2 != '\0');
  uVar4 = ~uVar4;
  puVar6 = (undefined4 *)((int)psVar8 - uVar4);
  puVar9 = (undefined4 *)(&DAT_005b3a38 + iVar1);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  *(int *)(&DAT_005b3a68 + iVar1) = (int)param_1[1];
  (&DAT_005b3a60)[iVar3 * 0x11] = (int)(char)param_1[3];
  *(int *)(&DAT_005b3a64 + iVar1) = (int)(char)param_1[2];
  *(int *)(&DAT_005b3a5c + iVar1) = (int)*(char *)((int)param_1 + 5);
  (&DAT_005b3a78)[iVar3 * 0x11] = 1;
  return;
}

