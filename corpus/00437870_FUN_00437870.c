
void FUN_00437870(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x8c) + 0xd0;
  piVar1 = (int *)(param_1 + 0x11c);
  iVar2 = FUN_00455e40(piVar1,iVar5);
  iVar4 = iVar2 - *(int *)(param_1 + 0x124);
  iVar3 = iVar2 >> 10;
  if ((param_2 == 0) && (iVar3 < iVar4)) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar4;
  iVar2 = iVar2 - *(int *)(param_1 + 300);
  if ((param_2 == 0) && (iVar3 < iVar2)) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + iVar2;
  iVar4 = FUN_00455e20(piVar1,iVar5);
  iVar2 = iVar4 - *piVar1;
  if ((param_2 == 0) && (iVar4 >> 10 < iVar2)) {
    iVar2 = iVar4 >> 10;
  }
  *piVar1 = *piVar1 + iVar2;
  iVar4 = FUN_00455e00(piVar1,iVar5);
  iVar2 = *(int *)(param_1 + 0x134);
  if ((param_2 == 0) && (iVar4 >> 10 < iVar4 - iVar2)) {
    *(int *)(param_1 + 0x134) = iVar2 + (iVar4 >> 10);
    return;
  }
  *(int *)(param_1 + 0x134) = iVar2 + (iVar4 - iVar2);
  return;
}

