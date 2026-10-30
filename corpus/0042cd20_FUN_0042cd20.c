
uint FUN_0042cd20(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_1[1];
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar4 = uVar2 + 0x24;
    do {
      iVar1 = FUN_004c67c0(iVar4,param_2);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x3c;
      iVar4 = iVar4 + 0x3c;
    } while (uVar3 < *param_1);
  }
  return 0;
}

