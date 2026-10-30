
void FUN_004070b0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar2 = *(int **)(param_3 + 8);
    uVar3 = 0;
    if (*(int *)(param_3 + 4) != 0) {
      piVar4 = piVar2 + 1;
      do {
        piVar1 = (int *)(param_4 + *piVar2 * 0xc);
        *piVar1 = *piVar4;
        piVar1[1] = piVar4[1];
        piVar1[2] = piVar4[2];
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 7;
        piVar4 = piVar4 + 7;
      } while (uVar3 < *(uint *)(param_3 + 4));
    }
    if (param_5 != 0) {
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x20);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x1c);
    }
    if (-1 < *(int *)(param_3 + 0x20)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_3 + 0x20) >> 0x10;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  }
  return;
}

