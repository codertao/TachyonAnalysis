
void FUN_004364e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  FUN_00436470(param_1,param_2,param_3,local_c0);
  iVar1 = FUN_0048e800(DAT_005a6140,param_4);
  if (iVar1 != 0) {
    str_sprintf(local_80,iVar1,local_c0);
    FUN_004c82b6(local_80);
    FUN_0045d900(local_80,1,0,0,0,param_5,0xffffffff);
  }
  return;
}

