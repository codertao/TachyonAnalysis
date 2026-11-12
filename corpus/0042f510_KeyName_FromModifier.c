
/* sweep */

undefined ** KeyName_FromModifier(undefined *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_mod_keys_005399e8;
  puVar1 = PTR_s_MOD_NONE_005399ec;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
    if (ppuVar2[3] == param_1) break;
    puVar1 = ppuVar2[5];
    ppuVar2 = ppuVar2 + 4;
  }
  return ppuVar2;
}

