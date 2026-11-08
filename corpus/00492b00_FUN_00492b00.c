
undefined * FUN_00492b00(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_s_WEAPON_CLASS_LASER_0055a4d0;
  puVar1 = PTR_s_WEAPON_CLASS_LASER_0055a4d0;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    iVar2 = str_cmp(*ppuVar3,param_1);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  }
  return ppuVar3[1];
}

