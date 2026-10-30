
undefined4 FUN_004620b0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  if (((uVar1 & 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    return 0;
  }
  if (((uVar1 & 0x40) != 0) && (*(int *)(param_1 + 0x13c) != 0)) {
    return 0;
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0048e440(param_1 + 0x110,param_2 + 0x3c);
    if (*(uint *)(param_2 + 0x24) < uVar1) {
      return 0;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  if (((uVar1 & 2) != 0) && (param_1 == *(int *)(param_2 + 0x28))) {
    return 0;
  }
  if (((uVar1 & 4) != 0) && (param_1 != *(int *)(param_2 + 0x28))) {
    return 0;
  }
  if (((uVar1 & 8) != 0) && (*(short *)(param_1 + 0x10c) != *(short *)(param_2 + 0x2c))) {
    return 0;
  }
  if (((uVar1 & 0x10) != 0) && (*(int *)(param_1 + 0x140) != (int)*(short *)(param_2 + 0x2c))) {
    return 0;
  }
  if (((uVar1 & 0x20) != 0) && (*(int *)(*(int *)(param_1 + 200) + 100) != *(int *)(param_2 + 0x30))
     ) {
    return 0;
  }
  return 1;
}

