
/* sweep */

undefined4 * Chatter_FindSet(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00548848;
  iVar1 = DAT_00548848;
  while( true ) {
    if (iVar1 == -1) {
      return (undefined4 *)0x0;
    }
    if (iVar1 == param_1) break;
    iVar1 = puVar2[4];
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}

