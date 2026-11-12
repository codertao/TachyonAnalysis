
/* sweep */

void MnuImage_FreeAll(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    do {
      if (*pcVar2 == '\0') break;
      MnuImage_Free(param_1,pcVar2);
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x168c;
    } while (uVar1 < *(uint *)(param_1 + 0x44));
  }
  MnuImage_FreeTable(param_1,*(undefined4 *)(param_1 + 0x44));
  return;
}

