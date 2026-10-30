
void FUN_0046dd30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005635c4 = param_1;
  iVar1 = 0x13;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = &DAT_00587880;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    return;
  }
  puVar2 = &DAT_00587880;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

