
undefined4 FUN_004c851e(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_004c4d9e(DVar2);
    return 0xffffffff;
  }
  return 0;
}

