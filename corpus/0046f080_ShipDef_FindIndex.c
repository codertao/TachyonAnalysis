
/* sweep */

undefined4 * ShipDef_FindIndex(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar2 = &DAT_00583580;
  uVar3 = 0;
  puVar4 = &DAT_005835a0;
  do {
    iVar1 = __stricmp(puVar4,param_1);
    if (iVar1 == 0) {
      return puVar2;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x1a;
    puVar4 = puVar4 + 0x68;
  } while (uVar3 < 0x20);
  return (undefined4 *)0x0;
}

