
void FUN_0040f510(int param_1)

{
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = -0x400000;
  local_20 = 0x800000;
  local_1c = 0x800000;
  if (param_1 != 0) {
    FUN_0052db6a(local_18,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                 *(undefined4 *)(param_1 + 0x54));
    FUN_0052dbcd(local_18);
    FUN_004b24d0(&local_24,&local_24);
    DAT_005b9600 = *(int *)(param_1 + 0x34) + local_24;
    DAT_005b9604 = *(int *)(param_1 + 0x38) + local_20;
    DAT_005b9608 = *(int *)(param_1 + 0x3c) + local_1c;
    FUN_0040f380(&DAT_005b9600,param_1 + 0x34,&DAT_005b95e8);
    FUN_0040f460(param_1,&DAT_005b95e8);
  }
  return;
}

