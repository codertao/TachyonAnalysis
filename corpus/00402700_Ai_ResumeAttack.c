
/* target is capship/starbase/turret -> standoff run, else ATTACK state */

void Ai_ResumeAttack(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x90) + 0xd0) & 0x1c) != 0) {
    Ai_PickStandoffPoint(param_1);
    return;
  }
  Ai_SetState(param_1,1);
  return;
}

