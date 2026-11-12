
/* sweep */

undefined1 * WingStat_Find(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_00558da8;
  cVar1 = DAT_00558da8;
  while( true ) {
    if (cVar1 == '\0') {
      return (undefined1 *)0x0;
    }
    iVar2 = __stricmp(puVar3,param_1);
    if (iVar2 == 0) break;
    cVar1 = puVar3[0xac];
    puVar3 = puVar3 + 0xac;
  }
  return puVar3;
}

