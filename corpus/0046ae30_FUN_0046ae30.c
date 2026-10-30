
void FUN_0046ae30(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  DAT_0058972c = 0;
  if (DAT_00589728 != 0) {
    piVar2 = (int *)(DAT_00589730 + 0x10);
    do {
      if (DAT_005a6624 == 0) {
        iVar1 = FUN_00469d80(piVar2[0x43],piVar2[0x44]);
        *piVar2 = iVar1;
      }
      else {
        *piVar2 = 1;
      }
      if (*piVar2 != 0) {
        DAT_0058972c = DAT_0058972c + 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x6e;
    } while (uVar3 < DAT_00589728);
  }
  return;
}

