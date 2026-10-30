
int FUN_00440d90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_004c67c0(iVar1,param_2);
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x58);
  }
  return iVar1;
}

