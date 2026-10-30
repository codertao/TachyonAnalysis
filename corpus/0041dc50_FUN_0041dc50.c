
undefined4 FUN_0041dc50(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 4;
  }
  iVar1 = FUN_0041dbb0(param_1,&param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(code **)(iVar1 + 0x48) != (code *)0x0) {
    (**(code **)(iVar1 + 0x48))(iVar1);
    FUN_0041dc20(param_1);
  }
  return 1;
}

