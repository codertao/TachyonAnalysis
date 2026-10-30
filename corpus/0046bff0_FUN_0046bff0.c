
void FUN_0046bff0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (DAT_0058973c != 0) {
    iVar1 = DAT_00589740 + 0x20;
    iVar2 = DAT_00589740;
    do {
      FUN_0046bde0(iVar1,iVar2,param_1);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x5c;
      iVar1 = iVar1 + 0x5c;
    } while (uVar3 < DAT_0058973c);
  }
  FUN_0046bf30();
  return;
}

