
void FUN_0048c9f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(undefined4 *)(&DAT_0056abbc + param_1 * 0x170) = param_2;
  (&DAT_0056abcc)[param_1 * 0x5c] = param_3;
  if (param_4 == 0) {
    iVar1 = FUN_0048c030();
  }
  else {
    iVar1 = FUN_0048c270(param_1);
  }
  if (iVar1 == 0) {
    FUN_0048b670(param_1);
    (&DAT_0056ad08)[param_1 * 0x5c] = 0;
    return;
  }
  (&DAT_0056ad08)[param_1 * 0x5c] = 1;
  return;
}

