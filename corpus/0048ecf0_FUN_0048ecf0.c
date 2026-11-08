
void FUN_0048ecf0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  
  if (param_1 == 0) {
    clr_bytes(param_2,0xc);
    return;
  }
  iVar2 = FUN_004b1cb0(param_1);
  iVar1 = *(int *)(iVar2 + 0x40);
  uVar3 = global_bad_shift_rng();
  iVar2 = (uVar3 % (*(int *)(iVar2 + 0x28) - 1U)) * 0x30;
  iVar4 = iVar1 + iVar2;
  local_8 = (undefined4)(longlong)ROUND(*(float *)(iVar1 + 0x24 + iVar2));
  *param_2 = local_8;
  local_8 = (undefined4)(longlong)ROUND(*(float *)(iVar4 + 0x28));
  param_2[1] = local_8;
  local_8 = (undefined4)(longlong)ROUND(*(float *)(iVar4 + 0x2c));
  param_2[2] = local_8;
  return;
}

