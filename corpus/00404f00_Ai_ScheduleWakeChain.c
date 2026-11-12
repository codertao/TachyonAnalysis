
/* sweep: dormant (state 0xb) wingmen get 150-tick wake timer */

void Ai_ScheduleWakeChain(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x104);
  while( true ) {
    if (iVar1 == 0xb) {
      *(undefined4 *)(param_1 + 0x30c) = 0x96;
      *(code **)(param_1 + 0x304) = AiThink_WakeDelay;
      return;
    }
    param_1 = *(int *)(param_1 + 0xfc);
    if (param_1 == 0) break;
    iVar1 = *(int *)(param_1 + 0x104);
  }
  return;
}

