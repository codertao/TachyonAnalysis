
undefined4 FUN_004c5631(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_006c9e80) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_006c9d80)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_005615d8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004c568a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_004c568a:
      *(HANDLE *)((&DAT_006c9d80)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_004c4e11();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004c4e1a();
  *puVar1 = 0;
  return 0xffffffff;
}

