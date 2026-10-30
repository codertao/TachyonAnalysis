
void FUN_00457890(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = &DAT_005897f0;
  if (DAT_0058af70 != 0) {
    while (iVar1 = FUN_0048b000(param_1,puVar2), iVar1 == 0) {
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x2f;
      if (DAT_0058af70 <= uVar3) {
        return;
      }
    }
    FUN_0048b0c0(param_1,puVar2);
  }
  return;
}

