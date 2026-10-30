
char * FUN_0043d030(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)FUN_0043e3d0(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    param_2[0x4b] = 0xffff;
    uVar2 = *(uint *)(param_1 + 0x58);
    uVar3 = 0;
    pcVar1 = *(char **)(param_1 + 0x24);
    if (uVar2 != 0) {
LAB_0043d066:
      if (*pcVar1 != '\0') goto code_r0x0043d06b;
      pcVar5 = pcVar1;
      for (iVar4 = 0x4d; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar5 = *param_2;
        param_2 = param_2 + 1;
        pcVar5 = pcVar5 + 4;
      }
      *(uint *)(pcVar1 + 0x11c) = *(uint *)(pcVar1 + 0x11c) | 4;
      iVar4 = FUN_0043bf10(param_1,pcVar1 + 0xc0);
      if (iVar4 == 0) {
        return pcVar1;
      }
      uVar6 = *(undefined4 *)(iVar4 + 0x40);
      goto LAB_0043d127;
    }
LAB_0043d076:
    *(uint *)(param_1 + 0x58) = uVar2 + 1;
    pcVar1 = (char *)FUN_00437c20(*(char **)(param_1 + 0x24),(uVar2 + 1) * 0x134);
    *(char **)(param_1 + 0x24) = pcVar1;
    if (pcVar1 != (char *)0x0) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x58) != 0) {
        while (*pcVar1 != '\0') {
          uVar2 = uVar2 + 1;
          pcVar1 = pcVar1 + 0x134;
          if (*(uint *)(param_1 + 0x58) <= uVar2) {
            return (char *)0x0;
          }
        }
        pcVar5 = pcVar1;
        for (iVar4 = 0x4d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pcVar5 = *param_2;
          param_2 = param_2 + 1;
          pcVar5 = pcVar5 + 4;
        }
        *(uint *)(pcVar1 + 0x11c) = *(uint *)(pcVar1 + 0x11c) | 4;
        iVar4 = FUN_0043bf10(param_1,pcVar1 + 0xc0);
        if (iVar4 != 0) {
          uVar6 = *(undefined4 *)(iVar4 + 0x40);
LAB_0043d127:
          FUN_0043e6a0(param_1,pcVar1,uVar6);
          if ((*(uint *)(iVar4 + 0x8c) & 0x800) != 0) {
            *(uint *)(pcVar1 + 0x11c) = *(uint *)(pcVar1 + 0x11c) | 0x800;
          }
        }
        return pcVar1;
      }
    }
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
code_r0x0043d06b:
  uVar3 = uVar3 + 1;
  pcVar1 = pcVar1 + 0x134;
  if (uVar2 <= uVar3) goto LAB_0043d076;
  goto LAB_0043d066;
}

