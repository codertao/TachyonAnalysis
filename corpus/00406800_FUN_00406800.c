
undefined4 FUN_00406800(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(param_2 + 0x58);
  if (*(int *)(param_2 + 0x54) != 0) {
    do {
      iVar1 = str_cmp(iVar3,param_1);
      if (iVar1 == 0) {
        return *(undefined4 *)(iVar3 + 0x20);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (uVar2 < *(uint *)(param_2 + 0x54));
  }
  return 0;
}

