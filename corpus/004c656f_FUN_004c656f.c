
BOOL FUN_004c656f(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6
                 )

{
  undefined1 *puVar1;
  BOOL BVar2;
  size_t _Size;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  WORD local_20 [2];
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052fce8;
  puStack_10 = &LAB_004bde30;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffc4;
  iVar3 = DAT_005652c8;
  puVar1 = &stack0xffffffc4;
  if (DAT_005652c8 == 0) {
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 != 0) goto LAB_004c65de;
    BVar2 = GetStringTypeA(0,1,"",1,local_20);
    if (BVar2 != 0) {
      iVar3 = 2;
      puVar1 = local_1c;
      goto LAB_004c65de;
    }
  }
  else {
LAB_004c65de:
    local_1c = puVar1;
    DAT_005652c8 = iVar3;
    if (DAT_005652c8 == 1) {
      BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
      goto LAB_004c6722;
    }
    if (DAT_005652c8 == 2) {
      if (param_5 == 0) {
        param_5 = DAT_00565148;
      }
      _Size = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (_Size != 0) {
        local_8 = 0;
        FUN_004bd340();
        local_1c = &stack0xffffffc4;
        _memset(&stack0xffffffc4,0,_Size);
        local_8 = 0xffffffff;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
          iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,&stack0xffffffc4,_Size,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar3 != 0) {
            local_8 = 1;
            FUN_004bd340();
            local_8 = 0xffffffff;
            if (&stack0x00000000 != (undefined1 *)0x3c) {
              if (param_6 == 0) {
                param_6 = DAT_00565138;
              }
              local_1c = &stack0xffffffc4;
              *(short *)(&stack0xffffffc4 + param_3 * 2) = -1;
              local_20[param_3 + -0xf] = 0xffff;
              BVar2 = GetStringTypeA(param_6,param_1,&stack0xffffffc4,_Size,(LPWORD)&stack0xffffffc4
                                    );
              if ((local_20[param_3 + -0xf] != 0xffff) &&
                 (*(short *)(&stack0xffffffc4 + param_3 * 2) == -1)) {
                FUN_004bd8e0(param_4,&stack0xffffffc4,param_3 * 2);
                goto LAB_004c6722;
              }
            }
          }
        }
      }
    }
  }
  BVar2 = 0;
LAB_004c6722:
  *unaff_FS_OFFSET = local_14;
  return BVar2;
}

