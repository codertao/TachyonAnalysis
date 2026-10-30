
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_004c665f(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar5 = *(undefined4 *)(unaff_EBP + -0x28);
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(iVar3 + -4) = 0;
    *(undefined4 *)(iVar3 + -8) = 0;
    *(undefined4 *)(iVar3 + -0xc) = uVar5;
    *(undefined4 *)(iVar3 + -0x10) = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(iVar3 + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar3 + -0x1c) = 0x220;
    *(undefined4 *)(iVar3 + -0x20) = *(undefined4 *)(unaff_EBP + 0x18);
    puVar6 = (undefined1 *)(iVar3 + -0x24);
    *(undefined4 *)(iVar3 + -0x24) = 0x4c6691;
    iVar3 = WideCharToMultiByte(*(UINT *)(iVar3 + -0x20),*(DWORD *)(iVar3 + -0x1c),
                                *(LPCWSTR *)(iVar3 + -0x18),*(int *)(iVar3 + -0x14),
                                *(LPSTR *)(iVar3 + -0x10),*(int *)(iVar3 + -0xc),
                                *(LPCSTR *)(iVar3 + -8),*(LPBOOL *)(iVar3 + -4));
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(puVar6 + -4) = 0x4c66ae;
      FUN_004bd340();
      *(undefined1 **)(unaff_EBP + -0x18) = puVar6;
      *(undefined1 **)(unaff_EBP + -0x24) = puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (puVar6 != (undefined1 *)0x0) {
        iVar3 = *(int *)(unaff_EBP + 0x1c);
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
          iVar3 = DAT_00565138;
        }
        iVar2 = *(int *)(unaff_EBP + 0x10) * 2;
        psVar1 = (short *)(puVar6 + iVar2);
        *psVar1 = -1;
        psVar1[-1] = -1;
        *(undefined1 **)(puVar6 + -4) = puVar6;
        *(undefined4 *)(puVar6 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(puVar6 + -0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
        *(undefined4 *)(puVar6 + -0x10) = *(undefined4 *)(unaff_EBP + 8);
        *(int *)(puVar6 + -0x14) = iVar3;
        puVar7 = puVar6 + -0x18;
        *(undefined4 *)(puVar6 + -0x18) = 0x4c66fc;
        BVar4 = GetStringTypeA(*(LCID *)(puVar6 + -0x14),*(DWORD *)(puVar6 + -0x10),
                               *(LPCSTR *)(puVar6 + -0xc),*(int *)(puVar6 + -8),
                               *(LPWORD *)(puVar6 + -4));
        *(BOOL *)(unaff_EBP + -0x20) = BVar4;
        if ((psVar1[-1] != -1) && (*psVar1 == -1)) {
          *(int *)(puVar7 + -4) = iVar2;
          *(undefined1 **)(puVar7 + -8) = puVar6;
          *(undefined4 *)(puVar7 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
          *(undefined4 *)(puVar7 + -0x10) = 0x4c6718;
          FUN_004bd8e0();
          uVar5 = *(undefined4 *)(unaff_EBP + -0x20);
          goto LAB_004c6722;
        }
      }
    }
  }
  uVar5 = 0;
LAB_004c6722:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return uVar5;
}

