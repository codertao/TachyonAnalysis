
void FUN_00432730(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((&DAT_005a6aa4)[param_2 * 0x13] == 0) {
    FUN_00466590(0x15,0,0,0xff);
    return;
  }
  if ((&DAT_005a68d4)[param_1 * 3] == 1) {
    uVar1 = 0x12;
  }
  else {
    uVar1 = 0x13;
  }
  FUN_00466590(0x12,uVar1,0,0xff);
  FUN_00431f40(&DAT_005a68d4 + param_1 * 3,*(undefined4 *)(&DAT_005a6a9c + param_2 * 0x4c));
  FUN_00432690(0);
  return;
}

