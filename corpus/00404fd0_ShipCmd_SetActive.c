
/* sweep: 0 = go dormant (state 0xb), else return to default */

void ShipCmd_SetActive(int param_1,int param_2)

{
  if (param_2 == 0) {
    Ai_SetState(param_1,0xb);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  Ai_ReturnToDefault(param_1);
  return;
}

