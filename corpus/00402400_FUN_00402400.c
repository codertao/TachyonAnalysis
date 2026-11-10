
void FUN_00402400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  Ai_SetState(param_1,6);
  *(code **)(param_1 + 0x308) = Ai_ApproachTarget;
  return;
}

