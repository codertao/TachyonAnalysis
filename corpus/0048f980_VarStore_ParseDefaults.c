
/* [tentative] parse template (vars.cfg) */

undefined4 VarStore_ParseDefaults(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0048e380(&DAT_0056aa80,0x18);
  iVar1 = Cbin_Open(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_0056aa90 = param_2;
  DAT_0056aa94 = param_3;
  FUN_0048f530();
  FUN_0048f8c0();
  Cbin_Close();
  return 1;
}

