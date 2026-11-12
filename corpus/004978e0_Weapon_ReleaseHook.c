
/* sweep: guess */

void Weapon_ReleaseHook(undefined4 param_1,undefined4 *param_2)

{
  NetCli_SendPickup(*param_2);
  return;
}

