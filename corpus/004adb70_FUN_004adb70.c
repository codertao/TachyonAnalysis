
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004adb70(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  FARPROC pFVar1;
  int iVar2;
  
  DAT_006044e0 = LoadLibraryA(param_3);
  if (DAT_006044e0 == (HMODULE)0x0) {
    return -2;
  }
  pFVar1 = GetProcAddress(DAT_006044e0,s_hw3d_GetDescriptor_0055e9e8);
  if (pFVar1 == (FARPROC)0x0) {
    return -3;
  }
  DAT_00604500 = 0x84;
  iVar2 = (*pFVar1)(param_1,&DAT_00604500,0x101);
  if (iVar2 == 0) {
    (*DAT_0060451c)(0x1030,GLBL_WindowHandle_,0);
    pFVar1 = GetProcAddress(DAT_006044e0,s_hw3d_GetDescriptor2_0055e9d4);
    if (pFVar1 != (FARPROC)0x0) {
      _DAT_006044c0 = 0x20;
      (*pFVar1)(param_1,&DAT_006044c0,0x101);
    }
    pFVar1 = GetProcAddress(DAT_006044e0,s_hw3d_InitOnce_0055e9c4);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)();
      return iVar2;
    }
    iVar2 = 0;
  }
  return iVar2;
}

