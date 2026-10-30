
void FUN_00451890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      FUN_00451830(param_1,param_2,param_3,*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

