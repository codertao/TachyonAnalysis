
/* sweep */

void Slots_Payoff(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = Slots_CalcPayoff(&DAT_0056e2b8);
  iVar2 = Slots_CalcPayoff(&DAT_0056e2d8);
  iVar3 = Slots_CalcPayoff(&DAT_0056e2f8);
  if (iVar3 != 0 || (iVar1 != 0 || iVar2 != 0)) {
    Slots_UpdateCredits();
    return;
  }
  return;
}

