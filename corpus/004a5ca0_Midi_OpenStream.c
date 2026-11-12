
/* sweep */

undefined4 Midi_OpenStream(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  DWORD_PTR DVar4;
  int *piVar5;
  MMRESULT MVar6;
  HGLOBAL pvVar7;
  LPMIDIHDR pmVar8;
  int iVar9;
  UINT UVar10;
  uint uVar11;
  uint dwBytes;
  UINT local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_00564894 == 0) {
    return 0xffffffff;
  }
  bVar1 = false;
  local_c = DAT_0055e398;
  iVar9 = DAT_005648ac;
  if (DAT_005648ac == 0) {
LAB_004a5ce1:
    UVar10 = 0;
    local_c = 0;
    piVar5 = DAT_005648b0;
    bVar2 = bVar1;
    if (DAT_005648b0 != (int *)0x0) {
      do {
        if (piVar5[3] == 2) {
          UVar10 = piVar5[2];
          bVar1 = true;
          local_c = UVar10;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
      bVar2 = false;
      if (bVar1) goto LAB_004a5d4e;
    }
    piVar5 = DAT_005648b0;
    piVar3 = DAT_005648b0;
    if (DAT_005648b0 != (int *)0x0) {
      do {
        if (piVar5[3] == 5) {
          UVar10 = piVar5[2];
          bVar2 = true;
          local_c = UVar10;
        }
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
      if (bVar2) goto LAB_004a5d4e;
    }
    for (; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if (piVar3[3] == 1) {
        UVar10 = piVar3[2];
        local_c = UVar10;
      }
    }
  }
  else {
    do {
      if (*(UINT *)(iVar9 + 8) == DAT_0055e398) {
        bVar1 = true;
      }
      iVar9 = *(int *)(iVar9 + 4);
    } while (iVar9 != 0);
    UVar10 = DAT_0055e398;
    if (!bVar1) goto LAB_004a5ce1;
  }
LAB_004a5d4e:
  *(UINT *)(DAT_00564894 + 8) = UVar10;
  *(undefined4 *)(DAT_00564894 + 0x1c) = 0;
  if ((*(int *)(DAT_00564894 + 0x10) != 1) && (*(int *)(DAT_00564894 + 0x10) != 3)) {
    return 0xffffffff;
  }
  *(undefined4 *)(DAT_00564894 + 0x40) = param_1;
  *(undefined4 *)(DAT_00564894 + 0x44) = param_2;
  if (*(int *)(DAT_00564894 + 0x24) != 0) {
    *(undefined4 *)(DAT_00564894 + 0x10) = 7;
    midiOutReset(*(HMIDIOUT *)(DAT_00564894 + 0x24));
    iVar9 = *(int *)(DAT_00564894 + 0x3c);
    while (iVar9 != 0) {
      Sleep(0);
      iVar9 = *(int *)(DAT_00564894 + 0x3c);
    }
  }
  *(undefined4 *)(DAT_00564894 + 0x3c) = 0;
  *(undefined4 *)(DAT_00564894 + 0x10) = 2;
  if (*(int *)(DAT_00564894 + 0x24) == 0) {
    local_c = *(UINT *)(DAT_00564894 + 8);
    MVar6 = midiStreamOpen((LPHMIDISTRM)(DAT_00564894 + 0x24),&local_c,1,0x4a62e0,0,0x30000);
    if (MVar6 != 0) {
      *(undefined4 *)(DAT_00564894 + 0x24) = 0;
      *(undefined4 *)(DAT_00564894 + 0x10) = 1;
      goto LAB_004a6090;
    }
    local_8 = 8;
    local_4 = *(undefined4 *)(DAT_00564894 + 0x28);
    MVar6 = midiStreamProperty(*(HMIDISTRM *)(DAT_00564894 + 0x24),(LPBYTE)&local_8,0x80000001);
    if (MVar6 != 0) {
      midiStreamClose(*(HMIDISTRM *)(DAT_00564894 + 0x24));
      *(undefined4 *)(DAT_00564894 + 0x24) = 0;
      *(undefined4 *)(DAT_00564894 + 0x10) = 1;
      goto LAB_004a6090;
    }
  }
  pmVar8 = *(LPMIDIHDR *)(DAT_00564894 + 0x34);
  if (pmVar8 == (LPMIDIHDR)0x0) {
    uVar11 = 0x1000;
    pvVar7 = GlobalAlloc(0x2002,0x1000);
    pmVar8 = GlobalLock(pvVar7);
  }
  else {
    uVar11 = *(uint *)(DAT_00564894 + 0x38);
  }
  pmVar8->lpNext = *(midihdr_tag **)(DAT_00564894 + 0x30);
  pmVar8->lpData = (LPSTR)(pmVar8 + 1);
  pmVar8->dwBufferLength = uVar11 - 0x40;
  pmVar8->dwBytesRecorded = 0;
  DVar4 = DAT_00564894;
  pmVar8->dwFlags = 0;
  pmVar8->dwUser = DVar4;
  while (iVar9 = Midi_ParseFile(*(undefined4 *)(DAT_00564894 + 0x20),
                                *(undefined4 *)(DAT_00564894 + 0x40),pmVar8), iVar9 != 0) {
    if ((iVar9 != 2) || (0x7fff < uVar11)) {
      pvVar7 = GlobalHandle(pmVar8);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(pmVar8);
      GlobalFree(pvVar7);
      *(undefined4 *)(DAT_00564894 + 0x34) = 0;
      goto LAB_004a5f6a;
    }
    uVar11 = uVar11 * 2;
    pvVar7 = GlobalHandle(pmVar8);
    GlobalUnlock(pvVar7);
    UVar10 = 0;
    dwBytes = uVar11;
    pvVar7 = GlobalHandle(pmVar8);
    pvVar7 = GlobalReAlloc(pvVar7,dwBytes,UVar10);
    pmVar8 = GlobalLock(pvVar7);
    if (pmVar8 == (LPMIDIHDR)0x0) goto LAB_004a5f3c;
    pmVar8->lpData = (LPSTR)(pmVar8 + 1);
    pmVar8->dwBufferLength = uVar11 - 0x40;
    *(LPMIDIHDR *)(DAT_00564894 + 0x34) = pmVar8;
    *(uint *)(DAT_00564894 + 0x38) = uVar11;
  }
  MVar6 = midiOutPrepareHeader(*(HMIDIOUT *)(DAT_00564894 + 0x24),pmVar8,0x40);
  if (MVar6 == 0) {
    *(int *)(DAT_00564894 + 0x3c) = *(int *)(DAT_00564894 + 0x3c) + 1;
    MVar6 = midiStreamOut(*(HMIDISTRM *)(DAT_00564894 + 0x24),pmVar8,0x40);
    if (MVar6 == 0) {
      *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) & 0xfffffffe;
      pmVar8 = *(LPMIDIHDR *)(DAT_00564894 + 0x30);
      if (pmVar8 == (LPMIDIHDR)0x0) {
LAB_004a60b2:
        *(undefined4 *)(DAT_00564894 + 0x10) = 3;
        return 0;
      }
      while( true ) {
        *(midihdr_tag **)(DAT_00564894 + 0x30) = pmVar8->lpNext;
        iVar9 = Midi_FillStreamBuffer
                          (*(undefined4 *)(DAT_00564894 + 0x20),pmVar8,
                           *(undefined4 *)(DAT_00564894 + 0x44));
        if ((iVar9 != 0) && (iVar9 != 0xb)) goto LAB_004a5f6a;
        MVar6 = midiOutPrepareHeader(*(HMIDIOUT *)(DAT_00564894 + 0x24),pmVar8,0x40);
        if (MVar6 != 0) goto LAB_004a5f3c;
        MVar6 = midiStreamOut(*(HMIDISTRM *)(DAT_00564894 + 0x24),pmVar8,0x40);
        if (MVar6 != 0) break;
        *(int *)(DAT_00564894 + 0x3c) = *(int *)(DAT_00564894 + 0x3c) + 1;
        if (iVar9 == 0xb) {
          *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) | 1;
          goto LAB_004a60b2;
        }
        pmVar8 = *(LPMIDIHDR *)(DAT_00564894 + 0x30);
        if (pmVar8 == (LPMIDIHDR)0x0) {
          *(undefined4 *)(DAT_00564894 + 0x10) = 3;
          return 0;
        }
      }
      *(undefined4 *)(DAT_00564894 + 0x10) = 1;
    }
    else {
      *(int *)(DAT_00564894 + 0x3c) = *(int *)(DAT_00564894 + 0x3c) + -1;
      *(undefined4 *)(DAT_00564894 + 0x10) = 1;
    }
  }
  else {
    *(undefined4 *)(DAT_00564894 + 0x10) = 1;
  }
LAB_004a6090:
  *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) & 0xfffffffb;
  return 0xffffffff;
LAB_004a5f6a:
  *(undefined4 *)(DAT_00564894 + 0x10) = 1;
  goto LAB_004a6090;
LAB_004a5f3c:
  *(undefined4 *)(DAT_00564894 + 0x10) = 1;
  goto LAB_004a6090;
}

