
/* sweep */

undefined4 WingCmd_Issue(uint param_1)

{
  int iVar1;
  
  iVar1 = WingCmd_IsAvailable(param_1);
  if (iVar1 != 0) {
    NetCli_Send2025(param_1 & 0xffff);
    return 1;
  }
  return 0;
}

