
/* sweep */

void WeapGroup_Fire(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  local_8 = 3;
  local_4 = 3;
  iVar1 = WeapGroup_GetWeapon(0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xac) != 0)) {
    Hud_GetWeaponState(0,&local_8);
  }
  iVar1 = WeapGroup_GetWeapon(1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xac) != 0)) {
    Hud_GetWeaponState(1,&local_4);
  }
  if ((local_8 != 3) || (DAT_005b2148 = 1, local_4 != 3)) {
    DAT_005b2148 = 0;
  }
  return;
}

