
char * FUN_0043a7a0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    do {
      if (*pcVar2 == '\0') {
        return (char *)0x0;
      }
      iVar1 = FUN_004c67c0(pcVar2,param_2);
      if (iVar1 == 0) {
        return pcVar2;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 0x168c;
    } while (uVar3 < *(uint *)(param_1 + 0x44));
  }
  return (char *)0x0;
}

