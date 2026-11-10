
/* +0xe0 += arg */

void Ai_AddDesiredPitch(int param_1,int param_2)

{
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + param_2;
  return;
}

