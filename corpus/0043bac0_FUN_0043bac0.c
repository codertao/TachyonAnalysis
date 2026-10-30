
int FUN_0043bac0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    pcVar3 = (char *)(iVar2 + 0x40);
    do {
      if (*pcVar3 == '\0') {
        return 0;
      }
      iVar1 = FUN_004c67c0(pcVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x264;
      pcVar3 = pcVar3 + 0x264;
    } while (uVar4 < *(uint *)(param_1 + 0x50));
  }
  return 0;
}

