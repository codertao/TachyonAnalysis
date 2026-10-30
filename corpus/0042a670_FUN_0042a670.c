
void FUN_0042a670(int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    return;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x74);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,2);
    return;
  }
  FUN_00429750(*(undefined1 *)(param_1 + 0xc2));
  return;
}

