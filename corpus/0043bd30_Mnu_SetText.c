
/* sweep */

char * Mnu_SetText(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar1 = (char *)Mnu_FindText(param_1,param_2);
  if (pcVar1 != (char *)0x0) {
    if ((pcVar1[0x8c] & 2U) != 0) {
      OurFreeMem(*(undefined4 *)(pcVar1 + 0x44));
      pcVar1[0x44] = '\0';
      pcVar1[0x45] = '\0';
      pcVar1[0x46] = '\0';
      pcVar1[0x47] = '\0';
      clear_flags(pcVar1 + 0x8c,2);
    }
LAB_0043bd77:
    puVar4 = param_2;
    pcVar7 = pcVar1;
    for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar7 = pcVar7 + 4;
    }
    if (*(int *)(pcVar1 + 0x8c) != 1) {
      if (*(int *)(pcVar1 + 0x8c) != 2) {
        str_sprintf(pcVar1 + 0x48,s_Load_Failure_0053fe84);
        *(char **)(pcVar1 + 0x40) = pcVar1 + 0x48;
        return pcVar1;
      }
      uVar3 = _atoi(param_2 + 0x12);
      puVar4 = (undefined4 *)Rtxt_GetRecord(*(undefined4 *)(param_1 + 4),uVar3);
      *(undefined4 *)(pcVar1 + 0x40) = *puVar4;
      return pcVar1;
    }
    *(char **)(pcVar1 + 0x40) = pcVar1 + 0x48;
    return pcVar1;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar6 = 0;
  pcVar1 = *(char **)(param_1 + 0x28);
  if (uVar2 != 0) {
    do {
      if (*pcVar1 == '\0') {
        puVar4 = param_2;
        pcVar7 = pcVar1;
        for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          pcVar7 = pcVar7 + 4;
        }
        if (*(int *)(pcVar1 + 0x8c) != 1) {
          if (*(int *)(pcVar1 + 0x8c) != 2) {
            str_sprintf(pcVar1 + 0x48,s_Load_Failure_0053fe84);
            *(char **)(pcVar1 + 0x40) = pcVar1 + 0x48;
            return pcVar1;
          }
          uVar3 = _atoi(param_2 + 0x12);
          puVar4 = (undefined4 *)Rtxt_GetRecord(*(undefined4 *)(param_1 + 4),uVar3);
          *(undefined4 *)(pcVar1 + 0x40) = *puVar4;
          return pcVar1;
        }
        *(char **)(pcVar1 + 0x40) = pcVar1 + 0x48;
        return pcVar1;
      }
      uVar6 = uVar6 + 1;
      pcVar1 = pcVar1 + 0x90;
    } while (uVar6 < uVar2);
  }
  *(uint *)(param_1 + 0x60) = uVar2 + 1;
  pcVar1 = (char *)Mnu_Alloc(*(char **)(param_1 + 0x28),(uVar2 + 1) * 0x90);
  *(char **)(param_1 + 0x28) = pcVar1;
  if (pcVar1 != (char *)0x0) {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x60) != 0) {
      while (*pcVar1 != '\0') {
        uVar2 = uVar2 + 1;
        pcVar1 = pcVar1 + 0x90;
        if (*(uint *)(param_1 + 0x60) <= uVar2) {
          return (char *)0x0;
        }
      }
      goto LAB_0043bd77;
    }
  }
  return (char *)0x0;
}

