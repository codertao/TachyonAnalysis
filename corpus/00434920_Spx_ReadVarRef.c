
/* {s16 section, s16 key}: var value, or -1 if section == -1 */

short * Spx_ReadVarRef(short *param_1)

{
  if (*param_1 != -1) {
    Var_GetByIndex(DAT_005a6148,(int)*param_1,param_1[1],&param_1);
    return param_1;
  }
  return (short *)0xffffffff;
}

