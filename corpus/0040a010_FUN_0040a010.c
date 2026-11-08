
void FUN_0040a010(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x34) & 6) == 0) {
      FUN_0041b970(param_1);
      FUN_0041b8b0(param_1);
    }
    *(undefined1 **)(param_1 + 0x68) = &LAB_00409f60;
    uVar1 = global_bad_shift_rng();
    *(uint *)(param_1 + 0xe4) = ((uVar1 >> 4) % 0x32) * 4 + 0x32;
    uVar1 = global_bad_shift_rng();
    *(uint *)(param_1 + 0xf4) = (uVar1 >> 4) % *(uint *)(param_1 + 0xe4);
    if ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x34) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0xe4) = 1;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  return;
}

