
undefined4 FUN_0040bd50(int param_1)

{
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b3314 == 0)) {
    DAT_005b3314 = 1;
    DAT_005b3318 = FUN_00408e70(*(undefined4 *)(param_1 + 0xdc),1);
    FUN_00455850();
  }
  return 0;
}

