
undefined4 FUN_004be5a0(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_004c572c(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_004c572c(2);
      iVar2 = FUN_004c572c(1);
      if (iVar2 == iVar1) goto LAB_004be5ee;
    }
    hObject = (HANDLE)FUN_004c572c(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004be5f0;
    }
  }
LAB_004be5ee:
  DVar4 = 0;
LAB_004be5f0:
  FUN_004c56ad(param_1);
  *(undefined1 *)((&DAT_006c9d80)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_004c4d9e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

