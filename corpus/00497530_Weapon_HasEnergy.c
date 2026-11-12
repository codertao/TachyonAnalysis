
/* sweep: guess */

bool Weapon_HasEnergy(int *param_1,int param_2)

{
  return *(int *)(*param_1 + 0x58) <= *(int *)(param_2 + 0x10) + *(int *)(param_2 + 8);
}

