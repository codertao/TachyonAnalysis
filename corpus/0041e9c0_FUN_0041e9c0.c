
undefined4 FUN_0041e9c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      do {
        iVar1 = str_cmp(iVar2,param_2);
        if (iVar1 == 0) {
          FUN_0041e850(param_1,iVar2,param_3,1);
          return 1;
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x40;
      } while (uVar3 < *(uint *)(param_1 + 0x50));
    }
  }
  return 0;
}

