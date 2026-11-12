
/* sweep */

void FontList_Free(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (piVar3 != (int *)0x0)) {
    while (iVar2 = *piVar3, iVar2 != param_2) {
      piVar3 = (int *)piVar3[2];
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    if (piVar3 != (int *)0x0) {
      piVar1 = (int *)(iVar2 + 0x34);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (piVar3[1] != 0) {
          *(int *)(piVar3[1] + 8) = piVar3[2];
        }
        if (piVar3[2] != 0) {
          *(int *)(piVar3[2] + 4) = piVar3[1];
        }
        if (piVar3 == (int *)*param_1) {
          *param_1 = piVar3[2];
        }
        if (iVar2 != 0) {
          PolyFont_Free(iVar2);
          OurFreeMem(iVar2);
        }
        OurFreeMem(piVar3);
      }
    }
  }
  return;
}

