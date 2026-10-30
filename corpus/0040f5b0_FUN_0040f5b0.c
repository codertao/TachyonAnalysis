
void FUN_0040f5b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_24 = 0;
  local_20 = 0;
  iVar1 = *DAT_005b95e0;
  DAT_005b9648 = param_2;
  DAT_005b9654 = param_2;
  DAT_005b95e8 = param_2;
  DAT_005b9640 = param_1;
  DAT_005b9644 = param_1;
  DAT_005b964c = param_3;
  DAT_005b9650 = param_4;
  DAT_005b9658 = param_3;
  DAT_005b965c = param_4;
  DAT_005b95ec = param_3;
  DAT_005b95f0 = param_4;
  local_1c = param_1;
  FUN_0052db6a(local_18,param_2,param_3,param_4);
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&local_24,&local_24);
  FUN_0052db6a(local_18,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar1 + 0x54));
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&local_24,&local_24);
  DAT_005b9600 = *(int *)(iVar1 + 0x34) - local_24;
  DAT_005b9604 = *(int *)(iVar1 + 0x38) - local_20;
  DAT_005b9608 = *(int *)(iVar1 + 0x3c) - local_1c;
  FUN_0040f380(&DAT_005b9600,iVar1 + 0x34,&DAT_005b95e8);
  FUN_0040f460(iVar1,&DAT_005b95e8);
  return;
}

