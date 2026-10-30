
void FUN_00407e60(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  if ((0 < *(int *)(param_1 + 0xbc)) &&
     (iVar2 = *(int *)(param_1 + 0xbc) - ((uint)(DAT_005653e8 * DAT_005653e0) >> 8),
     *(int *)(param_1 + 0xbc) = iVar2, iVar2 < 1)) {
    lVar1 = (longlong)*(int *)(*(int *)(param_1 + 0x58) + 0x30) * 0x4000;
    FUN_00492ba0(param_1,*(undefined4 *)(param_1 + 100));
    FUN_0045e530(param_1 + 0x34,5,
                 (int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) >> 0xe,0,0,
                 DAT_00565408,0,*(undefined4 *)(param_1 + 100));
    FUN_0045db70(param_1);
    FUN_0045d1c0(param_1,*(int *)(param_1 + 100) + 0x14);
    FUN_00462300(param_1);
    FUN_0041b970(param_1);
  }
  return;
}

