
void FUN_00424e10(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *DAT_005b95e0;
  if (iVar1 != 0) {
    uVar4 = param_2 >> 1;
    uVar2 = global_bad_shift_rng();
    *param_1 = uVar2 % param_2 - uVar4;
    uVar2 = global_bad_shift_rng();
    param_1[1] = uVar2 % param_2 - uVar4;
    uVar2 = global_bad_shift_rng();
    iVar3 = uVar2 % param_2 - uVar4;
    param_1[2] = iVar3;
    *param_1 = *param_1 + *(int *)(iVar1 + 0x34);
    param_1[1] = param_1[1] + *(int *)(iVar1 + 0x38);
    param_1[2] = *(int *)(iVar1 + 0x3c) + iVar3;
  }
  return;
}

