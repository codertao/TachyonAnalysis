
/* CRT */

int ___crtGetLocaleInfoA(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0052fd60;
  puStack_10 = &LAB_004bde30;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  if (DAT_005652ec == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_005652ec = 1;
      goto LAB_004c7785;
    }
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 != 0) {
      DAT_005652ec = 2;
      goto LAB_004c7785;
    }
  }
  else {
LAB_004c7785:
    if (DAT_005652ec == 1) {
      iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
      goto LAB_004c7827;
    }
    if (DAT_005652ec == 2) {
      if (param_5 == 0) {
        param_5 = DAT_00565148;
      }
      iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        __chkstk();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPWSTR)0x0;
          }
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffcc,-1,param_3,param_4);
          goto LAB_004c7827;
        }
      }
    }
  }
  iVar1 = 0;
LAB_004c7827:
  *unaff_FS_OFFSET = local_14;
  return iVar1;
}

