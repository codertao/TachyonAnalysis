
bool FUN_004043f0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  if (*(short *)(param_2 + 0x76) == 1) {
    return true;
  }
  return (*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 8 + DAT_0058f2e8) &
         *(uint *)((uint)*(byte *)(param_2 + 0xc2) * 0x10 + DAT_0058f2e8)) == 0;
}

