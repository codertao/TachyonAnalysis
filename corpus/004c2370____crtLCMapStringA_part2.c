
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* CRT: mis-split tail */

int ___crtLCMapStringA_part2(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(undefined4 *)(iVar2 + -4) = uVar1;
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x14) = 1;
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar4 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x4c2399;
    iVar2 = MultiByteToWideChar(*(UINT *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                                *(LPCSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPWSTR *)(iVar2 + -8),*(int *)(iVar2 + -4));
    if (iVar2 != 0) {
      *(undefined4 *)(puVar4 + -4) = 0;
      *(undefined4 *)(puVar4 + -8) = 0;
      *(undefined4 *)(puVar4 + -0xc) = uVar1;
      *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      puVar5 = puVar4 + -0x1c;
      *(undefined4 *)(puVar4 + -0x1c) = 0x4c23af;
      iVar2 = LCMapStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                           *(LPCWSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                           *(LPWSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (iVar2 != 0) {
        if ((*(byte *)(unaff_EBP + 0xd) & 4) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 1;
          *(undefined4 *)(puVar5 + -4) = 0x4c2412;
          __chkstk();
          *(undefined1 **)(unaff_EBP + -0x18) = puVar5;
          *(undefined1 **)(unaff_EBP + -0x20) = puVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (puVar5 != (undefined1 *)0x0) {
            *(int *)(puVar5 + -4) = iVar2;
            *(undefined1 **)(puVar5 + -8) = puVar5;
            *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            puVar6 = puVar5 + -0x1c;
            *(undefined4 *)(puVar5 + -0x1c) = 0x4c244a;
            iVar3 = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                 *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                 *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
            if (iVar3 != 0) {
              iVar3 = *(int *)(unaff_EBP + 0x1c);
              *(undefined4 *)(puVar6 + -4) = 0;
              *(undefined4 *)(puVar6 + -8) = 0;
              if (iVar3 == 0) {
                *(undefined4 *)(puVar6 + -0xc) = 0;
                *(undefined4 *)(puVar6 + -0x10) = 0;
              }
              else {
                *(undefined4 *)(puVar6 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
                *(undefined4 *)(puVar6 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
              }
              *(int *)(puVar6 + -0x14) = iVar2;
              *(undefined1 **)(puVar6 + -0x18) = puVar5;
              *(undefined4 *)(puVar6 + -0x1c) = 0x220;
              *(undefined4 *)(puVar6 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
              *(undefined4 *)(puVar6 + -0x24) = 0x4c246f;
              iVar2 = WideCharToMultiByte(*(UINT *)(puVar6 + -0x20),*(DWORD *)(puVar6 + -0x1c),
                                          *(LPCWSTR *)(puVar6 + -0x18),*(int *)(puVar6 + -0x14),
                                          *(LPSTR *)(puVar6 + -0x10),*(int *)(puVar6 + -0xc),
                                          *(LPCSTR *)(puVar6 + -8),*(LPBOOL *)(puVar6 + -4));
              iVar3 = iVar2;
              goto joined_r0x004c2473;
            }
          }
        }
        else {
          if (*(int *)(unaff_EBP + 0x1c) == 0) goto LAB_004c23ec;
          if (iVar2 <= *(int *)(unaff_EBP + 0x1c)) {
            *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(unaff_EBP + 0x1c);
            *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(unaff_EBP + 0x18);
            *(undefined4 *)(puVar5 + -0xc) = uVar1;
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(puVar5 + -0x1c) = 0x4c23e2;
            iVar3 = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                 *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                 *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
joined_r0x004c2473:
            if (iVar3 != 0) goto LAB_004c23ec;
          }
        }
      }
    }
  }
  iVar2 = 0;
LAB_004c23ec:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return iVar2;
}

