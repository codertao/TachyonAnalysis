
uint FUN_00401a60(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x30c) - 1;
  *(uint *)(param_1 + 0x30c) = uVar3;
  *(undefined2 *)(param_1 + 0x312) = 0x300;
  *(undefined1 *)(param_1 + 0x327) = 0;
  if ((int)uVar3 < 1) {
    uVar3 = global_bad_shift_rng();
    FUN_004014d0(param_1,uVar3 & 0x1ffffff);
    uVar3 = global_bad_shift_rng();
    FUN_004014f0(param_1,uVar3 & 0x1ffffff);
    uVar1 = global_bad_shift_rng();
    uVar3 = uVar1 / 1000;
    *(uint *)(param_1 + 0x30c) = uVar1 % 1000 + 0xfa;
  }
  *(undefined1 *)(param_1 + 0x326) = 0;
  if ((((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) &&
     (uVar3 = *(uint *)(param_1 + 0x90), uVar3 == 0)) {
    iVar2 = FUN_004015e0(param_1);
    *(int *)(param_1 + 0x90) = iVar2;
    *(undefined4 *)(param_1 + 0x328) = 0;
    if (iVar2 == 0) {
      uVar3 = FUN_00401e20(param_1);
      return uVar3;
    }
    *(short *)(iVar2 + 200) = *(short *)(iVar2 + 200) + 1;
    uVar3 = FUN_00401080(param_1,1);
  }
  return uVar3;
}

