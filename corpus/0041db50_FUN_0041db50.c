
int FUN_0041db50(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_005b2300;
  if (param_2 == -1) {
    iVar1 = 0;
    do {
      if (*piVar2 == 0) {
        FUN_0041dae0(piVar2,param_1,iVar1);
        return *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x100);
  }
  else if ((-1 < param_2) && (param_2 < 0x100)) {
    FUN_0041dae0(&DAT_005b2300 + param_2,param_1,param_2);
    return (&DAT_005b2300)[param_2];
  }
  return 0;
}

