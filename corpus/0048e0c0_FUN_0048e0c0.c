
void FUN_0048e0c0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 << 0x10 | param_2 & 0xffff;
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      FUN_0048de40(uVar3,param_3,puVar2[1],*puVar2);
      FUN_0048de40(uVar3,param_3,puVar2[2],*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

