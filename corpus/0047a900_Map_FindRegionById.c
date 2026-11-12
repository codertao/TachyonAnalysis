
/* sweep: guess */

int Map_FindRegionById(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0056367c;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_1 == *(int *)(iVar1 + 0x8c)) && (param_2 == *(int *)(iVar1 + 0x88))) break;
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return iVar1;
}

