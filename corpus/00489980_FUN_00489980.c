
void FUN_00489980(int param_1)

{
  char *pcVar1;
  
  if ((param_1 != 0) && (pcVar1 = (char *)(param_1 + 0x54), *pcVar1 != '\0')) {
    FUN_00489060(s_SPEED_0053696c,pcVar1);
    FUN_00489060(s_ACCEL_00545c70,pcVar1);
    FUN_00489060(s_AGILITY_00545c78,pcVar1);
    FUN_00489060(&DAT_005334f4,pcVar1);
    FUN_00489060(s_SHIELD_00536a18,pcVar1);
    FUN_00489060(s_ENERGY_00545ce0,pcVar1);
  }
  return;
}

