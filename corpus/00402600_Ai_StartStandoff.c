
/* sweep */

void Ai_StartStandoff(int param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(code **)(param_1 + 0x304) = AiThink_StandoffPoint;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x400;
  return;
}

