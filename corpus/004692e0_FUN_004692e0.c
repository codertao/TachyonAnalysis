
void FUN_004692e0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_00589720 != 0) {
    puVar2 = (undefined4 *)(DAT_00589724 + 0x10);
    do {
      if (DAT_005a6634 == 0) {
        uVar1 = FUN_00469d80(puVar2[0x1a],puVar2[0x1b]);
        *puVar2 = uVar1;
      }
      else {
        *puVar2 = 1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x38;
    } while (uVar3 < DAT_00589720);
  }
  return;
}

