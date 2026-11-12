
/* sweep */

int Course_FindTarget(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_005b3280;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(short *)(iVar1 + 0x76) == 0x18) && (*(int *)(iVar1 + 0xd8) == param_1 + 1)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar1;
}

