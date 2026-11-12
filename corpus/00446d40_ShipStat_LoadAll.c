
/* sweep */

void ShipStat_LoadAll(undefined4 param_1,undefined4 param_2)

{
  ShipStat_Load(param_1,s_SPEED_0053696c,param_2);
  ShipStat_Load(param_1,s_ACCEL_00545c70,param_2);
  ShipStat_Load(param_1,s_AGILITY_00545c78,param_2);
  ShipStat_Load(param_1,&DAT_005334f4,param_2);
  ShipStat_Load(param_1,s_SHIELD_00536a18,param_2);
  ShipStat_Load(param_1,s_ENERGY_00545ce0,param_2);
  ShipStat_Load(param_1,&PTR_DAT_00545c6c,param_2);
  ShipStat_Load(param_1,s_CARGO_00533fe8,param_2);
  return;
}

