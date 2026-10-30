
void FUN_00451680(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      FUN_00451620(param_1,param_2,param_3,*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  FUN_004515e0(param_3);
  if (param_3 != 0xb) {
    if (param_3 == 0xc) {
      FUN_004525c0(3);
    }
    return;
  }
  FUN_004525c0(4);
  return;
}

