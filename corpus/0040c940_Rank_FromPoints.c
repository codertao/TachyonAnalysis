
/* sweep */

int Rank_FromPoints(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (param_2 < *param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 1;
  } while (uVar2 < 10);
  return iVar1;
}

