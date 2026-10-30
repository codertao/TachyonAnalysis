
undefined4 FUN_004a3230(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_80 [128];
  
  iVar1 = FUN_004a0d60(param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  FUN_004a2fc0(local_80);
  FUN_004a0ef0(local_80,0x80);
  FUN_004a31e0(param_2);
  FUN_004a3200();
  FUN_004a0ec0();
  return 0;
}

