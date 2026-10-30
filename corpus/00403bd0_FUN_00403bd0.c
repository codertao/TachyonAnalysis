
void FUN_00403bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  bVar1 = FUN_0048e350();
  if ((bVar1 & 0xf) < 5) {
    FUN_0045e530(param_1,3,1,0,0,0,param_2,param_3);
    return;
  }
  FUN_0045e530(param_1,3,0,0,0,0,param_2,param_3);
  return;
}

