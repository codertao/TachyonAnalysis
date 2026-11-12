
/* sweep */

int Srv_CountPlayersOnTeam(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = DAT_006af660;
  for (iVar3 = DAT_005897e0; iVar3 != 0; iVar3 = iVar3 + -1) {
    if ((*piVar2 != 0) && (piVar2[0x50] == param_1)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0x82;
  }
  return iVar1;
}

