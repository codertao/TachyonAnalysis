
/* sweep: neutral.mnu */

char * Starbase_FindMenuFile(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0054e4e0;
  iVar1 = DAT_0054e4e0;
  while( true ) {
    if (iVar1 == -1) {
      return s_neutral_mnu_0054e4e4;
    }
    if (iVar1 == param_1) break;
    iVar1 = puVar2[5];
    puVar2 = puVar2 + 5;
  }
  return (char *)(puVar2 + 1);
}

