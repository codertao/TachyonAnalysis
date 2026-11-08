
/* kind 3: ModelPool_SetSlot(pak, slot, pal) into g_ObjModelPool */

void TachCli_OnModelTable(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar4 = 0;
  pcVar5 = (char *)(param_1 + 6);
  if (*(short *)(param_1 + 4) != 0) {
    do {
      uVar2 = *(undefined2 *)pcVar5;
      pcVar6 = pcVar5 + 2;
      uVar3 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar5 + ~uVar3 + 2;
      uVar3 = 0xffffffff;
      pcVar5 = pcVar7;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar7 + ~uVar3;
      ModelPool_SetSlot(pcVar6,uVar2,pcVar7,&g_ObjModelPool);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 4));
  }
  return;
}

