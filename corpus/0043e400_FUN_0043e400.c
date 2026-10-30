
int FUN_0043e400(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = *(char **)(param_1 + 0x24);
  iVar2 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      if (((*(uint *)(pcVar3 + 0x11c) & 0x10000) == 0) &&
         ((DAT_00564ae4 != 0 || ((*(uint *)(pcVar3 + 0x11c) & 4) != 0)))) {
        iVar1 = FUN_004c67c0(pcVar3 + 0x40,param_2);
        if (iVar1 == 0) {
          iVar2 = iVar2 + 1;
        }
        if (*pcVar3 == '\0') {
          return iVar2;
        }
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x134;
    } while (uVar4 < *(uint *)(param_1 + 0x58));
  }
  return iVar2;
}

