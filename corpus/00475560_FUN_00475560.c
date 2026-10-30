
void FUN_00475560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0049df00(s_shiptext_bin_00545c20,0xa100);
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 != 0)) {
    iVar2 = FUN_0048e820(iVar1,s_OTHER_SHIP_NAMES_00533a5c,param_1);
    if (iVar2 != 0) {
      str_sprintf(&DAT_005720e0,iVar2);
      FUN_0049c530(iVar1);
      return;
    }
    DAT_005720e0 = 0;
    FUN_0049c530(iVar1);
    return;
  }
  FUN_0049c530(iVar1);
  DAT_005720e0 = 0;
  return;
}

