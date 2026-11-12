
/* sweep */

undefined4 Loadout_FindSlotWeapon(uint param_1)

{
  uint uVar1;
  ushort *puVar2;
  
  uVar1 = 0;
  if (DAT_005b20d0 != 0) {
    puVar2 = &DAT_005b1f44;
    do {
      if (*puVar2 == param_1) {
        return *(undefined4 *)(&DAT_005b1f10)[uVar1 * 0xe];
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x1c;
    } while (uVar1 < DAT_005b20d0);
  }
  return 0xffffffff;
}

