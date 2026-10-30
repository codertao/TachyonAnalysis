
void FUN_00408110(int param_1,int param_2)

{
  *(undefined1 **)(param_1 + 0x80) = &LAB_00407f00;
  *(undefined1 **)(param_1 + 0x88) = &LAB_004156a0;
  FUN_0045cda0(param_1,*(int *)(param_1 + 100) + 0x14);
  FUN_004b2950(param_1 + 0x18,0);
  if (*(int *)(param_2 + 0xbc) != 0) {
    *(code **)(param_1 + 0x68) = FUN_00408020;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

