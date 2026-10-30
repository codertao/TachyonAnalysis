
undefined4 FUN_004c2ff0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_004c2fbf(param_2);
    iVar2 = FUN_004c6f88(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

