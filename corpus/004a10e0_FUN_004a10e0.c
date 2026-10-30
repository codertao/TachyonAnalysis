
undefined4 FUN_004a10e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a0e10(param_1);
  if (iVar1 == -1) {
    if (DAT_00564004 != (code *)0x0) {
      (*DAT_00564004)(param_1,0,0,0);
    }
    DAT_006038b8 = 1;
    return 0xffffffff;
  }
  FUN_004a0ed0(param_3,0);
  uVar2 = FUN_004a0ea0(param_2,param_4);
  FUN_004a0ec0();
  if (DAT_00564004 != (code *)0x0) {
    (*DAT_00564004)(param_1,0,param_4,1);
  }
  DAT_006038b8 = 0;
  return uVar2;
}

