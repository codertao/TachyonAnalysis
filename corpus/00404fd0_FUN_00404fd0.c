
void FUN_00404fd0(int param_1,int param_2)

{
  if (param_2 == 0) {
    Ai_SetState(param_1,0xb);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  Ai_ReturnToDefault(param_1);
  return;
}

