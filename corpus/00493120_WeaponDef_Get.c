
/* &g_WeaponDefs[id] (stride 0x110) */

undefined4 * WeaponDef_Get(int param_1)

{
  return &g_WeaponDefs + param_1 * 0x44;
}

