
int FUN_00492b60(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*(short *)(iVar1 + 0x76) == 3) && (*(int *)(*(int *)(iVar1 + 0xdc) + 4) == 8)) &&
       (*(int *)(iVar1 + 0xf4) == param_2)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar1;
}

