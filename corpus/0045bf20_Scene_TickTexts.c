
/* sweep */

void Scene_TickTexts(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    do {
      if ((uint)piVar1[0xd] < 2) {
        if (piVar1[10] < *(int *)(*piVar1 + 0x28)) {
          if (-1 < piVar1[10]) {
            piVar1[1] = piVar1[1] + piVar1[5];
            piVar1[2] = piVar1[2] + piVar1[6];
            piVar1[3] = piVar1[3] + piVar1[7];
            piVar1[0xd] = 1;
            piVar1[4] = piVar1[4] + piVar1[8];
          }
        }
        else {
          piVar1[0xd] = 2;
        }
        piVar1[10] = piVar1[10] + 1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xf;
    } while (uVar2 < *(uint *)(param_1 + 0x98));
  }
  return;
}

