
/* sweep: guess */

char * MusicVar_FindName(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005485b0;
  iVar1 = DAT_005485b0;
  while( true ) {
    if (iVar1 == -1) {
      return s_NOT_USED_0054865c;
    }
    if (iVar1 == param_1) break;
    iVar1 = puVar2[2];
    puVar2 = puVar2 + 2;
  }
  return (char *)puVar2[1];
}

