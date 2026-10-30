
int * FUN_00457c70(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 != 1) {
    piVar1 = *(int **)(param_1 + 0x58);
    uVar2 = 0;
    do {
      if ((*piVar1 != 0) && (piVar1[1] == param_2)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 10;
    } while (uVar2 < 0x40);
  }
  return (int *)0x0;
}

