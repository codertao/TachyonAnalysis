
/* sweep */

void Ai_StartGotoPoint(int param_1)

{
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(code **)(param_1 + 0x304) = AiThink_GotoPoint;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined2 *)(param_1 + 0x312) = 0x300;
  return;
}

