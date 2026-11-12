
/* sweep: guess */

int Map_FindRegion(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0056367c;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = __stricmp(iVar1 + 0x40,param_1);
    if ((iVar2 == 0) && (iVar2 = __stricmp(iVar1,param_2), iVar2 == 0)) break;
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return iVar1;
}

