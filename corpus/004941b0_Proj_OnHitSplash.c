
/* def+0x98 (some missiles/mines): become stationary blast, SrvSend_MinePlaced */

void Proj_OnHitSplash(int param_1)

{
  *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc3) | 1;
  *(code **)(param_1 + 0x6c) = FUN_00493ec0;
  FUN_00494160(param_1);
  SrvSend_MinePlaced(param_1 + 0x34,**(undefined4 **)(param_1 + 0xdc),0x2710000,
                     *(undefined4 *)(param_1 + 100));
  return;
}

