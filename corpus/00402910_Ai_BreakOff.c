
/* evade: 1/4 reversal, 1/4 climb-roll-turn, 1/2 random jink for (rand%400 + arg*50) *
   g_AiSkillJinkScale[skill] frames */

void Ai_BreakOff(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  if (*(int *)(param_1 + 0x104) != 0xb) {
    if ((*(int *)(param_1 + 0xf8) == 0) && (*(int *)(param_1 + 0x104) == 5)) {
      Ai_RejoinFormation(param_1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0x100) != 0) {
      FUN_004014a0(param_1);
    }
    uVar3 = global_bad_shift_rng();
    if ((uVar3 & 3) == 0) {
      Ai_StartManeuver(param_1,&g_AiManeuverReverse);
      return;
    }
    if ((uVar3 & 3) == 1) {
      Ai_StartManeuver(param_1,&g_AiManeuverClimbRollTurn);
      return;
    }
    uVar3 = global_bad_shift_rng();
    iVar1 = uVar3 % 400 + param_2 * 0x32;
    *(int *)(param_1 + 0x30c) = iVar1;
    lVar2 = (longlong)iVar1 *
            (longlong)*(int *)(&g_AiSkillJinkScale + (uint)*(ushort *)(param_1 + 0x310) * 4);
    *(uint *)(param_1 + 0x30c) = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    *(code **)(param_1 + 0x304) = AiThink_Jink;
    uVar3 = global_bad_shift_rng();
    Ai_AddDesiredYaw(param_1,uVar3 & 0x1ffffff);
    uVar3 = global_bad_shift_rng();
    Ai_AddDesiredPitch(param_1,uVar3 & 0x1ffffff);
  }
  return;
}

