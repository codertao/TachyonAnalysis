
void FUN_00455aa0(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (**(code **)(*(int *)(param_2 + 0x8c) + 0x34))(param_2,5,0);
  if (uVar2 != 0) {
    uVar3 = FUN_0048e440(param_1 + 0x34,param_2 + 0x34);
    if (uVar3 < uVar2) {
      if (*(short *)(param_1 + 0x10a) == 0) {
        *(undefined2 *)(param_1 + 0x10a) = 1;
        uVar1 = (**(code **)(*(int *)(param_2 + 0x8c) + 0x34))(param_2,6,0);
        *(undefined2 *)(param_1 + 0x108) = uVar1;
      }
      *(short *)(param_1 + 0x108) = *(short *)(param_1 + 0x108) + -8;
      if (*(short *)(param_1 + 0x108) < 1) {
        (**(code **)(*(int *)(param_2 + 0x8c) + 0x34))(param_2,7,1);
        *(undefined2 *)(param_1 + 0x10a) = 0;
      }
    }
  }
  return;
}

