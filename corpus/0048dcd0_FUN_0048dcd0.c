
void FUN_0048dcd0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  
  piVar1 = param_1;
  if (param_3 != 0) {
    *(int *)(param_2 + 0x54) = param_3;
    puVar4 = *(uint **)(param_3 + 0x24);
    uVar3 = 0;
    if (*(int *)(param_3 + 0x20) != 0) {
      do {
        piVar5 = (int *)puVar4[3];
        param_1 = (int *)0x0;
        if (*puVar4 != 0) {
          do {
            if (((*piVar5 == *piVar1) && (piVar5[1] == piVar1[1])) && (piVar5[2] == piVar1[2])) {
              if (*(code **)((&PTR_PTR_00559984)[*piVar5] + piVar5[2] * 4) == (code *)0x0) {
                uVar2 = (uint)(piVar5[3] == piVar1[3]);
              }
              else {
                uVar2 = (**(code **)((&PTR_PTR_00559984)[*piVar5] + piVar5[2] * 4))
                                  (piVar1[3],piVar5[3]);
              }
              if ((uVar2 != 0) &&
                 (((*(byte *)(piVar5 + 7) & 2) == 0 ||
                  ((piVar5[4] == piVar1[4] && (piVar5[5] == piVar1[5])))))) {
                FUN_0048dc90(piVar5,puVar4,param_2,uVar3);
              }
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar5 = piVar5 + 10;
          } while (param_1 < *puVar4);
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 5;
      } while (uVar3 < *(uint *)(param_3 + 0x20));
    }
  }
  return;
}

