
undefined4 * FUN_00482b00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00556ef0;
  cVar1 = (char)DAT_00556ef0;
  while( true ) {
    if (cVar1 == '\0') {
      return (undefined4 *)0x0;
    }
    iVar2 = str_cmp(puVar3,param_1);
    if (iVar2 == 0) break;
    cVar1 = *(char *)(puVar3 + 0x2b);
    puVar3 = puVar3 + 0x2b;
  }
  return puVar3;
}

