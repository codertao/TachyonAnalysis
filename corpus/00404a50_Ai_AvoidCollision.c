
/* enter AVOIDING COLLISION: pick clear direction, steer */

void Ai_AvoidCollision(int param_1)

{
  if ((*(int *)(param_1 + 0xf8) == 0) && (*(int *)(param_1 + 0x104) == 5)) {
    Ai_RejoinFormation(param_1);
  }
  Ai_FindClearDirection(param_1);
  Vec_DirAngles(param_1 + 0x34,param_1 + 0x344,param_1 + 0xdc);
  Ai_StartGotoPoint(param_1);
  return;
}

