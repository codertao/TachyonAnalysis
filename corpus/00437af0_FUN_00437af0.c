
undefined4 FUN_00437af0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00437ac0(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = param_2;
  }
  return uVar2;
}

