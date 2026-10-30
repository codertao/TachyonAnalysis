
int FUN_004b08e0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x44);
  uVar1 = 0;
  piVar5 = param_2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    do {
      iVar4 = 1;
      if (*(char *)(iVar2 + 0x1a) == '}') {
        iVar4 = 2;
      }
      if ((*(byte *)(iVar2 + 0x16) & 0x40) != 0) {
        iVar4 = iVar4 * 2;
      }
      uVar6 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        piVar3 = (int *)(*(int *)(param_1 + 0x4c) + 4);
        do {
          if (*piVar3 == iVar2) {
            piVar5[1] = 1;
            if (*(char *)(iVar2 + 0x1a) == '}') {
              piVar5[3] = 1;
            }
            *piVar5 = *piVar5 + iVar4;
          }
          uVar6 = uVar6 + 1;
          piVar3 = piVar3 + 8;
        } while (uVar6 < *(uint *)(param_1 + 0x34));
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x1c;
      piVar5 = piVar5 + 2;
    } while (uVar1 < *(uint *)(param_1 + 0x2c));
  }
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    param_2 = param_2 + 1;
    do {
      if (*param_2 != 0) {
        iVar4 = iVar4 + 1;
      }
      param_2 = param_2 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar4;
}

