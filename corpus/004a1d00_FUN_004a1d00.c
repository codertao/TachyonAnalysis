
int FUN_004a1d00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 8) != 1) {
    return -1;
  }
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 == (int *)0x0) {
    return -1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
  if (iVar2 == 0) {
    return 1;
  }
  return -(uint)(iVar2 != 1);
}

