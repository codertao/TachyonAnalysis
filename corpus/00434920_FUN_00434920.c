
short * FUN_00434920(short *param_1)

{
  if (*param_1 != -1) {
    Var_GetByIndex(DAT_005a6148,(int)*param_1,param_1[1],&param_1);
    return param_1;
  }
  return (short *)0xffffffff;
}

