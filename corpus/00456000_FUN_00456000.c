
void FUN_00456000(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    FUN_00455fd0(param_1 + 8,param_2 << 0xf);
    FUN_00455fd0(param_1 + 0x10,param_2 << 0xf);
  }
  else {
    if (param_3 == 1) {
      FUN_00455fd0(param_1,param_2 << 0xf);
      FUN_00455e90(param_1,param_4);
      return;
    }
    if (param_3 == 2) {
      FUN_00455fd0(param_1 + 0x18,param_2 << 0xf);
      FUN_00455e90(param_1,param_4);
      return;
    }
  }
  FUN_00455e90(param_1,param_4);
  return;
}

