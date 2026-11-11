
int FUN_00487ad0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      return 1;
    }
    iVar3 = 5;
    if (iVar2 < 5) {
      iVar3 = iVar2;
    }
    piVar1 = (int *)(param_1 + 0x14);
    *piVar1 = *piVar1 - iVar3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    Player_AddCredits(iVar3);
    if (DAT_00563e18 == 0) {
      FUN_0049da00(s_SLOTS_PAYOFF_00558100,&DAT_005833e0,&DAT_00583498);
      DAT_00563e18 = 7;
      return iVar3;
    }
    DAT_00563e18 = DAT_00563e18 + -1;
  }
  return iVar3;
}

