
/* enter AVOIDING COLLISION: pick clear direction, steer */

void Ai_AvoidCollision(int param_1)

{
  if ((*(int *)(param_1 + 0xf8) == 0) && (*(int *)(param_1 + 0x104) == 5)) {
    FUN_00401f80(param_1);
  }
  Ai_FindClearDirection(param_1);
  FUN_0040f380(param_1 + 0x34,param_1 + 0x344,param_1 + 0xdc);
  FUN_00402530(param_1);
  return;
}

