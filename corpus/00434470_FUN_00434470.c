
char * FUN_00434470(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0053f600;
  iVar1 = DAT_0053f600;
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

