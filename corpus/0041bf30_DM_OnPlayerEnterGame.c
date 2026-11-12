
/* sweep */

void DM_OnPlayerEnterGame(int param_1)

{
  if (*(int *)(param_1 + 200) != 0) {
    Ship_InitPower(*(int *)(param_1 + 200));
  }
  return;
}

