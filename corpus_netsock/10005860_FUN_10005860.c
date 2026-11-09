
int __cdecl FUN_10005860(char *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_10019860 == 0) {
    return 0x6a;
  }
  uVar1 = (*DAT_100096a8)(param_1,param_2,&DAT_10009854,0x10000);
  iVar2 = (int)uVar1 >> 3;
  if ((uVar1 & 7) != 0) {
    iVar2 = iVar2 + 1;
  }
  if (param_2 + 4U <= iVar2 + 10U) {
    iVar2 = FUN_10005020(param_1,param_2,param_3);
    return iVar2;
  }
  iVar2 = FUN_10005120((char *)&DAT_10009854,iVar2,param_3,1);
  return iVar2;
}

