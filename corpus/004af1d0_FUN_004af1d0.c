
int * FUN_004af1d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_0062c12c;
  if (DAT_00668fb0 != 0) {
    do {
      if (((piVar2[9] != 0) && (*param_1 == *piVar2)) &&
         (iVar1 = FUN_004c67c0(param_1,piVar2), iVar1 == 0)) {
        return piVar2;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x14;
    } while (uVar3 < DAT_00668fb0);
  }
  return (int *)0x0;
}

