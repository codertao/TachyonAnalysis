
void FUN_00426b90(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  DAT_005b39a0 = 1;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  FUN_0042e210((*(byte *)(param_1 + 0xe4) & 2) != 0);
  Tach_SendUseGate(param_1);
  iVar1 = distance_between((vec3 *)(param_2 + 0x34),(vec3 *)(param_1 + 0x34));
  local_8 = (undefined4)(longlong)ROUND((float)iVar1 / DAT_005b1ecc);
  DAT_005b39a4 = local_8;
  return;
}

