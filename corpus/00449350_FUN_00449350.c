
void FUN_00449350(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 != 0)) {
    iVar2 = FUN_0048e820(iVar1,s_OTHER_SHIP_NAMES_00533a5c,param_1);
    if (iVar2 != 0) {
      str_sprintf(&DAT_00592f40,iVar2);
      OurFreeMem(iVar1);
      return;
    }
    DAT_00592f40 = 0;
    OurFreeMem(iVar1);
    return;
  }
  OurFreeMem(iVar1);
  DAT_00592f40 = 0;
  return;
}

