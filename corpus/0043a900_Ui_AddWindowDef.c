
/* sweep */

char * Ui_AddWindowDef(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar1 = (char *)Ui_FindWindowDef(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar4 = 0;
    pcVar1 = *(char **)(param_1 + 0xc);
    if (uVar2 != 0) {
      do {
        if (*pcVar1 == '\0') goto LAB_0043a977;
        uVar4 = uVar4 + 1;
        pcVar1 = pcVar1 + 0x114;
      } while (uVar4 < uVar2);
    }
    *(uint *)(param_1 + 0x40) = uVar2 + 1;
    pcVar1 = (char *)Mnu_Alloc(*(char **)(param_1 + 0xc),(uVar2 + 1) * 0x114);
    *(char **)(param_1 + 0xc) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x40) != 0) {
        do {
          if (*pcVar1 == '\0') {
LAB_0043a977:
            pcVar5 = pcVar1;
            for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined4 *)pcVar5 = *param_2;
              param_2 = param_2 + 1;
              pcVar5 = pcVar5 + 4;
            }
            return pcVar1;
          }
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0x114;
        } while (uVar2 < *(uint *)(param_1 + 0x40));
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

