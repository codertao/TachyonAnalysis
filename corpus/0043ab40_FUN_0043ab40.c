
void FUN_0043ab40(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc);
  FUN_0049eca0();
  uVar1 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      if (*pcVar2 == '\0') {
        return;
      }
      FUN_0043aac0(param_1,pcVar2);
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x114;
    } while (uVar1 < *(uint *)(param_1 + 0x40));
  }
  return;
}

