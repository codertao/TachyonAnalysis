
/* sweep */

undefined4 WinMain_MessageLoop(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (GLBL_WindowHandle_ != (HWND)0x0) {
    PostMessageA(GLBL_WindowHandle_,0x10,0,0);
    iVar2 = GetMessageA((LPMSG)(unaff_EBP + -0x34),(HWND)0x0,0,0);
    while (iVar2 != 0) {
      TranslateMessage((MSG *)(unaff_EBP + -0x34));
      DispatchMessageA((MSG *)(unaff_EBP + -0x34));
      iVar2 = GetMessageA((LPMSG)(unaff_EBP + -0x34),(HWND)0x0,0,0);
    }
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return uVar1;
}

