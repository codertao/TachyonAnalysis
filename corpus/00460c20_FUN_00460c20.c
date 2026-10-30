
void FUN_00460c20(int param_1)

{
  uint *puVar1;
  
  if ((((0 < *(int *)(param_1 + 0x140)) && ((*(byte *)(*(int *)(param_1 + 0xdc) + 0x158) & 8) == 0))
      && ((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x3c) + 4) + 0x88) & 1) != 0)) &&
     (puVar1 = (uint *)(*(int *)(param_1 + 0xdc) + 0x1c4), *puVar1 = *puVar1 | 2,
     ((*(uint *)(param_1 + 0x10c) ^ DAT_005897e4) & 0xf) == 0)) {
    FUN_004191f0(param_1 + 0x11c,*(int *)(param_1 + 0x8c) + 0xd0,0x96,0x96,0xff,0xff,0);
    if (*(int *)(param_1 + 0x140) < 1) {
      FUN_0045fc30(param_1);
    }
  }
  return;
}

