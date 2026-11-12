
/* sweep: guess */

undefined4 Weapon_GetAmmo(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return 1;
}

