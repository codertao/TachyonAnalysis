
/* sweep */

int Starbase_FindDockPart(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(*(int *)(iVar1 + 0xdc) + 0x34) & 0x80) != 0) break;
    iVar1 = *(int *)(iVar1 + 0xe0);
  }
  return iVar1;
}

