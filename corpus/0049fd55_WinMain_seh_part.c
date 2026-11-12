
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* sweep: SEH fragment */

undefined4 WinMain_seh_part(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = GLBL_WindowHandle_;
  if (GLBL_WindowHandle_ != 0) {
    *(undefined4 *)(iVar3 + -4) = 0;
    *(undefined4 *)(iVar3 + -8) = 0;
    *(undefined4 *)(iVar3 + -0xc) = 0x10;
    *(int *)(iVar3 + -0x10) = iVar2;
    puVar4 = (undefined1 *)(iVar3 + -0x14);
    *(undefined4 *)(iVar3 + -0x14) = 0x49fd75;
    PostMessageA(*(HWND *)(iVar3 + -0x10),*(UINT *)(iVar3 + -0xc),*(WPARAM *)(iVar3 + -8),
                 *(LPARAM *)(iVar3 + -4));
    *(undefined4 *)(puVar4 + -4) = 0;
    *(undefined4 *)(puVar4 + -8) = 0;
    *(undefined4 *)(puVar4 + -0xc) = 0;
    *(int *)(puVar4 + -0x10) = unaff_EBP + -0x34;
    puVar5 = puVar4 + -0x14;
    *(undefined4 *)(puVar4 + -0x14) = 0x49fd87;
    iVar3 = GetMessageA(*(LPMSG *)(puVar4 + -0x10),*(HWND *)(puVar4 + -0xc),*(UINT *)(puVar4 + -8),
                        *(UINT *)(puVar4 + -4));
    while (iVar3 != 0) {
      *(int *)(puVar5 + -4) = unaff_EBP + -0x34;
      puVar6 = puVar5 + -8;
      *(undefined4 *)(puVar5 + -8) = 0x49fd9d;
      TranslateMessage(*(MSG **)(puVar5 + -4));
      *(int *)(puVar6 + -4) = unaff_EBP + -0x34;
      puVar7 = puVar6 + -8;
      *(undefined4 *)(puVar6 + -8) = 0x49fda3;
      DispatchMessageA(*(MSG **)(puVar6 + -4));
      *(undefined4 *)(puVar7 + -4) = 0;
      *(undefined4 *)(puVar7 + -8) = 0;
      *(undefined4 *)(puVar7 + -0xc) = 0;
      *(int *)(puVar7 + -0x10) = unaff_EBP + -0x34;
      puVar5 = puVar7 + -0x14;
      *(undefined4 *)(puVar7 + -0x14) = 0x49fdaf;
      iVar3 = GetMessageA(*(LPMSG *)(puVar7 + -0x10),*(HWND *)(puVar7 + -0xc),*(UINT *)(puVar7 + -8)
                          ,*(UINT *)(puVar7 + -4));
    }
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return uVar1;
}

