
void FUN_004b17c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      if (*piVar1 != 0) {
        FUN_004b1760(*piVar1);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  OurFreeMem(*(undefined4 *)(param_1 + 0x6c));
  FUN_004af550(*(undefined4 *)(param_1 + 100));
  OurFreeMem(param_1);
  return;
}

