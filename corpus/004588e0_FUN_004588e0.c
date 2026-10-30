
void FUN_004588e0(int param_1,int param_2)

{
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_1c = *(int *)(param_1 + 0xd4);
  local_24 = 0;
  local_20 = 0;
  FUN_004b1bb0(local_18,param_1 + 0x4c);
  FUN_004b24d0(&local_24,&local_24);
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + local_24;
  *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + local_20;
  *(int *)(param_2 + 0xa8) = *(int *)(param_2 + 0xa8) + local_1c;
  FUN_0048e590((int *)(param_2 + 0xa0),*(undefined4 *)(param_1 + 0xd4));
  *(undefined4 *)(param_1 + 0xd8) = 8;
  FUN_004666e0(1,0xd,0,param_1,0x10000);
  return;
}

