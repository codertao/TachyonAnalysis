
/* sweep: guess */

void Conn_ResetStats(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = param_2;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  DVar1 = GetTickCount();
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(DWORD *)(param_1 + 0x1fc) = DVar1;
  return;
}

