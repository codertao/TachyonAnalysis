
/* sweep: guess */

int Cbin_RelocPointers(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  if (param_2 != 0) {
    piVar5 = (int *)(param_1 + 0xc);
    do {
      if (*piVar5 != 0) {
        iVar4 = *piVar5 + 1;
        if (iVar4 != 0) {
          piVar3 = (int *)(piVar5[3] + 0xc);
          do {
            iVar1 = *piVar3;
            piVar3 = piVar3 + 5;
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + iVar1 * 0x14;
          } while (iVar4 != 0);
        }
      }
      piVar5 = piVar5 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}

