
/* def+0x98: stage damage (Weapon_StageDamage), call target +0x80, +0x118 hook, Proj_Remove */

void Proj_OnHitDirect(int param_1,int param_2,undefined4 param_3)

{
  Vel_AddKnockback(param_1 + 0xe0,param_1 + 0x34,param_3);
  if (*(int *)(param_2 + 0x80) != 0) {
    Weapon_StageDamage(**(undefined4 **)(param_1 + 0xdc),*(undefined4 *)(param_1 + 200),
                       param_1 + 0x34,param_3,0,*(undefined4 *)(param_2 + 0x78),param_2,
                       *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 100));
    if (*(code **)(param_2 + 0x80) != (code *)0x0) {
      (**(code **)(param_2 + 0x80))(param_2);
    }
  }
  if (*(code **)(param_1 + 0x118) != (code *)0x0) {
    (**(code **)(param_1 + 0x118))(param_1);
  }
  Proj_Remove(param_1);
  return;
}

