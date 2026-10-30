
void FUN_004b8520(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_006af670;
  *DAT_006af670 = 2;
  DAT_006af670 = DAT_006af670 + 2;
  if (DAT_006af7c4 != (code *)0x0) {
    DAT_006af670 = (undefined2 *)(*DAT_006af7c4)(param_1,DAT_006af670);
  }
  puVar1[1] = (short)DAT_006af670 - (short)puVar1;
  return;
}

