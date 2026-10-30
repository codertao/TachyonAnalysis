
undefined4 FUN_004c56ad(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_006c9e80) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_006c9d80)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_005615d8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004c5709;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004c5709:
      *(undefined4 *)((&DAT_006c9d80)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004c4e11();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004c4e1a();
  *puVar2 = 0;
  return 0xffffffff;
}

