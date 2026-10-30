
undefined4 FUN_00476e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (DAT_00598580 != 0) {
    puVar1 = param_1;
    if (DAT_00598580 == 1) {
      uVar4 = 0x10;
      puVar1 = &DAT_00577f80;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      piVar2 = puVar1 + 0x2a7;
      do {
        if (((piVar2[-0x27b] != 0) && (*piVar2 != 0)) && (*(int *)(*piVar2 + 0x58) == param_1[0x16])
           ) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 0x2ad;
      } while (uVar3 < uVar4);
    }
  }
  return 0;
}

