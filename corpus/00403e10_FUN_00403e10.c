
void FUN_00403e10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00403cc0(param_1,param_2);
  if (*(int *)(param_2 + 0x54) != -1) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      FUN_00403c60(*(undefined4 *)(param_1 + 0xfc),param_1);
      uVar1 = FUN_00457da0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x54));
      FUN_00402210(param_1,uVar1);
      FUN_00457d70(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x54),
                   *(undefined4 *)(param_1 + 0xfc));
    }
    else {
      uVar1 = FUN_00457da0(*(undefined4 *)(param_1 + 100),*(int *)(param_2 + 0x54));
      FUN_00402210(param_1,uVar1);
    }
  }
  FUN_00436560(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
               param_1 + 0xdc,*(undefined4 *)(param_1 + 100));
  return;
}

