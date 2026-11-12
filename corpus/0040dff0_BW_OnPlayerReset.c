
/* sweep */

void BW_OnPlayerReset(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (iVar1 != 0) {
    clr_bytes(iVar1 + 0xe0,0x28);
    *(undefined4 *)(iVar1 + 0xfc) = 1;
  }
  BW_RespawnPlayer(param_1,param_2);
  return;
}

