
/* think -> CapShip_DeathThink with frame timer +0x12c (EXPLODE = 1000) */

void CapShip_StartDeath(int param_1,undefined4 param_2)

{
  Ent_ClearTargetedBy(param_1);
  Ent_RemoveFromTargets(param_1);
  CapShip_DetachParts(param_1);
  *(code **)(param_1 + 0x68) = CapShip_DeathThink;
  *(undefined4 *)(param_1 + 300) = param_2;
  Sped_PostDeathEvents(param_1,*(undefined4 *)(param_1 + 0xd8));
  Ent_ClearWeaponTargets(param_1,*(undefined4 *)(param_1 + 100));
  return;
}

