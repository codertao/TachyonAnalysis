
undefined4 FUN_00485060(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0046f080(param_1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if ((*(byte *)(iVar1 + 0x44) & 1) != 0) {
        return 1;
      }
    }
    else if (param_2 == 1) {
      if ((*(byte *)(iVar1 + 0x44) & 2) != 0) {
        return 1;
      }
    }
    else if ((param_2 == 2) && ((*(byte *)(iVar1 + 0x44) & 4) != 0)) {
      return 1;
    }
  }
  return 0;
}

