
undefined4 FUN_10003730(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_100199bc = 0;
  puVar2 = DAT_100199dc;
  for (iVar1 = 0x870; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _beginthread(FUN_10003680,0,(void *)0x0);
  DAT_100199b8 = 1;
  return 0;
}

