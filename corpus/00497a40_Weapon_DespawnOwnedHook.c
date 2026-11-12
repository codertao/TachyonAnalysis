
/* sweep */

void Weapon_DespawnOwnedHook(int param_1,undefined4 *param_2)

{
  Weapon_DespawnOwned(*(undefined4 *)(param_1 + 100),param_1,*param_2);
  return;
}

