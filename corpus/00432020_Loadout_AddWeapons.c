
/* sweep */

void Loadout_AddWeapons(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_005b1f0c + 0x638) != 0) {
    do {
      uVar1 = Loadout_FindSlotWeapon(uVar2);
      Loadout_AddItem(1,uVar1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(DAT_005b1f0c + 0x638));
  }
  return;
}

