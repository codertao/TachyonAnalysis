
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bb20(int param_1)

{
  uint uVar1;
  undefined4 local_8;
  
  if (((byte)DAT_005b2154 & 4) != 0) {
    FUN_00428cf0(param_1 + 0x178,DAT_005b20fc,0x20000);
  }
  FUN_00428cf0(param_1 + 0x1cc,DAT_005b20e4,0x20000);
  FUN_00428cf0(param_1 + 0x220,DAT_005b20ec,0x20000);
  local_8 = (undefined4)(longlong)ROUND(_DAT_005b2100 * _DAT_0052e544);
  FUN_00428cf0(param_1 + 0x274,local_8,0x10000);
  uVar1 = DAT_005b1ee0;
  if (0x400 < DAT_005b1ee0) {
    uVar1 = 0x400;
  }
  FUN_00428cf0(param_1 + 0x370,uVar1,0x400);
  if (DAT_005b1b6c != 0) {
    if (DAT_005b1b70 < DAT_005b1b6c) {
      DAT_005b1b6c = DAT_005b1b70;
    }
    FUN_00428cf0(param_1 + 0x3c4,DAT_005b1b6c,DAT_005b1b70);
    FUN_00428cf0(param_1 + 0x418,DAT_005b1b6c,DAT_005b1b70);
    if (*(int *)(param_1 + 0x9b4) != 0) {
      *(uint *)(*(int *)(param_1 + 0x9b4) + 4) =
           (*(int *)(param_1 + 0x9d4) << 8 | *(uint *)(param_1 + 0x9d8)) << 8 |
           *(uint *)(param_1 + 0x9dc);
      FUN_004281f0(*(undefined4 *)(param_1 + 0x9b4),*(undefined4 *)(param_1 + 0x9b8),
                   *(undefined4 *)(param_1 + 0x9bc),0,0xffffffff,*(undefined4 *)(param_1 + 0x9c0),
                   *(undefined4 *)(param_1 + 0x9c4),*(undefined4 *)(param_1 + 0x9c8),
                   *(undefined4 *)(param_1 + 0x9cc));
    }
    if (*(int *)(param_1 + 0x9e0) != 0) {
      *(uint *)(*(int *)(param_1 + 0x9e0) + 4) =
           (*(int *)(param_1 + 0xa00) << 8 | *(uint *)(param_1 + 0xa04)) << 8 |
           *(uint *)(param_1 + 0xa08);
      FUN_004281f0(*(undefined4 *)(param_1 + 0x9e0),*(undefined4 *)(param_1 + 0x9e4),
                   *(undefined4 *)(param_1 + 0x9e8),0,0xffffffff,*(undefined4 *)(param_1 + 0x9ec),
                   *(undefined4 *)(param_1 + 0x9f0),*(undefined4 *)(param_1 + 0x9f4),
                   *(undefined4 *)(param_1 + 0x9f8));
    }
  }
  return;
}

