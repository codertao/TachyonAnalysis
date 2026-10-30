
uint FUN_00431700(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (uVar1 < 0x100);
  return 0xffffffff;
}

