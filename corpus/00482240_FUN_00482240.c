
void FUN_00482240(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_005569a0;
  iVar3 = DAT_00563d5c;
  iVar2 = DAT_005569a0;
  while (iVar2 != -1) {
    if (((*piVar4 == 0) && (DAT_00563d74 == &DAT_00555a08)) && (iVar3 != 0xc && -1 < iVar3 + -0xc))
    {
      piVar4[0xd] = DAT_00563d60;
      piVar4[0xe] = iVar3;
      piVar4[0xf] = 0xc;
      FUN_00465970(piVar4);
      iVar3 = DAT_00563d5c;
    }
    piVar1 = piVar4 + 0x10;
    piVar4 = piVar4 + 0x10;
    iVar2 = *piVar1;
  }
  FUN_00465c20(&DAT_005569a0);
  return;
}

