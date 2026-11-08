
void FUN_00425800(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1[0x12];
  if ((*param_1 & 0x400) != 0) {
    Model_UpdateState(param_1,0,param_2,param_4);
  }
  FUN_00407030(param_1,param_2,param_3,param_4,*(undefined4 *)(uVar1 + 0xd0));
  return;
}

