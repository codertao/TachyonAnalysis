
/* core: find section then fetch param */

void Cbin_GetParam_Ctx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = Cbin_FindSection(param_1,param_8);
  if (iVar1 == 0) {
    return;
  }
  Cbin_FindParam(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

