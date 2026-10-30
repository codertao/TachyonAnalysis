
void FUN_00469030(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    param_1 = param_1 + 0x20;
    do {
      Var_SetStr(g_PlayerVarStore,param_1 + -0x20,param_1,param_1 + 0x20);
      param_1 = param_1 + 100;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

