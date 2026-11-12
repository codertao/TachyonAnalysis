
/* sweep: guess */

undefined * Starbase_FindFont(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_005882f8;
  uVar2 = 0;
  do {
    iVar1 = __stricmp(puVar3,param_1);
    if (iVar1 == 0) {
      return puVar3 + 0x40;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x50;
  } while (uVar2 < 0x40);
  return (undefined *)0x0;
}

