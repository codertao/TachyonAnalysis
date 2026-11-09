
undefined4 FUN_10003a10(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_100199e8 = 0;
  DAT_10019af0 = 0;
  puVar2 = &DAT_10019b38;
  for (iVar1 = 0x49; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _beginthread(FUN_10003960,0,(void *)0x0);
  DAT_100199e4 = 1;
  DAT_100199ec = 9;
  return 0;
}

