
/* sweep */

void Missile_LoseTargetIf(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x90) == param_2) {
    Ent_CallDescHook7c(param_2,2);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 200) == param_2) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}

