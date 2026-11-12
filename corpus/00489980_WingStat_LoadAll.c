
/* sweep */

void WingStat_LoadAll(int param_1)

{
  char *pcVar1;
  
  if ((param_1 != 0) && (pcVar1 = (char *)(param_1 + 0x54), *pcVar1 != '\0')) {
    WingStat_Load(s_SPEED_0053696c,pcVar1);
    WingStat_Load(s_ACCEL_00545c70,pcVar1);
    WingStat_Load(s_AGILITY_00545c78,pcVar1);
    WingStat_Load(&DAT_005334f4,pcVar1);
    WingStat_Load(s_SHIELD_00536a18,pcVar1);
    WingStat_Load(s_ENERGY_00545ce0,pcVar1);
  }
  return;
}

