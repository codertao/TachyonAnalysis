
/* sweep */

void Hud_DrawWeaponLights(int param_1)

{
  undefined4 uVar1;
  
  Hud_GetWeaponState(0,&DAT_005b01d8);
  Hud_GetWeaponState(1,&DAT_005b01dc);
  if (DAT_005b20dc != 0) {
    HudLight_Draw(param_1 + 0x828);
  }
  if (DAT_005b20d4 != -1) {
    uVar1 = Weapon_GetAmmo(&DAT_005b1f10 + DAT_005b20d4 * 0xe,DAT_005b01d8);
    HudLight_DrawState(param_1 + 0x854,uVar1);
  }
  if (DAT_005b20d8 != -1) {
    uVar1 = Weapon_GetAmmo(&DAT_005b1f10 + DAT_005b20d8 * 0xe,DAT_005b01dc);
    HudLight_DrawState(param_1 + 0x880,uVar1);
  }
  return;
}

