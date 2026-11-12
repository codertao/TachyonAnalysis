
/* sweep: countdown +0x30c then Ai_Wake + chain */

void AiThink_WakeDelay(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x30c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Ai_Wake(param_1);
    if (*(int *)(param_1 + 0xfc) != 0) {
      Ai_ScheduleWakeChain(*(int *)(param_1 + 0xfc));
    }
  }
  return;
}

