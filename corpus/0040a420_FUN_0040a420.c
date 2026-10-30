
void FUN_0040a420(int param_1,int param_2)

{
  if (param_1 != 0) {
    while (*(int *)(*(int *)(param_1 + 0xdc) + 0x44) != param_2) {
      param_1 = *(int *)(param_1 + 0xe0);
      if (param_1 == 0) {
        return;
      }
    }
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1);
    }
  }
  return;
}

