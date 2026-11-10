
void FUN_00405580(int param_1)

{
  if (*(int *)(param_1 + 0x104) == 0xb) {
    Ai_SetState(param_1,10);
    *(undefined4 *)(param_1 + 0x30c) = 100;
  }
  return;
}

