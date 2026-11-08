
/* missile hp 1: any hit -> 0x1003 explosion, Proj_Remove */

void Missile_OnDamage(int param_1)

{
  if (0 < *(int *)(param_1 + 0xbc)) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(param_1);
    }
    SrvSend_EntityDestroyed(param_1 + 0x34,1,0,0,0,0,0,*(undefined4 *)(param_1 + 100));
    Proj_Remove(param_1);
  }
  return;
}

