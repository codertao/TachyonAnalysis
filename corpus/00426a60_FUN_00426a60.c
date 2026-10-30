
undefined4 FUN_00426a60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if ((*(short *)(param_1 + 0x76) == 10) && (*(int *)(param_1 + 0xe8) != 0)) {
    FUN_0042e210((*(byte *)(param_1 + 0xe4) & 2) != 0);
    FUN_00415a40(*(undefined4 *)(param_1 + 0xd4));
    DAT_005b39a0 = 0;
    *(undefined4 *)(DAT_005b3300 + 0x68) = 0;
    return 0;
  }
  *param_3 = 1;
  return 1;
}

