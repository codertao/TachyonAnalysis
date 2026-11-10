
/* gate name from ingame.bin record 0x7d + placement +0x5c; +0x50 var == 1 -> flag 1 */

void Gate_InitRegional(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  iVar2 = Spx_ReadVarRef(param_2 + 0x50);
  if (iVar2 == 1) {
    *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  }
  pcVar3 = (char *)FUN_004359a0(*(undefined4 *)(param_2 + 0x5c));
  if (pcVar3 == (char *)0x0) {
    pcVar3 = &DAT_00536134;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar6 + -uVar4;
  pcVar6 = (char *)(param_1 + 0xf8);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

