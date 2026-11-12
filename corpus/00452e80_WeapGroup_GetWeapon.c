
/* sweep */

undefined4 WeapGroup_GetWeapon(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)WeapGroup_GetSlot(&DAT_005b1f10,DAT_005b20d0,(&DAT_005b20d4)[param_1]);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return 0;
}

