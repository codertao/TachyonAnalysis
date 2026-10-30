
void FUN_00410670(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == DAT_005b95e0[4]) {
    uVar1 = FUN_00410610();
  }
  else {
    uVar1 = FUN_00410370(param_1);
  }
  FUN_00410320(uVar1,param_1);
  if ((*DAT_005b95e0 == 0) && ((*(byte *)(DAT_005b95e0 + 3) & 8) == 0)) {
    DAT_005b95e0 = (int *)DAT_005b95e4;
    return;
  }
  if (((g_FlightStateFlags & 4) == 0) && ((*(byte *)(DAT_005b95e0 + 3) & 0x80) != 0)) {
    DAT_005b95e0 = (int *)DAT_005b95e4;
    return;
  }
  if ((code *)DAT_005b95e0[9] != (code *)0x0) {
    (*(code *)DAT_005b95e0[9])(*DAT_005b95e0);
  }
  return;
}

