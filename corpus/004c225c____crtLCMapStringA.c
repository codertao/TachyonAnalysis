
/* CRT */

int ___crtLCMapStringA(LCID param_1,uint param_2,LPCSTR param_3,int param_4,LPWSTR param_5,
                      int param_6,UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052f810;
  puStack_10 = &LAB_004bde30;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  if (DAT_00565198 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_00565198 = 1;
      goto LAB_004c22d2;
    }
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_00565198 = 2;
      goto LAB_004c22d2;
    }
  }
  else {
LAB_004c22d2:
    if (0 < param_4) {
      param_4 = _strncnt(param_3,param_4);
    }
    if (DAT_00565198 == 2) {
      iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
      goto LAB_004c23ec;
    }
    if (DAT_00565198 == 1) {
      if (param_7 == 0) {
        param_7 = DAT_00565148;
      }
      iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,
                                  (LPWSTR)0x0,0);
      if (iVar2 != 0) {
        local_8 = 0;
        __chkstk();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x3c) &&
           (iVar1 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar2),
           iVar1 != 0)) {
          iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar2,(LPWSTR)0x0,0);
          if (iVar1 != 0) {
            if ((param_2 & 0x400) == 0) {
              local_8 = 1;
              __chkstk();
              local_8 = 0xffffffff;
              if ((&stack0x00000000 != (undefined1 *)0x3c) &&
                 (iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar2,
                                       (LPWSTR)&stack0xffffffc4,iVar1), iVar2 != 0)) {
                if (param_6 == 0) {
                  param_6 = 0;
                  param_5 = (LPWSTR)0x0;
                }
                iVar1 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar1,
                                            (LPSTR)param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
                iVar2 = iVar1;
joined_r0x004c2473:
                if (iVar2 != 0) goto LAB_004c23ec;
              }
            }
            else {
              if (param_6 == 0) goto LAB_004c23ec;
              if (iVar1 <= param_6) {
                iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar2,param_5,param_6
                                    );
                goto joined_r0x004c2473;
              }
            }
          }
        }
      }
    }
  }
  iVar1 = 0;
LAB_004c23ec:
  *unaff_FS_OFFSET = local_14;
  return iVar1;
}

