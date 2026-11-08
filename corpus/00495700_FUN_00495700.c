
void FUN_00495700(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    if (*(int *)(param_1 + 0xd8) == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0xff;
      Model_ApplyStateCurves(param_1 + 0x18,0);
      *(undefined4 *)(param_1 + 0x2c) = DAT_00668f38;
    }
    FUN_00495640(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xd4) + -2;
  *(int *)(param_1 + 0xd4) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0xd4) = 0xff;
    *(code **)(param_1 + 0x68) = FUN_00495690;
  }
  if ((*(int *)(param_1 + 0xec) == -1) && (((*(uint *)(param_1 + 0xd0) ^ DAT_005b3304) & 0x1f) == 0)
     ) {
    FUN_004231f0(8,0,param_1 + 0xfc,0,0);
  }
  return;
}

