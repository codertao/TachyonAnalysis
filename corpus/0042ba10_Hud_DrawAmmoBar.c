
/* sweep */

void Hud_DrawAmmoBar(int param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = WeapGroup_GetSlot(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d4,&local_8,&local_c,&local_4);
  WeapSlot_GetAmmoInfo(uVar1);
  if (local_4 == 0) {
    HudBar_DrawDefault(param_1 + 0xd0,local_8,local_c);
  }
  else {
    HudBar_Draw(param_1 + 0xd0,local_8,local_c,0xc0,0xc0,0xc0);
  }
  uVar1 = WeapGroup_GetSlot(&DAT_005b1f10,DAT_005b20d0,DAT_005b20d8,&local_8,&local_c,&local_4);
  WeapSlot_GetAmmoInfo(uVar1);
  if (local_4 == 0) {
    HudBar_DrawDefault(param_1 + 0x124,local_8,local_c);
    return;
  }
  HudBar_Draw(param_1 + 0x124,local_8,local_c,0xc0,0xc0,0xc0);
  return;
}

