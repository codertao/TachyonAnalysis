
void FUN_00455f40(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  else {
    if (param_3 == 1) {
      *(undefined4 *)(param_1 + 4) = param_2;
      FUN_00455e90(param_1,param_4);
      return;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      FUN_00455e90(param_1,param_4);
      return;
    }
  }
  FUN_00455e90(param_1,param_4);
  return;
}

