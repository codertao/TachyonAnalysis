
void FUN_00488520(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = FUN_0043bf10(&GLBL_UI_ELEM_LIST,s_STAT_CURRENT_SHIP_005587e8);
  iVar2 = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  if (((param_1 != 0) && (param_2 != 0)) && (iVar2 != 0)) {
    iVar3 = FUN_0048e820(iVar2,s_OTHER_SHIP_NAMES_00533a5c,param_1);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        pcVar4 = s__Current_Ship__005587d8;
      }
      else {
        pcVar4 = *(char **)(iVar1 + 0x40);
      }
      str_sprintf(&DAT_0056c4a0,s__s__s_005336a4,pcVar4,iVar3);
      OurFreeMem(iVar2);
      return;
    }
    DAT_0056c4a0 = 0;
    OurFreeMem(iVar2);
    return;
  }
  OurFreeMem(iVar2);
  DAT_0056c4a0 = 0;
  return;
}

