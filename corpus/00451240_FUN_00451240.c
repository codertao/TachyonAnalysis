
void FUN_00451240(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004511e0(param_1,&DAT_005b3220);
  if (iVar1 != 0) {
    if (param_2 == 1) {
      *(undefined4 *)(iVar1 + 0x84) = 1;
    }
    else if (param_2 == 2) {
      FUN_00451210(iVar1);
      return;
    }
  }
  return;
}

