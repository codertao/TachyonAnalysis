
undefined4 FUN_004a2f60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a1310(param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_004a32e0();
  if (iVar1 == -1) {
    FUN_004a1220();
    return 0xffffffff;
  }
  if (iVar1 == 0) {
    FUN_004a3370(param_2);
    FUN_004a1220();
    return DAT_00603108;
  }
  FUN_004a33d0(param_2);
  FUN_004a1220();
  return DAT_00603108;
}

