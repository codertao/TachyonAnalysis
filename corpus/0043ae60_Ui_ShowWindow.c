
/* activate window by name: add its matching buttonDefs/textDefs to screen */

void Ui_ShowWindow(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  pcVar5 = *(char **)(param_1 + 0x14);
  pcVar3 = *(char **)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar2 = FUN_0043a7a0(param_1,iVar1 + 0xa8);
    *(int *)(iVar1 + 0xe8) = iVar2;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1674) == 0)) {
      FUN_004398b0(param_1,iVar2,param_3);
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(*(int *)(iVar1 + 0xe8) + 0x1664);
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(*(int *)(iVar1 + 0xe8) + 0x1668);
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      pcVar4 = pcVar3 + 0x40;
      do {
        if (*pcVar3 == '\0') break;
        iVar1 = FUN_004c67c0(pcVar4,param_2);
        if (iVar1 == 0) {
          Ui_AddButtonToWindow(param_1,pcVar3,0x400,param_3);
        }
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar3 + 0x23c;
        pcVar4 = pcVar4 + 0x23c;
      } while (uVar6 < *(uint *)(param_1 + 0x4c));
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      pcVar3 = pcVar5 + 0x40;
      do {
        if (*pcVar5 == '\0') {
          return;
        }
        iVar1 = FUN_004c67c0(pcVar3,param_2);
        if (iVar1 == 0) {
          Ui_AddTextToWindow(param_1,pcVar5,param_3);
        }
        uVar6 = uVar6 + 1;
        pcVar5 = pcVar5 + 0x130;
        pcVar3 = pcVar3 + 0x130;
      } while (uVar6 < *(uint *)(param_1 + 0x48));
    }
  }
  return;
}

