
void FUN_00434a00(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar1 = FUN_00457ca0(*(undefined4 *)(param_1 + 100),param_3);
  *(undefined2 *)(param_2 + 0x18) = uVar1;
  return;
}

