
int FUN_004a4bd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  DAT_006022f4 = param_3;
  iVar1 = FUN_004a44c0(param_1,param_2,param_4,param_5);
  if ((((iVar1 == -1) && (param_1 == 0x140)) && (DAT_006022f4 == 0)) && (DAT_00602324 != 0)) {
    iVar1 = FUN_004a44c0(0x280,0x1e0,param_4,param_5);
    FUN_004a4e00();
  }
  return iVar1;
}

