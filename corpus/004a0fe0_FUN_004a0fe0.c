
undefined4 FUN_004a0fe0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a0e10(param_1);
  if (iVar1 == -1) {
    DAT_006038b8 = 1;
    return 0xffffffff;
  }
  uVar2 = FUN_004a0ed0(0,2);
  FUN_004a0ec0();
  DAT_006038b8 = 0;
  return uVar2;
}

