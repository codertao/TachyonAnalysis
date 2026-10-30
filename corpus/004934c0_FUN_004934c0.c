
void FUN_004934c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  param_1[0xb] = *(int *)(iVar1 + 0x50);
  iVar2 = param_1[3];
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar2;
    do {
      if ((param_1[9] & 4U) == 0) {
        iVar5 = *(int *)(iVar1 + 0x40);
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x44);
      }
      iVar3 = iVar3 + iVar5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[6] = iVar3;
  param_1[5] = *(int *)(iVar1 + 0x58) * iVar2;
  return;
}

