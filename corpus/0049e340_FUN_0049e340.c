
uint FUN_0049e340(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != 0) {
    uVar4 = 0;
    pcVar5 = *(char **)(*(int *)(param_1 + 4) + 4);
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        iVar2 = FUN_004c67c0(pcVar5,param_2);
        if (iVar2 == 0) {
          return uVar4;
        }
        uVar3 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + ~uVar3;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
  }
  return 0xffffffff;
}

