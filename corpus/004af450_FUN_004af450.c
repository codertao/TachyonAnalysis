
undefined4 * FUN_004af450(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar2 = &DAT_006128c0;
  uVar4 = 0;
  puVar3 = &DAT_006128c4;
  do {
    if (puVar3[4] != 0) {
      iVar1 = str_cmp(puVar3,param_1);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 6;
    puVar3 = puVar3 + 6;
  } while (uVar4 < 0x100);
  return (undefined4 *)0x0;
}

