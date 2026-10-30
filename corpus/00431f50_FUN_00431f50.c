
void FUN_00431f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_005a6a54;
  iVar1 = DAT_005a6a54 * 3;
  DAT_005a6a54 = DAT_005a6a54 + 1;
  FUN_00431f40(&DAT_005a68d4 + iVar1,param_2);
  (&DAT_005a68d4)[iVar1] = param_1;
  (&DAT_005a68dc)[iVar2 * 3] = param_3;
  return;
}

