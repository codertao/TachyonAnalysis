
/* think -> CapShip_DeathThink with frame timer +0x12c (EXPLODE = 1000) */

void CapShip_StartDeath(int param_1,undefined4 param_2)

{
  FUN_0048b330(param_1);
  FUN_0048b140(param_1);
  FUN_00410ac0(param_1);
  *(code **)(param_1 + 0x68) = CapShip_DeathThink;
  *(undefined4 *)(param_1 + 300) = param_2;
  FUN_00403cc0(param_1,*(undefined4 *)(param_1 + 0xd8));
  FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

