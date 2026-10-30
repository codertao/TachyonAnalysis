
void FUN_004379c0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(*(int *)(*(int *)(param_1 + 200) + 0x8c) + 4);
  do {
    pcVar5 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = param_2;
  for (uVar4 = uVar3 >> 2; pcVar6 = pcVar6 + 4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  iVar2 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar2 + 0x3c);
  iVar2 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_1 + 0x140);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x158);
  FUN_00435e10(param_1,param_2);
  return;
}

