
int FUN_0049c120(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [256];
  
  iVar2 = 0;
  while( true ) {
    str_sprintf(local_100,param_1,param_3);
    iVar1 = Cbin_FindSection(local_100,param_2);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    param_3 = param_3 + 1;
  }
  return iVar2;
}

