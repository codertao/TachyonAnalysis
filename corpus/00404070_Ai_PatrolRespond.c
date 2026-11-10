
/* player hit a ship not hostile to the player: first idle AI ship with .des STAR_PATROL set attacks
   the player */

undefined4 Ai_PatrolRespond(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)((uint)*(byte *)(param_2 + 0xc2) * 0x10 + DAT_0058f2e8) &
      *(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + 4 + DAT_0058f2e8)) == 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x24); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x9c)) {
      if ((((*(short *)(iVar1 + 0x76) == 2) && (*(int *)(iVar1 + 0x90) == 0)) && (iVar1 != param_1))
         && (*(int *)(*(int *)(iVar1 + 0x8c) + 0x560) != 0)) {
        *(int *)(iVar1 + 0x90) = param_2;
        Ai_SetState(iVar1,1);
        *(short *)(param_2 + 200) = *(short *)(param_2 + 200) + 1;
        return 1;
      }
    }
  }
  return 0;
}

