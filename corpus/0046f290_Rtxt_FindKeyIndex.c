
/* sweep: guess */

int Rtxt_FindKeyIndex(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = load_rtxt_bin(param_1,0xa107);
  if (iVar1 != 0) {
    iVar4 = 0;
    for (iVar2 = Rtxt_GetCount(iVar1); iVar2 != 0; iVar2 = iVar2 + -1) {
      while (iVar3 = Rtxt_GetRecord(iVar1,iVar4), iVar3 == 0) {
        iVar4 = iVar4 + 1;
      }
      iVar3 = Rtxt_GetKeyName(iVar1,iVar4);
      if ((iVar3 != 0) && (iVar3 = __stricmp(iVar3,param_2), iVar3 == 0)) {
        Mem_FreeTag(0xa107);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    }
    Mem_FreeTag(0xa107);
  }
  return 0;
}

