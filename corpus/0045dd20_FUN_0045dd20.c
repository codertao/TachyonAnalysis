
void FUN_0045dd20(undefined2 param_1,char *param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar2 = (undefined2 *)FUN_004b87d0();
  if (puVar2 != (undefined2 *)0x0) {
    puVar2[1] = param_3;
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 2) = param_4;
    uVar3 = 0xffffffff;
    do {
      pcVar5 = param_2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = (char *)(puVar2 + 4);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(puVar2 + 4);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_4 = param_5;
    local_18 = 0x800;
    local_14 = 0x20;
    FUN_004b87f0(puVar2,0x1016,~uVar3 + 10 & 0xfffffffe,&local_18);
  }
  return;
}

