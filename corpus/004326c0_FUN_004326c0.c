
void FUN_004326c0(int param_1)

{
  FUN_0048e380(&DAT_005a6a5c,0x988);
  DAT_005a68cc = 1;
  DAT_005a73e8 = 1;
  FUN_00466590(0x10,0,0,0xff);
  if ((&DAT_005a68d4)[param_1 * 3] == 1) {
    FUN_00432510();
    return;
  }
  FUN_004325f0(&DAT_005a68d4 + param_1 * 3);
  return;
}

