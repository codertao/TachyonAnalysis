
/* sweep: DirectInputCreateA */

undefined4 DInput_Init(void)

{
  LONG LVar1;
  int iVar2;
  
  DInput_Shutdown();
  LVar1 = GetWindowLongA(GLBL_WindowHandle_,-6);
  iVar2 = DirectInputCreateA(LVar1,0x500,&DAT_00563ea8,0);
  if (iVar2 < 0) {
    DAT_00563ea8 = 0;
    return 0xffffffff;
  }
  if (DAT_00563ea8 == 0) {
    return 0xffffffff;
  }
  DInput_ReleaseAll();
  DInput_SelectDevice(0);
  return 0;
}

