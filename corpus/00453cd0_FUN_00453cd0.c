
void FUN_00453cd0(int param_1)

{
  if ((((g_FlightStateFlags & 4) == 0) && (*(int *)(param_1 + 0x90) != 0)) &&
     (*(short *)(*(int *)(param_1 + 0x90) + 0xce) != 0)) {
    FUN_004527b0();
  }
  if ((((byte)DAT_005b3304 & 0x1f) == 0) && (*(int *)(param_1 + 0x90) == 0)) {
    FUN_00452870(2);
  }
  return;
}

