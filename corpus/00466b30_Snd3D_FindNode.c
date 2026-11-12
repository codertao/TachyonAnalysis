
/* sweep */

undefined4 Snd3D_FindNode(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_005897a4;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}

