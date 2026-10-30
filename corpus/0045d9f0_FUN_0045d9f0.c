
void FUN_0045d9f0(undefined2 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_1 = *(undefined2 *)(param_2 + 8);
  param_1[1] = *(undefined2 *)(param_2 + 0x1c8);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 0x10c);
  if (*(int *)(param_2 + 200) == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 0xff;
  }
  else {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*(int *)(param_2 + 200) + 0xfc);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(*(int *)(param_2 + 200) + 0xc2);
  }
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(param_2 + 0xcc);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return;
}

