
/* single int/scalar convenience getter */

void Cbin_GetScalar(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  Cbin_GetField_Ctx(param_1,param_2,param_3,param_4,param_5,&g_CbinCtx);
  return;
}

