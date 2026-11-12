
/* sweep: HITBY_PLAYER/PLAYER_WATCHOUT... */

int Dialog_LoadCommonLines(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0;
  ppuVar4 = &PTR_s_HITBY_PLAYER_00535220;
  puVar2 = PTR_s_HITBY_PLAYER_00535220;
  while (puVar2 != (undefined *)0x0) {
    iVar3 = Dialog_GetCommonLine(*ppuVar4,0);
    if (iVar3 != 0) {
      iVar5 = iVar5 + 1;
    }
    ppuVar1 = ppuVar4 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar2 = *ppuVar1;
  }
  return iVar5;
}

