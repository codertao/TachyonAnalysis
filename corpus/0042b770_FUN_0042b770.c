
void FUN_0042b770(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x24);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = (piVar1[8] << 8 | piVar1[9]) << 8 | piVar1[10];
      }
      FUN_004281f0(*piVar1,piVar1[1],piVar1[2],0,0xffffffff,piVar1[3],piVar1[4],piVar1[5],piVar1[6])
      ;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xb;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

