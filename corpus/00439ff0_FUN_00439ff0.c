
char * FUN_00439ff0(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar1 = (char *)FUN_0043a7a0(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
    pcVar1 = *(char **)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x44) != 0) {
LAB_0043a01a:
      if (*pcVar1 != '\0') goto code_r0x0043a020;
      puVar4 = param_2;
      pcVar6 = pcVar1;
      for (iVar3 = 0x5a3; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        pcVar6 = pcVar6 + 4;
      }
      if (param_2[0x59e] == 0) {
        return pcVar1;
      }
      iVar3 = *(int *)(pcVar1 + 0x1680);
      goto joined_r0x0043a0b4;
    }
LAB_0043a02b:
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0x200;
    }
    iVar3 = *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x44) = iVar3;
    pcVar1 = (char *)FUN_00437c20(*(char **)(param_1 + 0x10),iVar3 * 0x168c);
    *(char **)(param_1 + 0x10) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x44) != 0) {
        while (*pcVar1 != '\0') {
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0x168c;
          if (*(uint *)(param_1 + 0x44) <= uVar2) {
            return (char *)0x0;
          }
        }
        puVar4 = param_2;
        pcVar6 = pcVar1;
        for (iVar3 = 0x5a3; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          pcVar6 = pcVar6 + 4;
        }
        if (param_2[0x59e] != 0) {
          iVar3 = *(int *)(pcVar1 + 0x1680);
joined_r0x0043a0b4:
          iVar5 = iVar3;
          if (iVar3 == 0) {
            iVar5 = 1;
          }
          if ((*(int *)(pcVar1 + 0x1670) / iVar5 < 0x101) && (*(int *)(pcVar1 + 0x166c) < 0x101)) {
            FUN_00439cc0(param_1,pcVar1,iVar3,0);
            return pcVar1;
          }
          FUN_004398b0(param_1,pcVar1,0);
        }
        return pcVar1;
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
code_r0x0043a020:
  uVar2 = uVar2 + 1;
  pcVar1 = pcVar1 + 0x168c;
  if (*(uint *)(param_1 + 0x44) <= uVar2) goto LAB_0043a02b;
  goto LAB_0043a01a;
}

