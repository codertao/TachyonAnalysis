
void FUN_0045b6f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (DAT_0058f1c0 != (uint *)0x0) {
    uVar2 = 0;
    if (*DAT_0058f1c0 != 0) {
      piVar1 = (int *)(DAT_0058f1c0[1] + 0x30);
      do {
        if (*piVar1 == param_1) {
          *piVar1 = 0;
          if (*DAT_005b95e0 == param_1) {
            *DAT_005b95e0 = 0;
          }
          if (DAT_005b95e0[1] == param_1) {
            DAT_005b95e0[1] = 0;
          }
        }
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 0x19;
      } while (uVar2 < *DAT_0058f1c0);
    }
  }
  return;
}

