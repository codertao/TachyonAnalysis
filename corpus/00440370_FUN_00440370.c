
char * FUN_00440370(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar1 = (char *)FUN_00440400(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    uVar4 = 0;
    pcVar1 = *(char **)(param_1 + 0x38);
    if (uVar2 != 0) {
      do {
        if (*pcVar1 == '\0') goto LAB_004403ed;
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar1 + 0xac;
      } while (uVar4 < uVar2);
    }
    *(uint *)(param_1 + 0x5c) = uVar2 + 1;
    pcVar1 = (char *)FUN_00437c20(*(char **)(param_1 + 0x38),(uVar2 + 1) * 0xac);
    *(char **)(param_1 + 0x38) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x5c) != 0) {
        do {
          if (*pcVar1 == '\0') {
LAB_004403ed:
            pcVar5 = pcVar1;
            for (iVar3 = 0x2b; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pcVar5 = *param_2;
              param_2 = param_2 + 1;
              pcVar5 = pcVar5 + 4;
            }
            return pcVar1;
          }
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0xac;
        } while (uVar2 < *(uint *)(param_1 + 0x5c));
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

