
/* sweep: guess */

void Proj_OnHitStaged(int param_1,int param_2,undefined4 param_3)

{
  Vel_AddKnockback(param_1 + 0xe0,param_1 + 0x34,param_3);
  if (*(int *)(param_2 + 0x80) != 0) {
    Weapon_StageDamage(**(undefined4 **)(param_1 + 0xdc),*(undefined4 *)(param_1 + 200),
                       param_1 + 0x34,param_3,0,*(undefined4 *)(param_2 + 0x78),param_2,0x10000,
                       *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 100));
    if (*(code **)(param_2 + 0x80) != (code *)0x0) {
      (**(code **)(param_2 + 0x80))(param_2);
    }
  }
  return;
}

