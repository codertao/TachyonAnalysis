
/* register descriptor at slot (-1 = first free), 256 slots */

int DescReg_Alloc(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &g_DescRegistry;
  if (param_2 == -1) {
    iVar1 = 0;
    do {
      if (*piVar2 == 0) {
        DescReg_Create(piVar2,param_1,iVar1);
        return *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x100);
  }
  else if ((-1 < param_2) && (param_2 < 0x100)) {
    DescReg_Create(&g_DescRegistry + param_2,param_1,param_2);
    return (&g_DescRegistry)[param_2];
  }
  return 0;
}

