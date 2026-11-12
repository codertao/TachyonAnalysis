
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* CRT: mis-split tail */

int ___crtCompareStringA_part2(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(iVar3 + -4) = 1;
  uVar2 = *(undefined4 *)(iVar3 + -4);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar3 + -0xc) = uVar1;
    *(undefined4 *)(iVar3 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar3 + -0x14) = uVar2;
    *(undefined4 *)(iVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar5 = (undefined1 *)(iVar3 + -0x1c);
    *(undefined4 *)(iVar3 + -0x1c) = 0x4c7ddf;
    iVar3 = MultiByteToWideChar(*(UINT *)(iVar3 + -0x18),*(DWORD *)(iVar3 + -0x14),
                                *(LPCSTR *)(iVar3 + -0x10),*(int *)(iVar3 + -0xc),
                                *(LPWSTR *)(iVar3 + -8),*(int *)(iVar3 + -4));
    if (iVar3 != 0) {
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0;
      *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(puVar5 + -0x14) = 9;
      *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      puVar6 = puVar5 + -0x1c;
      *(undefined4 *)(puVar5 + -0x1c) = 0x4c7df2;
      iVar3 = MultiByteToWideChar(*(UINT *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                  *(LPCSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                  *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
      *(int *)(unaff_EBP + -0x20) = iVar3;
      if (iVar3 != 0) {
        *(undefined4 *)(unaff_EBP + -4) = uVar2;
        *(undefined4 *)(puVar6 + -4) = 0x4c7e0b;
        __chkstk();
        *(undefined1 **)(unaff_EBP + -0x18) = puVar6;
        *(undefined1 **)(unaff_EBP + -0x28) = puVar6;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (puVar6 != (undefined1 *)0x0) {
          *(int *)(puVar6 + -4) = iVar3;
          *(undefined1 **)(puVar6 + -8) = puVar6;
          *(undefined4 *)(puVar6 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined4 *)(puVar6 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
          *(undefined4 *)(puVar6 + -0x14) = 1;
          *(undefined4 *)(puVar6 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
          puVar7 = puVar6 + -0x1c;
          *(undefined4 *)(puVar6 + -0x1c) = 0x4c7e42;
          iVar4 = MultiByteToWideChar(*(UINT *)(puVar6 + -0x18),*(DWORD *)(puVar6 + -0x14),
                                      *(LPCSTR *)(puVar6 + -0x10),*(int *)(puVar6 + -0xc),
                                      *(LPWSTR *)(puVar6 + -8),*(int *)(puVar6 + -4));
          if (iVar4 != 0) {
            *(int *)(puVar7 + -4) = iVar3;
            *(undefined1 **)(puVar7 + -8) = puVar6;
            *(undefined4 *)(puVar7 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(puVar7 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar7 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar7 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(puVar7 + -0x1c) = 0x4c7e5a;
            iVar3 = CompareStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                                   *(PCNZWCH *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                                   *(PCNZWCH *)(puVar7 + -8),*(int *)(puVar7 + -4));
            goto LAB_004c7e5e;
          }
        }
      }
    }
  }
  iVar3 = 0;
LAB_004c7e5e:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x10);
  return iVar3;
}

