
/* end of evade/maneuver: resume saved think +0x308 or re-acquire / ATTACK / default */

void Ai_EndManeuver(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  if ((pcVar1 != Ai_ApproachTarget) && (pcVar1 != AiThink_Escort)) {
    if (*(int *)(param_1 + 0x90) != 0) {
      Ai_ResumeAttack(param_1);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x334);
    if ((iVar2 != 0) &&
       ((*(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8) &
        *(uint *)((uint)*(byte *)(iVar2 + 0xc2) * 0x10 + DAT_0058f2e8)) != 0)) {
      iVar2 = Ai_TryAssignTarget(param_1,iVar2);
      if (iVar2 != 0) {
        Ai_SetState(param_1,1);
        *(undefined4 *)(param_1 + 0x334) = 0;
        return;
      }
    }
    Ai_ReacquireTarget(param_1);
    return;
  }
  *(code **)(param_1 + 0x304) = pcVar1;
  return;
}

