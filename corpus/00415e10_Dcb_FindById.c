
/* look up active client DCB by id (scans g_DcbActiveList 0x5b3280) */

int Dcb_FindById(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = DAT_005b3280;
    if (param_1 == DAT_005b8f50) {
      return GLBL_SOME_CONTEXT;
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0xe8) == param_1) {
        return iVar1;
      }
    }
  }
  return 0;
}

