
void FUN_00416980(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = &DAT_005b334c;
  uVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 0x10);
  piVar2 = &DAT_005b334c;
  uVar1 = 0;
  do {
    if (*piVar2 == 0) {
      *piVar2 = param_1;
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 0x10);
  return;
}

