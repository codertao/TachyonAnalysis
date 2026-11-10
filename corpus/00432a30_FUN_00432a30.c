
void FUN_00432a30(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char local_80 [128];
  
  iVar1 = Rtxt_Load(s_spacemnu_bin_0053f2fc);
  if (iVar1 == 0) {
    str_sprintf(local_80,s__ERROR___d___No_string_resource_f_0053f2a8,param_1);
  }
  else {
    puVar2 = (undefined4 *)Rtxt_GetRecord(iVar1,param_1);
    if (puVar2 == (undefined4 *)0x0) {
      str_sprintf(local_80,s__ERROR___d___No_string_resource_f_0053f2d4,param_1);
    }
    else {
      _strncpy(local_80,(char *)*puVar2,0x7f);
    }
    OurFreeMem(iVar1);
  }
  MessageBeep(0);
  MessageBoxA(GLBL_WindowHandle_,local_80,PTR_s_Tachyon__The_Fringe_0053f274,0x10);
  return;
}

