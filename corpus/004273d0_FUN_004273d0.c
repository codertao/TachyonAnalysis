
undefined * FUN_004273d0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_s_TARGET_LEAD_PIP_005361b8;
  puVar1 = PTR_s_TARGET_LEAD_PIP_005361b8;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    iVar2 = FUN_004c67c0(*ppuVar3,param_1);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[3];
    ppuVar3 = ppuVar3 + 3;
  }
  return ppuVar3[2];
}

