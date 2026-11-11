
/* id -> internal name (default "NO WEAPON") */

undefined * WeaponId_ToName(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &g_WeaponNameTable;
  puVar1 = g_WeaponNameTable;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return &DAT_00547904;
    }
    if (ppuVar2[1] == param_1) break;
    puVar1 = ppuVar2[2];
    ppuVar2 = ppuVar2 + 2;
  }
  return *ppuVar2;
}

