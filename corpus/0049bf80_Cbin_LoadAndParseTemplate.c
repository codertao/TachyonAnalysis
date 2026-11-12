
/* sweep */

undefined4 Cbin_LoadAndParseTemplate(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Cbin_LoadFile(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  Cbin_ParseTemplate(param_2,param_3);
  Cbin_Free(param_3);
  return 1;
}

