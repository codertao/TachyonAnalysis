
void FUN_0048de40(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  
  uVar2 = 0;
  if (param_3 != 0) {
    *(int *)(param_4 + 0x54) = param_3;
    puVar4 = *(uint **)(param_3 + 0x24);
    DAT_0056aabc = 0;
    if (*(int *)(param_3 + 0x20) != 0) {
      do {
        piVar3 = (int *)puVar4[3];
        uVar1 = 0;
        if (*puVar4 != 0) {
          do {
            if ((*piVar3 == 3) && (piVar3[1] == param_1)) {
              switch(piVar3[2]) {
              case 0:
              case 1:
                if (param_2 == piVar3[3]) {
LAB_0048deb2:
                  FUN_0048dc90(piVar3,puVar4,param_4,uVar2);
                  goto LAB_0048ded6;
                }
                break;
              case 2:
                if (piVar3[3] < param_2) goto LAB_0048deb2;
                break;
              case 3:
                if (param_2 < piVar3[3]) goto LAB_0048deb2;
              }
              if (puVar4[2] == 0) {
                piVar3[8] = 0;
              }
            }
LAB_0048ded6:
            uVar1 = uVar1 + 1;
            piVar3 = piVar3 + 10;
          } while (uVar1 < *puVar4);
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 5;
      } while (uVar2 < *(uint *)(param_3 + 0x20));
    }
  }
  return;
}

