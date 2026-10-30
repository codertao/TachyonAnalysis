
void FUN_0048df00(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  
  if (param_2 != 0) {
    *(int *)(param_3 + 0x54) = param_2;
    puVar4 = *(uint **)(param_2 + 0x24);
    uVar2 = 0;
    if (*(int *)(param_2 + 0x20) != 0) {
      do {
        piVar3 = (int *)puVar4[3];
        uVar1 = 0;
        if (*puVar4 != 0) {
          do {
            if ((((*piVar3 == 0) && (piVar3[2] == 1)) && (piVar3[4] == 1)) &&
               ((piVar3[5] == param_4 && (param_1 <= piVar3[3])))) {
              FUN_0048dc90(piVar3,puVar4,param_3,uVar2);
            }
            uVar1 = uVar1 + 1;
            piVar3 = piVar3 + 10;
          } while (uVar1 < *puVar4);
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 5;
      } while (uVar2 < *(uint *)(param_2 + 0x20));
    }
  }
  return;
}

