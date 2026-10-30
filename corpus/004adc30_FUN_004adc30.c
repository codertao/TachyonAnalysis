
void FUN_004adc30(void)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_006044e0 != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(DAT_006044e0,s_hw3d_UninitOnce_0055e9fc);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
    FreeLibrary(DAT_006044e0);
    puVar3 = &DAT_00604500;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

