
char * FUN_0043f000(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar1 = (char *)FUN_0043fa70(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
LAB_0043f019:
    pcVar4 = pcVar1;
    for (iVar2 = 0x4c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 4;
    }
    return pcVar1;
  }
  if (param_2[0x3d] == 0) {
    param_2[0x3d] = 1;
  }
  uVar3 = 0;
  pcVar1 = *(char **)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x48) != 0) {
    do {
      if (*pcVar1 == '\0') goto LAB_0043f019;
      uVar3 = uVar3 + 1;
      pcVar1 = pcVar1 + 0x130;
    } while (uVar3 < *(uint *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0x200;
  }
  iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x48) = iVar2;
  pcVar1 = (char *)FUN_00437c20(*(char **)(param_1 + 0x14),iVar2 * 0x130);
  *(char **)(param_1 + 0x14) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x48) != 0) {
      do {
        if (*pcVar1 == '\0') goto LAB_0043f019;
        uVar3 = uVar3 + 1;
        pcVar1 = pcVar1 + 0x130;
      } while (uVar3 < *(uint *)(param_1 + 0x48));
    }
  }
  return (char *)0x0;
}

