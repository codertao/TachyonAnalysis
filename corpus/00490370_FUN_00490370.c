
void FUN_00490370(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) {
    FUN_004a7130(*(undefined4 *)(param_1 + 0xc),&param_1);
    netcomm_RemovePlayer(*(undefined4 *)(iVar1 + 8),param_1);
  }
  return;
}

