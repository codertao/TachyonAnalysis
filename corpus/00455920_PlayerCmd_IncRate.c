
/* POWER_INC_*_CHARGE */

void PlayerCmd_IncRate(int param_1)

{
  if ((param_1 != 2) || (((byte)DAT_005b2154 & 4) != 0)) {
    Power_CycleRate(&g_PlayerPower,1,param_1,DAT_005b1f0c + 0xd0);
    FUN_00466590(3,3,0,0xff);
  }
  return;
}

