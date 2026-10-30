
void FUN_004115b0(int param_1,int param_2)

{
  if (param_2 == 1) {
    if ((*(uint *)(param_1 + 0x138) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined1 **)(param_1 + 0x134) = &LAB_00411320;
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
      FUN_0048e380(param_1 + 0xac,0xc);
      return;
    }
  }
  else {
    FUN_004114d0(param_1);
  }
  return;
}

