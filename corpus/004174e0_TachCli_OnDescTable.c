
/* kind 2: Desc_CreateByType(desName, slot) so descriptor slots match the server */

void TachCli_OnDescTable(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_4 [4];
  
  uVar4 = 0;
  puVar5 = (undefined2 *)(param_1 + 6);
  if (*(short *)(param_1 + 4) != 0) {
    do {
      uVar2 = *puVar5;
      pcVar6 = (char *)(puVar5 + 1);
      uVar3 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      puVar5 = (undefined2 *)((int)puVar5 + ~uVar3 + 2);
      Desc_CreateByType(pcVar6,local_4,0,0,1,uVar2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 4));
  }
  return;
}

