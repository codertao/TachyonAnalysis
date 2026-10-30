
void FUN_0045cc50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  piVar1 = (int *)(param_1 + 0x34);
  local_c = *piVar1;
  local_8 = *(undefined4 *)(param_1 + 0x38);
  local_4 = *(undefined4 *)(param_1 + 0x3c);
  iVar2 = FUN_0045cb60(&local_c);
  local_c = DAT_0058f1ac + *piVar1;
  local_4 = *(int *)(param_1 + 0x3c) + DAT_0058f1b4;
  iVar3 = FUN_0045cb60(&local_c);
  if (iVar2 != iVar3) {
    FUN_0045cbd0(param_1,param_2);
    return;
  }
  local_c = DAT_0058f1a0 + *piVar1;
  local_4 = *(int *)(param_1 + 0x3c) + DAT_0058f1a8;
  iVar3 = FUN_0045cb60(&local_c);
  if (iVar2 != iVar3) {
    FUN_0045cbd0(param_1,param_2);
    return;
  }
  local_c = DAT_0058f1a0 + *piVar1;
  local_4 = *(int *)(param_1 + 0x3c) + DAT_0058f1b4;
  iVar3 = FUN_0045cb60(&local_c);
  if (iVar2 != iVar3) {
    FUN_0045cbd0(param_1,param_2);
    return;
  }
  local_c = DAT_0058f1ac + *piVar1;
  local_4 = *(int *)(param_1 + 0x3c) + DAT_0058f1a8;
  iVar3 = FUN_0045cb60(&local_c);
  if (iVar2 != iVar3) {
    FUN_0045cbd0(param_1,param_2);
    return;
  }
  FUN_0045cc20(param_1,param_2);
  return;
}

