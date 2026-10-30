
void FUN_0043a750(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    do {
      if (*pcVar2 == '\0') break;
      FUN_00439f70(param_1,pcVar2);
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x168c;
    } while (uVar1 < *(uint *)(param_1 + 0x44));
  }
  FUN_0043a7f0(param_1,*(undefined4 *)(param_1 + 0x44));
  return;
}

