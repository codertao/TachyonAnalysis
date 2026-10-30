
bool FUN_00401440(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = ((*(int *)(param_2 + 4) - *(int *)(param_3 + 4)) - iVar1) + 0x3c000 >> 3;
  if (0x800 < iVar2) {
    *(int *)(param_1 + 0x38) = iVar1 + 0x800;
    return false;
  }
  if (iVar2 < -0x800) {
    iVar2 = -0x800;
  }
  *(int *)(param_1 + 0x38) = iVar1 + iVar2;
  return iVar2 == 0;
}

