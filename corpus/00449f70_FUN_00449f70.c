
undefined4 FUN_00449f70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    param_2 = param_2 + 0x19c;
    uVar2 = 0;
    do {
      if (*(int *)(param_2 + 0x44) == 0) {
        return 0;
      }
      iVar1 = FUN_004c67c0(*(int *)(param_2 + 0x44),param_1);
      if ((iVar1 == 0) || (*(int *)(param_2 + 0x44) == param_1)) {
        return *(undefined4 *)(param_2 + 0x40);
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0x48;
    } while (uVar2 < 0x20);
  }
  return 0;
}

