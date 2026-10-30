
int FUN_0046f290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0049df00(param_1,0xa107);
  if (iVar1 != 0) {
    iVar4 = 0;
    for (iVar2 = FUN_0049dfa0(iVar1); iVar2 != 0; iVar2 = iVar2 + -1) {
      while (iVar3 = FUN_0049df40(iVar1,iVar4), iVar3 == 0) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = FUN_0049df60(iVar1,iVar4);
      if ((iVar3 != 0) && (iVar3 = FUN_004c67c0(iVar3,param_2), iVar3 == 0)) {
        FUN_0049c6e0(0xa107);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_0049c6e0(0xa107);
  }
  return 0;
}

