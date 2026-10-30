
undefined4 FUN_004348d0(short *param_1)

{
  short *psVar1;
  
  psVar1 = param_1;
  if (*param_1 != -1) {
    Var_GetByIndex(DAT_005a6148,(int)*param_1,param_1[1],&param_1);
    if (param_1 != *(short **)(psVar1 + 2)) {
      return 0;
    }
  }
  return 1;
}

