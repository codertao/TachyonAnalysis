
uint FUN_00409420(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = param_1[1];
  if (*param_1 != 0) {
    do {
      iVar1 = str_cmp(uVar3,param_2);
      if (iVar1 == 0) {
        return uVar3;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x94;
    } while (uVar2 < *param_1);
  }
  return 0;
}

