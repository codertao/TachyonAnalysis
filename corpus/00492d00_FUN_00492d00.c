
undefined * FUN_00492d00(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_GALSPAN_LIGHT_LASER_0055a3c0;
  puVar1 = PTR_s_GALSPAN_LIGHT_LASER_0055a3c0;
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

