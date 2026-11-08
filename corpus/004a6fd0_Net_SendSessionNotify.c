
/* send 8-byte msg {u16 0x4001, u32 0x55e400} via transport slot +0x64 */

void Net_SendSessionNotify(undefined4 param_1)

{
  undefined2 local_8 [2];
  undefined4 local_4;
  
  if (DAT_0055e3e0 != 0) {
    local_8[0] = 0x4001;
    local_4 = DAT_0055e400;
    FUN_004a7060(local_8,8,param_1);
  }
  return;
}

