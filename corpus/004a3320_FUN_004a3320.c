
undefined4 FUN_004a3320(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a1310(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = FUN_004a32e0();
  if (iVar1 == -1) {
    FUN_004a1220();
    return 0;
  }
  if (iVar1 == 0) {
    FUN_004a3430();
    return DAT_00603108;
  }
  FUN_004a3790();
  return DAT_00603108;
}

