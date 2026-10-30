
void FUN_00451af0(undefined4 *param_1)

{
  if ((DAT_005a6808 == 0) && (DAT_00564ae4 == 0)) {
    FUN_0049e3f0();
    FUN_004a4bd0(*param_1,param_1[1],0,*param_1,param_1[1]);
  }
  else {
    DAT_005a6808 = 1;
    FUN_0049e410();
    FUN_004a4bd0(*param_1,param_1[1],1,*param_1,param_1[1]);
    if (DAT_00564ae4 != 0) {
      FUN_0049fbc0();
      FUN_00451a10();
      return;
    }
  }
  return;
}

