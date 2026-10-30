
void FUN_0043bb10(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = *(char **)(param_1 + 0x1c);
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      pcVar1 = pcVar2 + 0x50;
      do {
        if (*pcVar2 != '\0') {
          FUN_0049c530(pcVar1);
        }
        uVar3 = uVar3 + 1;
        pcVar2 = pcVar2 + 0x264;
        pcVar1 = pcVar1 + 0x264;
      } while (uVar3 < *(uint *)(param_1 + 0x50));
    }
    FUN_0049c530(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

