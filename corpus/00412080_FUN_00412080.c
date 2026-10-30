
undefined4 FUN_00412080(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  if (*(short *)(param_2 + 0x76) != 0xb) {
    return 0;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    param_2 = *(uint *)(*(int *)(param_2 + 0x58) + 0x30);
  }
  else {
    lVar1 = (longlong)*(int *)(param_2 + 0x1c) * (longlong)*(int *)(*(int *)(param_2 + 0x58) + 0x30)
    ;
    param_2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  local_8 = 64000;
  uVar3 = (uint)((longlong)(int)param_2 * 64000) >> 0x10 |
          (int)((ulonglong)((longlong)(int)param_2 * 64000) >> 0x20) << 0x10;
  local_14 = *(int *)(param_1 + 0x34) - *(int *)(iVar2 + 0x34);
  local_10 = *(int *)(param_1 + 0x38) - *(int *)(iVar2 + 0x38);
  local_c = *(int *)(param_1 + 0x3c) - *(int *)(iVar2 + 0x3c);
  FUN_004e054e(&local_14);
  local_14 = ((uint)((longlong)local_14 * (longlong)(int)uVar3) >> 0x10 |
             (int)((ulonglong)((longlong)local_14 * (longlong)(int)uVar3) >> 0x20) << 0x10) +
             *(int *)(iVar2 + 0x34);
  local_10 = ((uint)((longlong)local_10 * (longlong)(int)uVar3) >> 0x10 |
             (int)((ulonglong)((longlong)local_10 * (longlong)(int)uVar3) >> 0x20) << 0x10) +
             *(int *)(iVar2 + 0x38);
  local_c = ((uint)((longlong)local_c * (longlong)(int)uVar3) >> 0x10 |
            (int)((ulonglong)((longlong)local_c * (longlong)(int)uVar3) >> 0x20) << 0x10) +
            *(int *)(iVar2 + 0x3c);
  iVar4 = FUN_004b36b0((int *)(iVar2 + 0x34),&local_14,param_1 + 0x18,local_20,0,0);
  if (iVar4 != 0) {
    FUN_0048e380(&DAT_005653c0,0x54);
    DAT_005653e0 = 50000;
    DAT_005653e8 = 0xff;
    DAT_005653e4 = 0xff;
    if (*(code **)(iVar2 + 0x80) != (code *)0x0) {
      (**(code **)(iVar2 + 0x80))(iVar2);
    }
    DAT_005653e0 = 25000;
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1);
    }
  }
  return 1;
}

