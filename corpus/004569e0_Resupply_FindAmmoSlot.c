
/* sweep */

undefined4 Resupply_FindAmmoSlot(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x168);
  while (((piVar1[-1] == 0 || (*(int *)(piVar1[-1] + 4) != param_2)) || (*piVar1 <= piVar1[1]))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 3;
    if (7 < uVar2) {
      return 0;
    }
  }
  return 1;
}

