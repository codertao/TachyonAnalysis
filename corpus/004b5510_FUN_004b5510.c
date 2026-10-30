
undefined4 FUN_004b5510(void)

{
  undefined4 uVar1;
  
  if (DAT_006af53c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b5519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_006af53c)();
    return uVar1;
  }
  if (DAT_006af504 != 0) {
    DAT_006af504 = 0;
    DAT_0055ed20 = 0xffffffff;
    FUN_004cc601();
    FUN_004b59d0();
    return 1;
  }
  return 0;
}

