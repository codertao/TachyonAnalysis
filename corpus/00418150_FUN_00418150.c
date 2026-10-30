
void FUN_00418150(undefined4 *param_1)

{
  *param_1 = 0x4000;
  param_1[1] = 0x200;
  param_1[2] = 0x114;
  param_1[3] = &LAB_00415d90;
  param_1[4] = &LAB_00416fc0;
  param_1[5] = &LAB_00417820;
  param_1[6] = &LAB_00417dc0;
  param_1[7] = &LAB_00417eb0;
  param_1[8] = &LAB_00417e50;
  param_1[9] = &LAB_00417fd0;
  param_1[10] = &LAB_00417ff0;
  param_1[0xb] = &LAB_00418050;
  param_1[0xc] = &LAB_00418110;
  if ((g_FlightStateFlags & 1) == 0) {
    FUN_004b8880(1);
  }
  FUN_004b8970(param_1,0xc000);
  if ((g_FlightStateFlags & 4) != 0) {
    FUN_004b8f80(2);
    DAT_005b39d0 = DAT_006af60c;
    DAT_005b3308 = 1;
    return;
  }
  FUN_004b8f80(0x10);
  DAT_005b39d0 = DAT_006af60c;
  DAT_005b3308 = 1;
  return;
}

