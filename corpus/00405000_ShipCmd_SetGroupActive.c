
/* sweep: like ShipCmd_SetActive but wakes the wingman chain */

void ShipCmd_SetGroupActive(int param_1,int param_2)

{
  if (param_2 == 0) {
    Ai_SetState(param_1,0xb);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  Ai_Wake(param_1);
  if (*(int *)(param_1 + 0xfc) != 0) {
    Ai_ScheduleWakeChain(*(int *)(param_1 + 0xfc));
  }
  return;
}

