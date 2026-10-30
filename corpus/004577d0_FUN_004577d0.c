
void FUN_004577d0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  
  FUN_00445720(param_1,param_3,s_SET_QUADRANT_00548d24);
  *(int *)(param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x138) = 0;
  if (((*(byte *)(*(int *)(*(int *)(param_3 + 0x3c) + 4) + 0x88) & 2) == 0) ||
     ((*(byte *)(param_2 + 0x158) & 0x40) != 0)) {
    bVar1 = g_FlightStateFlags & 4;
    *(undefined4 *)(param_2 + 0x15c) = 0xea60000;
    if (bVar1 == 0) {
      *(undefined4 *)(param_2 + 0x160) = 0x27100000;
    }
    else {
      *(undefined4 *)(param_2 + 0x160) = 0x13880000;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x15c) = 0xbb80000;
    *(undefined4 *)(param_2 + 0x160) = 0xbb80000;
  }
  if ((g_FlightStateFlags & 4) != 0) {
    FUN_00457790(DAT_005a5dcc,*(undefined4 *)(param_3 + 0x30));
  }
  return;
}

