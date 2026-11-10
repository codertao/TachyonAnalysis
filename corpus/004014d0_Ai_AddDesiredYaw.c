
/* +0xdc += arg */

void Ai_AddDesiredYaw(int param_1,int param_2)

{
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + param_2;
  return;
}

