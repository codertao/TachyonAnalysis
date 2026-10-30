
int FUN_0041dbb0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_005b2300;
  iVar2 = 0;
  do {
    if (*piVar3 != 0) {
      iVar1 = FUN_004c67c0(param_1,*piVar3 + 4);
      if (iVar1 == 0) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar2;
        }
        return *piVar3;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x100);
  return 0;
}

