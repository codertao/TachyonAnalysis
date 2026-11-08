
int FUN_00410b80(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = global_bad_shift_rng();
  for (uVar2 = uVar2 % uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1 = *(int *)(param_1 + 0xe0);
  }
  return param_1;
}

