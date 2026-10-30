
void FUN_00463140(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (*(char *)(param_1 + 0xc1) == -1) {
    iVar4 = *(int *)(iVar1 + 0x1bc);
    iVar5 = *(int *)(iVar1 + 0x1d0);
    if (iVar4 != *(int *)(param_1 + 0xd8)) {
      FUN_00466710(iVar1 + 0x260,param_1,0x10000);
      *(undefined4 *)(param_1 + 0xdc) = 100;
    }
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x1b8);
    uVar2 = (int)*(char *)(param_1 + 0xc1) << 3;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar5 = ((int)(((uVar2 ^ uVar3) - uVar3) * *(int *)(iVar1 + 0x1c4)) >> 10) +
            *(int *)(iVar1 + 0x1c8);
    if (iVar4 != *(int *)(param_1 + 0xd8)) {
      FUN_00466710(iVar1 + 0x278,param_1,0x10000);
    }
  }
  *(int *)(param_1 + 0xd8) = iVar4;
  FUN_004663d0(param_1,iVar4,*(undefined4 *)(iVar1 + 0x23c));
  FUN_00466410(param_1,iVar5);
  return;
}

