
void FUN_00433dc0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x150) != '\0') && (*(int *)(param_1 + 0x170) == 0)) {
    uVar1 = FUN_0049d570(param_1 + 0x150,&DAT_005a61e0);
    *(undefined4 *)(param_1 + 0x170) = uVar1;
  }
  return;
}

