
void FUN_004b8440(undefined4 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_006af670;
  *DAT_006af670 = 6;
  *(undefined4 *)(puVar1 + 4) = DAT_006af6e0;
  *(undefined4 *)(puVar1 + 2) = DAT_006af674;
  DAT_006af670 = DAT_006af670 + 6;
  if (DAT_006af7d0 != (code *)0x0) {
    DAT_006af670 = (undefined2 *)(*DAT_006af7d0)(param_1,DAT_006af670);
  }
  puVar1[1] = (short)DAT_006af670 - (short)puVar1;
  return;
}

