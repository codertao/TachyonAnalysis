
bool FUN_00418730(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = FUN_0048e440(param_1,param_2 + 0x34);
  if (0x1388000 < uVar2) {
    return false;
  }
  if (param_3 == 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x58) + 0x30);
  }
  else {
    lVar1 = (longlong)*(int *)(*(int *)(param_2 + 0x58) + 0x30) * (longlong)param_3;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  if ((*(byte *)(param_2 + 0x18) & 0x10) != 0) {
    lVar1 = (longlong)(int)uVar2 * (longlong)*(int *)(param_2 + 0x1c);
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  local_10 = *param_1 - *(int *)(param_2 + 0x34);
  local_c = param_1[1] - *(int *)(param_2 + 0x38);
  local_8 = param_1[2] - *(int *)(param_2 + 0x3c);
  uVar3 = FUN_004e0462(&local_10);
  return uVar3 <= uVar2;
}

