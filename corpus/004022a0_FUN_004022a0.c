
void FUN_004022a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004269b0(param_2 + 0x34,*(undefined4 *)(param_1 + 100),0);
  FUN_004020a0(param_1,param_2);
  local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
  local_18 = 1;
  local_10 = 7;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  FUN_0048ddc0(&local_18,*(undefined4 *)(param_1 + 100));
  uVar1 = FUN_004347b0(param_1,param_2);
  Gate_SpawnSped(uVar1);
  FUN_00402240(param_1);
  return;
}

