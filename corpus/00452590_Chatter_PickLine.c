
/* sweep */

undefined4 Chatter_PickLine(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = *(int **)(param_1 + 4);
  uVar5 = 0;
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    uVar5 = uVar5 + 1;
    iVar2 = *piVar1;
  }
  uVar4 = global_bad_shift_rng();
  return *(undefined4 *)(*(int *)(param_1 + 4) + (uVar4 % uVar5) * 4);
}

