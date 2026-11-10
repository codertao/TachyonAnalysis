
/* target lost: find new target -> ATTACK, else default */

void Ai_ReacquireTarget(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar1 = Ai_FindTarget(param_1);
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 == 0) {
      Ai_ReturnToDefault(param_1);
      return;
    }
    *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + 1;
  }
  Ai_SetState(param_1,1);
  return;
}

