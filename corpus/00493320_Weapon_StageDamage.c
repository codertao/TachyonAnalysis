
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* globals: 0x5653dc weapon, 0x5653e0 dmg = def+0x14 * scale >>16, 0x5653cc hit pos, 0x5653f4
   shooter, 0x565400 scale */

void Weapon_StageDamage(undefined4 param_1,undefined4 param_2,undefined4 *param_3,
                       undefined4 *param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
                       int param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)WeaponDef_Get(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    _DAT_00565404 = puVar1[1];
    DAT_005653dc = *puVar1;
    DAT_005653e0 = (uint)((longlong)(int)puVar1[5] * (longlong)param_8) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)puVar1[5] * (longlong)param_8) >> 0x20) << 0x10;
    DAT_005653e4 = puVar1[6];
    DAT_005653e8 = puVar1[7];
    DAT_005653ec = puVar1[8];
    DAT_005653f0 = param_7;
    DAT_0056540c = param_10;
    DAT_005653f4 = param_2;
    DAT_005653f8 = param_5;
    DAT_005653d8 = param_6;
    DAT_00565400 = param_8;
    if (param_3 != (undefined4 *)0x0) {
      DAT_005653c0 = *param_3;
      DAT_005653c4 = param_3[1];
      DAT_005653c8 = param_3[2];
    }
    if (param_4 != (undefined4 *)0x0) {
      DAT_005653cc = *param_4;
      DAT_005653d0 = param_4[1];
      DAT_005653d4 = param_4[2];
    }
  }
  return;
}

