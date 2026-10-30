
void FUN_0048c4a0(int param_1,uint param_2,char *param_3,char *param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_1 * 0x170;
  *(uint *)(&DAT_0056acb8 + iVar1) = param_2 & 0xff;
  *(undefined4 *)(&DAT_0056acbc + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_0056acc0 + iVar1) = 0;
  _strncpy(&DAT_0056ac54 + iVar1,param_3,0x1f);
  _strncpy(&DAT_0056ac74 + iVar1,param_4,0x1f);
  (&DAT_0056acac)[param_1 * 0x5c] = param_5;
  *(undefined4 *)(&DAT_0056acec + iVar1) = 1;
  return;
}

