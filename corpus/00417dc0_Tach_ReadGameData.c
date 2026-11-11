
void Tach_ReadGameData(undefined4 *param_1,undefined4 param_2)

{
  g_PlayerPower.shieldFront = (int)*(ushort *)(param_1 + 2);
  g_PlayerPower.shieldRear = (int)*(ushort *)((int)param_1 + 10);
  g_PlayerPower.hull = (int)*(ushort *)(param_1 + 3);
  DAT_005b39fc = *param_1;
  DAT_005b39f4 = (int)*(char *)(param_1 + 1);
  DAT_005b39f8 = (int)*(char *)((int)param_1 + 5);
  DAT_005b3a00 = (int)*(char *)((int)param_1 + 6);
  DAT_005b8f58 = (uint)*(ushort *)((int)param_1 + 0x12);
  DAT_005b8f64 = param_1[5];
  if (DAT_005b8f58 != 0) {
    DAT_005b8f64 = DAT_005b8f64 | 0x20;
  }
  Dcb_ApplySnapshot(param_1 + 6,param_2);
  return;
}

