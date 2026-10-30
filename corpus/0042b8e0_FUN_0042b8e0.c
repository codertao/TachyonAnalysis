
void FUN_0042b8e0(int param_1)

{
  undefined4 uVar1;
  
  FUN_00428d90(0,&DAT_005b01d8);
  FUN_00428d90(1,&DAT_005b01dc);
  if (DAT_005b20dc != 0) {
    FUN_0042b830(param_1 + 0x828);
  }
  if (DAT_005b20d4 != -1) {
    uVar1 = FUN_00493100(&DAT_005b1f10 + DAT_005b20d4 * 0xe,DAT_005b01d8);
    FUN_0042b850(param_1 + 0x854,uVar1);
  }
  if (DAT_005b20d8 != -1) {
    uVar1 = FUN_00493100(&DAT_005b1f10 + DAT_005b20d8 * 0xe,DAT_005b01dc);
    FUN_0042b850(param_1 + 0x880,uVar1);
  }
  return;
}

