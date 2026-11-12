
/* sweep: guess */

bool MpRules_IsGameTypeValid(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Cbin_LoadAndParseTemplate_Global(param_1,&PTR_DAT_00548350);
  return iVar1 != 0;
}

