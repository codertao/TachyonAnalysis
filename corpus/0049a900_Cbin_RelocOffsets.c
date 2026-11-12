
/* sweep: guess */

int Cbin_RelocOffsets(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    piVar2 = (int *)(param_1 + 0xc);
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + (*piVar2 * 5 + 5) * 4;
      }
      piVar2 = piVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

