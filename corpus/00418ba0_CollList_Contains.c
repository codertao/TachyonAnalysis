
/* sweep */

void CollList_Contains(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_005b2d8c;
  if (DAT_005b318c != 0) {
    do {
      if (*piVar1 == param_1) {
        return;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < DAT_005b318c);
  }
  *piVar1 = param_1;
  DAT_005b318c = DAT_005b318c + 1;
  return;
}

