
void FUN_00434e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00434f10(param_1,param_3);
  if (DAT_005a6610 == 0) {
    iVar1 = FUN_004348d0(param_1 + 0x3c);
    if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x24) & 8) == 0)) {
      Sped_ConstructEntity(param_1,param_2,param_3,0,0);
    }
  }
  return;
}

