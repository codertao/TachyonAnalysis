
/* sweep */

void Slots_CashOut(void)

{
  Player_AddCredits(DAT_0056e000);
  DAT_0056e000 = 0;
  Slots_UpdateCredits();
  return;
}

