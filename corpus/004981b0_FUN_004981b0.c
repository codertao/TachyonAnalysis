
void FUN_004981b0(int param_1)

{
  int *piVar1;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  local_1c = *(int *)(*(int *)(param_1 + 0xd4) + 0x54) * 2 * DAT_006af60c;
  FUN_004b1bb0(local_18,param_1 + 0x4c);
  FUN_004b24d0(&local_24,&local_24);
  piVar1 = (int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x108) = *piVar1;
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x3c);
  *piVar1 = *piVar1 - local_24;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - local_20;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - local_1c;
  return;
}

