
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

undefined4 vid_SetResInternal(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  DAT_006022e8 = param_3;
  DAT_006022e0 = param_1;
  DAT_006022e4 = param_2;
  DAT_006022ec = param_4;
  if (DAT_006022f4 != 0) {
    SetWindowLongA(GLBL_WindowHandle_,-0x10,0x16ca0000);
    if ((DAT_005640f4 == 0) && (DAT_005640fc != 0)) {
      (**(code **)(*DAT_00602760 + 0x4c))(DAT_00602760);
      (**(code **)(*DAT_00602760 + 0x50))(DAT_00602760,GLBL_WindowHandle_,8);
      (**(code **)(*DAT_005640e4 + 8))(DAT_005640e4);
      if (DAT_005640e8 != (int *)0x0) {
        (**(code **)(*DAT_005640e8 + 8))(DAT_005640e8);
      }
      DAT_005640e4 = (int *)0x0;
      DAT_005640e8 = (int *)0x0;
      DAT_005640fc = 0;
      MoveWindow(GLBL_WindowHandle_,DAT_00603974,DAT_0060397c,DAT_00603978 - DAT_00603974,
                 DAT_00603980 - DAT_0060397c,1);
    }
    DAT_0060231c = param_1;
    _DAT_00601ea4 = param_1;
    _DAT_00601eb4 = param_1 * param_2;
    _DAT_00601ea0 = 0x28;
    _DAT_00601ea8 = -param_2;
    _DAT_00601eac = 1;
    _DAT_00601eae = (undefined2)DAT_00602334;
    _DAT_00601eb0 = 0;
    _DAT_00601eb8 = 0;
    _DAT_00601ebc = 0;
    _DAT_00601ec0 = 0;
    _DAT_00601ec4 = 0x100;
    if (DAT_00602334 == 0x10) {
      DAT_00602338 = 0x7c00;
      DAT_0060233c = 0x3e0;
      DAT_00602340 = 0x1f;
      DAT_00602344 = 0;
    }
    else if (DAT_00602334 == 0x20) {
      DAT_00602338 = 0xff0000;
      DAT_0060233c = 0xff00;
      DAT_00602340 = 0xff;
      DAT_00602344 = 0xff000000;
    }
    if (DAT_006022d4 == (HBITMAP)0x0) {
      if (DAT_005640f8 != 0) {
        Mem_FreeTemp(DAT_005640f8);
        goto LAB_004a4ad2;
      }
    }
    else {
      DeleteObject(DAT_006022d4);
      DAT_006022d4 = (HBITMAP)0x0;
LAB_004a4ad2:
      DAT_005640f8 = 0;
    }
    hdc = GetDC(GLBL_WindowHandle_);
    DAT_006022d4 = CreateDIBSection(hdc,(BITMAPINFO *)&DAT_00601ea0,0,(void **)&DAT_005640f8,
                                    (HANDLE)0x0,0);
    DeleteDC(hdc);
    DAT_006022cc = (code *)&LAB_004a5160;
    Vid_SetSysPalNoStatic();
    Mouse_Release();
    goto LAB_004a4b1b;
  }
  SetWindowLongA(GLBL_WindowHandle_,-0x10,0);
  if (DAT_005640e4 != (int *)0x0) {
    (**(code **)(*DAT_005640e4 + 8))(DAT_005640e4);
    DAT_005640e4 = (int *)0x0;
  }
  if (DAT_005640e8 != (int *)0x0) {
    (**(code **)(*DAT_005640e8 + 8))(DAT_005640e8);
    DAT_005640e8 = (int *)0x0;
  }
  (**(code **)(*DAT_00602760 + 0x50))(DAT_00602760,GLBL_WindowHandle_,0x53);
  if (DAT_00602334 == 0x20) {
    iVar1 = Vid_DDSetDisplayMode(param_1,param_2);
  }
  else {
    iVar1 = (**(code **)(*DAT_00602760 + 0x54))(DAT_00602760,param_1,param_2,DAT_00602334,0,0);
  }
  if (iVar1 != 0) {
    if (1 < DAT_005b9d1c) {
      OutputDebugStringA(s_vid_SetResInternal___Could_not_s_0055e2a0);
    }
    return 0xffffffff;
  }
  puVar4 = &DAT_00602780;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_00602780 = 0x6c;
  if (DAT_00602330 == 0) {
    DAT_00602784 = 1;
    DAT_006027e8 = 0x200;
  }
  else {
    DAT_00602784 = 0x21;
    _DAT_00602794 = 1;
    DAT_006027e8 = 0x218;
  }
  iVar1 = 0;
  (**(code **)(*DAT_00602760 + 0x18))(DAT_00602760,&DAT_00602780,&DAT_005640e4);
  DAT_0060231c = DAT_00602790;
  (**(code **)(*DAT_005640e4 + 0x38))(DAT_005640e4,&DAT_006027e8);
  if (DAT_00602334 != 8) {
    _DAT_006027c8 = 0x20;
    (**(code **)(*DAT_005640e4 + 0x54))(DAT_005640e4,&DAT_006027c8);
    DAT_00602338 = DAT_006027d8;
    DAT_00602340 = DAT_006027e0;
    DAT_0060233c = DAT_006027dc;
    DAT_00602344 = DAT_006027e4;
  }
  uVar3 = DAT_00602334;
  if (DAT_00602348 != 0) {
    DAT_00602338 = 0xff0000;
    DAT_0060233c = 0xff00;
    DAT_00602340 = 0xff;
    DAT_00602344 = 0xff000000;
  }
  DAT_00602318 = DAT_006027e8 >> 0x15 & 1;
  puVar4 = &DAT_00602780;
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (uVar3 == 8) {
    DAT_00602784 = 7;
  }
  else {
    DAT_006027d8 = DAT_00602338;
    DAT_006027dc = DAT_0060233c;
    _DAT_006027d4 = uVar3;
    _DAT_006027c8 = 0x20;
    _DAT_006027cc = 0x40;
    DAT_006027e0 = DAT_00602340;
    DAT_006027e4 = DAT_00602344;
    DAT_00602784 = 0x1007;
  }
  DAT_00602780 = 0x6c;
  if (DAT_0060234c == 0) {
    _DAT_00602788 = DAT_006022ec;
    DAT_006027e8 = 0x840;
    _DAT_0060278c = DAT_006022e8;
    (**(code **)(*DAT_00602760 + 0x18))(DAT_00602760,&DAT_00602780,&DAT_005640e8,0);
    if ((DAT_00602330 != 0) && (DAT_00602318 == 0)) {
      DAT_006027e8 = 4;
      (**(code **)(*DAT_005640e4 + 0x30))(DAT_005640e4,&DAT_006027e8,&DAT_005640ec);
    }
  }
  else {
    if (DAT_006022d4 == (HBITMAP)0x0) {
      if (DAT_005640f8 != 0) {
        Mem_FreeTemp(DAT_005640f8);
        goto LAB_004a47c8;
      }
    }
    else {
      DeleteObject(DAT_006022d4);
      DAT_006022d4 = (HBITMAP)0x0;
LAB_004a47c8:
      DAT_005640f8 = 0;
      uVar3 = DAT_00602334;
    }
    DAT_005640f8 = Mem_AllocTemp((uVar3 >> 3) * DAT_006022ec * DAT_006022e8,s_Windowed_OTW_0055e290)
    ;
  }
  if (DAT_005640f0 == 0) {
    if (DAT_00602334 == 8) {
      (**(code **)(*DAT_00602760 + 0x14))(DAT_00602760,0x44,&DAT_00602360,&DAT_005640f0,0);
      goto LAB_004a4820;
    }
  }
  else {
LAB_004a4820:
    if (DAT_00602334 == 8) {
      (**(code **)(*DAT_005640e8 + 0x7c))(DAT_005640e8,DAT_005640f0);
      (**(code **)(*DAT_005640e4 + 0x7c))(DAT_005640e4,DAT_005640f0);
      if ((DAT_00602330 != 0) && (DAT_00602318 == 0)) {
        (**(code **)(*DAT_005640ec + 0x7c))(DAT_005640ec,DAT_005640f0);
      }
    }
  }
  DAT_006022f8 = 0;
  DAT_006022fc = 0;
  DAT_00602300 = param_1;
  DAT_00602308 = 0;
  DAT_0060230c = 0;
  DAT_00602310 = param_1;
  DAT_00602304 = iVar1;
  DAT_00602314 = iVar1;
  if ((DAT_005640f8 != 0) && (DAT_0060234c == 0)) {
    Mem_FreeTemp(DAT_005640f8);
    DAT_005640f8 = 0;
  }
  DAT_005640fc = 1;
  Mouse_Capture();
  if ((param_1 == 0x140) && (iVar1 == 0xf0)) {
    if (DAT_00602318 != 0) {
      DAT_006022cc = (code *)&LAB_004a5250;
      DAT_006022d0 = 0;
      goto LAB_004a4b1b;
    }
  }
  else {
    if (DAT_00602348 != 0) {
      if (DAT_0060234c == 0) {
        DAT_006022cc = (code *)&LAB_004a5100;
      }
      else {
        DAT_006022cc = Vid_BlitOTW_A;
      }
      goto LAB_004a4b1b;
    }
    if (DAT_0060234c != 0) {
      DAT_006022cc = Vid_BlitOTW_B;
      goto LAB_004a4b1b;
    }
  }
  DAT_006022cc = (code *)&LAB_004a5100;
LAB_004a4b1b:
  DAT_00602320 = 1;
  DAT_005640f4 = DAT_006022f4;
  if (DAT_005b9d1c != 0) {
    OutputDebugStringA(s_vid_SetResInternal___0055e278);
  }
  return 0;
}

