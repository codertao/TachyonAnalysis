
/* look up an already-loaded sector by spx name in the galaxy table (dedupe) */

undefined4 * Spx_FindLoaded(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    puVar4 = &DAT_005a5554;
    do {
      iVar1 = FUN_004c67c0(param_1,puVar4);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x11;
      puVar4 = puVar4 + 0x44;
    } while (uVar3 < DAT_005a5544);
  }
  return (undefined4 *)0x0;
}

