
void FUN_00466b00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00466ad0();
  if (iVar1 == 0) {
    return;
  }
  puVar3 = (undefined4 *)(iVar1 + 0x18);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(iVar1 + 0x54) = 0;
  return;
}

