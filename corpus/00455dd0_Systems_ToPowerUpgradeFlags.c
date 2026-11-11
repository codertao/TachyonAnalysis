
/* 0x20000 -> 1 (laser), 0x40000 -> 4 (shield), 0x80000 -> 2 (burner) */

byte Systems_ToPowerUpgradeFlags(uint param_1)

{
  byte bVar1;
  
  bVar1 = (param_1 & 0x20000) != 0;
  if ((param_1 & 0x40000) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_1 & 0x80000) != 0) {
    bVar1 = bVar1 | 2;
  }
  return bVar1;
}

