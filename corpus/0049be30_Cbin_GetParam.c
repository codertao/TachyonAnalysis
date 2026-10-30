
/* (key, strOut, strLen, &numOut, type, index1based) on g_CbinCtx; type 1=int 2=float 4=string */

void Cbin_GetParam(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  Cbin_GetParam_Ctx(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&g_CbinCtx);
  return;
}

