
undefined4 FUN_004a03c0(void)

{
  LONG LVar1;
  int iVar2;
  
  FUN_004a0420();
  LVar1 = GetWindowLongA(GLBL_WindowHandle_,-6);
  iVar2 = DirectInputCreateA(LVar1,0x500,&DAT_00563ea8,0);
  if (iVar2 < 0) {
    DAT_00563ea8 = 0;
    return 0xffffffff;
  }
  if (DAT_00563ea8 == 0) {
    return 0xffffffff;
  }
  FUN_004a0460();
  FUN_004a04f0(0);
  return 0;
}

