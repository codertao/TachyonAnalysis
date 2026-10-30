
void FUN_00413e40(undefined4 param_1)

{
  int iVar1;
  undefined1 local_c0 [64];
  undefined1 local_80 [128];
  
  FUN_004646f0(param_1,1,local_c0);
  iVar1 = FUN_0048e800(DAT_005a6140,0x65);
  if (iVar1 != 0) {
    str_sprintf(local_80,iVar1,local_c0);
    FUN_0045d9d0(local_80,1);
  }
  return;
}

