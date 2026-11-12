
/* sweep */

void Order_FormatObjective(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Rtxt_GetText(DAT_005a6140,param_2);
  if (iVar1 != 0) {
    uVar2 = Rtxt_GetText(DAT_005a6140,param_2);
    str_sprintf(param_3,uVar2,param_1);
    return;
  }
  str_sprintf(param_3,s_UNKOWN_OBJECTIVE_FOR__s_005486d4,param_1);
  return;
}

