
/* count down +0x30c, then Ai_EndManeuver */

void AiThink_Jink(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30c) + -1;
  *(int *)(param_1 + 0x30c) = iVar1;
  if (iVar1 < 1) {
    Ai_EndManeuver(param_1);
  }
  return;
}

