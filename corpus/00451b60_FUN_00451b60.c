
undefined4 * FUN_00451b60(undefined4 *param_1)

{
  int iVar1;
  
  while( true ) {
    if (param_1 < &DAT_00548730) {
      return (undefined4 *)0x0;
    }
    iVar1 = (*DAT_00604514)(*param_1,param_1[1],param_1[2],1);
    if (iVar1 == 0) break;
    param_1 = param_1 + -3;
  }
  return param_1;
}

