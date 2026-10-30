
void FUN_00424dd0(void)

{
  uint uVar1;
  
  uVar1 = 3;
  if (DAT_005b2c84 != 0) {
    uVar1 = 7;
  }
  if (DAT_005b2c80 != 0) {
    uVar1 = uVar1 | 8;
  }
  FUN_004a0cb0(DAT_005b2cb4);
  FUN_004a29b0(uVar1);
  return;
}

