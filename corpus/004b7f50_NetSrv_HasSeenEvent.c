
/* refine: event id in the player's ring -> 1 (duplicate filter) */

undefined4 NetSrv_HasSeenEvent(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x7c);
  iVar2 = 0x80;
  do {
    if (*piVar1 == param_1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

