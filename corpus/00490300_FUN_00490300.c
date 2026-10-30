
void FUN_00490300(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) {
    if (*(int *)(param_1 + 0xc) == 0) {
      netcomm_AddPlayer(*(undefined4 *)(param_1 + 8),DAT_0056588c,DAT_00565888);
      return;
    }
    FUN_004a7130(*(int *)(param_1 + 0xc),&param_1);
    netcomm_AddPlayer(*(undefined4 *)(iVar1 + 8),param_1,*(undefined2 *)(iVar1 + 0xc4));
  }
  return;
}

