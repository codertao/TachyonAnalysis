
void FUN_0045cda0(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_1;
  FUN_004b2c10((byte *)(param_1 + 0x18),&DAT_0058f1a0,&DAT_0058f1ac);
  if ((*(byte *)(param_1 + 0x18) & 0x10) != 0) {
    puVar1 = (uint *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0xb8);
    param_1 = *puVar1;
    if (iVar5 != 0) {
      lVar3 = (longlong)(int)*puVar1 * (longlong)iVar5;
      param_1 = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
      local_8 = iVar5;
    }
    DAT_0058f1a0 = (uint)((longlong)(int)DAT_0058f1a0 * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1a0 * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
    DAT_0058f1a4 = (uint)((longlong)(int)DAT_0058f1a4 * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1a4 * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
    DAT_0058f1a8 = (uint)((longlong)(int)DAT_0058f1a8 * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1a8 * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
    DAT_0058f1ac = (uint)((longlong)(int)DAT_0058f1ac * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1ac * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
    DAT_0058f1b0 = (uint)((longlong)(int)DAT_0058f1b0 * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1b0 * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
    DAT_0058f1b4 = (uint)((longlong)(int)DAT_0058f1b4 * (longlong)(int)param_1) >> 0x10 |
                   (int)((ulonglong)((longlong)(int)DAT_0058f1b4 * (longlong)(int)param_1) >> 0x20)
                   << 0x10;
  }
  piVar2 = (int *)(iVar4 + 0x34);
  local_14 = *piVar2;
  local_10 = *(undefined4 *)(iVar4 + 0x38);
  local_c = *(undefined4 *)(iVar4 + 0x3c);
  iVar5 = FUN_0045cb10(&local_14);
  local_14 = DAT_0058f1ac + *piVar2;
  local_c = *(int *)(iVar4 + 0x3c) + DAT_0058f1b4;
  iVar6 = FUN_0045cb10(&local_14);
  if (iVar5 != iVar6) {
    FUN_0045cc50(iVar4,param_2);
    return;
  }
  local_14 = DAT_0058f1a0 + *piVar2;
  local_c = *(int *)(iVar4 + 0x3c) + DAT_0058f1a8;
  iVar6 = FUN_0045cb10(&local_14);
  if (iVar5 != iVar6) {
    FUN_0045cc50(iVar4,param_2);
    return;
  }
  local_14 = DAT_0058f1a0 + *piVar2;
  local_c = *(int *)(iVar4 + 0x3c) + DAT_0058f1b4;
  iVar6 = FUN_0045cb10(&local_14);
  if (iVar5 != iVar6) {
    FUN_0045cc50(iVar4,param_2);
    return;
  }
  local_14 = DAT_0058f1ac + *piVar2;
  local_c = *(int *)(iVar4 + 0x3c) + DAT_0058f1a8;
  iVar6 = FUN_0045cb10(&local_14);
  if (iVar5 != iVar6) {
    FUN_0045cc50(iVar4,param_2);
    return;
  }
  FUN_0045cbf0(iVar4,param_2);
  return;
}

