
/* sweep: PLAYER_CARGO_HOLDS */

void Cargo_GetHoldSize(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != -1) {
    uVar1 = Var_SectionIndex(s_PLAYER_CARGO_HOLDS_00548a18,param_1,1);
    Var_EntryPtr2(DAT_005a6148,uVar1);
  }
  return;
}

