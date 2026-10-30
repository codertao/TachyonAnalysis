
void FUN_00403eb0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00403cc0(param_1,param_2);
  if (*(int *)(param_2 + 0x54) != -1) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      FUN_00403c60(*(undefined4 *)(param_1 + 0xfc),param_1);
      FUN_00457d70(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x54),
                   *(undefined4 *)(param_1 + 0xfc));
      return;
    }
    uVar1 = FUN_00457da0(*(undefined4 *)(param_1 + 100),*(int *)(param_2 + 0x54));
    FUN_00402210(param_1,uVar1);
  }
  return;
}

