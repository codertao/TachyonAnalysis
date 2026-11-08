
/* Sped action id -> name (g_SpedActionNames) */

char * Sped_ActionName(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_SpedActionNames;
  iVar1 = g_SpedActionNames;
  while( true ) {
    if (iVar1 == -1) {
      return s_UNKOWN_ACTION_0053f8d8;
    }
    if (iVar1 == param_1) break;
    iVar1 = puVar2[2];
    puVar2 = puVar2 + 2;
  }
  return (char *)puVar2[1];
}

