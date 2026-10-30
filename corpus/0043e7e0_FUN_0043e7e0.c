
uint FUN_0043e7e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = *(char **)(param_1 + 0x2c);
  if (*(int *)(param_1 + 100) != 0) {
    do {
      iVar1 = FUN_004c67c0(pcVar3,param_2);
      if ((iVar1 == 0) || (*pcVar3 == '\0')) goto LAB_0043e879;
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x8c;
    } while (uVar2 < *(uint *)(param_1 + 100));
  }
  iVar1 = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 100) = iVar1;
  pcVar3 = (char *)FUN_00437c20(*(undefined4 *)(param_1 + 0x2c),iVar1 * 0x8c);
  *(char **)(param_1 + 0x2c) = pcVar3;
  if ((pcVar3 != (char *)0x0) && (uVar2 = 0, *(int *)(param_1 + 100) != 0)) {
    do {
      iVar1 = FUN_004c67c0(pcVar3,param_2);
      if ((iVar1 == 0) || (*pcVar3 == '\0')) {
LAB_0043e879:
        for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
          *(undefined4 *)pcVar3 = *param_2;
          param_2 = param_2 + 1;
          pcVar3 = pcVar3 + 4;
        }
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x8c;
    } while (uVar2 < *(uint *)(param_1 + 100));
  }
  return 0xffffffff;
}

