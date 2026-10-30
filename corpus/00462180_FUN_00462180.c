
void FUN_00462180(uint *param_1)

{
  if ((g_FlightStateFlags & 4) == 0) {
    DAT_005897e0 = DAT_005b2bc0;
    if (0x20 < DAT_005b2bc0) {
      DAT_005897e0 = 0x20;
    }
  }
  else {
    DAT_005897e0 = 1;
  }
  *param_1 = DAT_005897e0;
  param_1[1] = 0x208;
  param_1[2] = 0x4000;
  param_1[3] = 0x100;
  param_1[4] = 0x80;
  param_1[5] = 0x114;
  param_1[6] = (uint)FUN_00445720;
  param_1[7] = (uint)&LAB_0045eee0;
  param_1[8] = (uint)&LAB_00460850;
  param_1[9] = (uint)&LAB_00460b30;
  param_1[10] = (uint)FUN_00445720;
  param_1[0xb] = (uint)&LAB_00461280;
  param_1[0xc] = (uint)&LAB_00461400;
  param_1[0xd] = (uint)FUN_00445720;
  param_1[0xe] = (uint)FUN_00445720;
  param_1[0xf] = (uint)FUN_00461a30;
  param_1[0x10] = (uint)&LAB_00461f80;
  param_1[0x11] = (uint)FUN_004620b0;
  param_1[0x12] = (uint)&LAB_00461b20;
  param_1[0x13] = (uint)&LAB_00462080;
  param_1[0x14] = (uint)&LAB_00462170;
  param_1[0x15] = (uint)&DAT_0058b0a0;
  if ((g_FlightStateFlags & 2) == 0) {
    FUN_004b8880(2);
  }
  FUN_004b7cd0(param_1,0xb000);
  if ((g_FlightStateFlags & 4) != 0) {
    FUN_004b87b0(2);
    DAT_0058b070 = 4;
    return;
  }
  FUN_004b87b0(0x10);
  DAT_0058b070 = 4;
  FUN_00490280();
  return;
}

