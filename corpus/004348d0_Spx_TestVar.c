
/* {s16 section, s16 key} at p, value at p+4: true if section == -1 or var == value */

undefined4 Spx_TestVar(short *param_1)

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

