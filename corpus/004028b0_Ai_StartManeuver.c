
/* start maneuver table (0x532030 reversal / 0x532060 climb-roll-turn) */

void Ai_StartManeuver(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x32c) == 0) || (*(code **)(param_1 + 0x304) != AiThink_Maneuver)) {
    *(undefined4 *)(param_1 + 0x32c) = param_2;
    *(undefined4 *)(param_1 + 0x330) = param_2;
    *(code **)(param_1 + 0x304) = AiThink_Maneuver;
    Ai_ManeuverStep(param_1);
  }
  return;
}

