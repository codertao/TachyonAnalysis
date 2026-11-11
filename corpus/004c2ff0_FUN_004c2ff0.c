
undefined4 FUN_004c2ff0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = Crt_InputGetc(param_2);
    iVar2 = Crt_isspace(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

