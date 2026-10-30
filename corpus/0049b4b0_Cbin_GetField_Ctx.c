
/* get a key's param into buffer (explicit ctx variant) */

void Cbin_GetField_Ctx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = Cbin_FindSection(param_1,param_6);
  if (iVar1 == 0) {
    return;
  }
  FUN_0049b2e0(param_2,param_3,param_4,param_5,param_6);
  return;
}

