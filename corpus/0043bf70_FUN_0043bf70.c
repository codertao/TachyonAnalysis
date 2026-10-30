
char * FUN_0043bf70(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar1 = (char *)Ui_FindButton(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    param_2[0x82] = 0xc;
    param_2[0x83] = 6;
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar4 = 0;
    pcVar1 = *(char **)(param_1 + 0x18);
    if (uVar2 != 0) {
      do {
        if (*pcVar1 == '\0') goto LAB_0043bffc;
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar1 + 0x23c;
      } while (uVar4 < uVar2);
    }
    *(uint *)(param_1 + 0x4c) = uVar2 + 1;
    pcVar1 = (char *)FUN_00437c20(*(char **)(param_1 + 0x18),(uVar2 + 1) * 0x23c);
    *(char **)(param_1 + 0x18) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x4c) != 0) {
        do {
          if (*pcVar1 == '\0') {
LAB_0043bffc:
            pcVar5 = pcVar1;
            for (iVar3 = 0x8f; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pcVar5 = *param_2;
              param_2 = param_2 + 1;
              pcVar5 = pcVar5 + 4;
            }
            pcVar1[0x1e0] = '\0';
            pcVar1[0x1e1] = '\0';
            pcVar1[0x1e2] = '\0';
            pcVar1[0x1e3] = '\0';
            pcVar1[0x1e4] = '\0';
            pcVar1[0x1e5] = '\0';
            pcVar1[0x1e6] = '\0';
            pcVar1[0x1e7] = '\0';
            *(uint *)(pcVar1 + 0x204) = *(uint *)(pcVar1 + 0x204) | 0x400;
            return pcVar1;
          }
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0x23c;
        } while (uVar2 < *(uint *)(param_1 + 0x4c));
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

