
void FUN_004ad900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_004aee60(param_2,param_3,param_4,param_5,param_6);
    puVar1 = param_1 + 0xc0;
    puVar3 = param_1;
    puVar4 = puVar1;
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004aefb0(puVar1,param_1 + 0x180);
    if (DAT_0055e964 == 0x10) {
      FUN_004e7c30();
      if (param_1[0x1c3] != 0) {
        FUN_004e7b69();
        FUN_004e7c50(puVar1,param_1[0x1c3]);
      }
      if (param_1[0x1c4] != 0) {
        FUN_004e7b48();
        FUN_004e7c50(puVar1,param_1[0x1c4]);
        return;
      }
    }
    else {
      FUN_004ad8b0(puVar1,param_1[0x1c2]);
    }
  }
  return;
}

