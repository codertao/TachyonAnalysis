
undefined4 FUN_004b5290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_006af538 != (code *)0x0) {
    uVar1 = (*DAT_006af538)(param_1,param_2,param_3);
    return uVar1;
  }
  iVar2 = FUN_004b5160(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004b59b0(param_3);
  DAT_006af504 = 1;
  DAT_006af514 = 0;
  DAT_006af51c = 0xff0000;
  DAT_006af520 = 0xff0000;
  DAT_006af524 = 0xff0000;
  DAT_006af528 = 0;
  DAT_006af52c = 0;
  DAT_0055ed20 = 0;
  FUN_004cc601();
  return 1;
}

