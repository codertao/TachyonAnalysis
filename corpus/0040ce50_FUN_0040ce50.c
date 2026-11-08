
void FUN_0040ce50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_0040c960(*DAT_005b97bc,param_1[1] + 1,param_1[1],*(undefined4 *)(param_2 + 0xdc));
    SrvSend_FactionProgress(*param_1,param_1[3],uVar1);
  }
  return;
}

