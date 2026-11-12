
/* sweep */

undefined * GameType_GetName(int param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_s_DEFAULT_005483b0;
  puVar2 = PTR_s_DEFAULT_005483b0;
  while( true ) {
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)GameType_FindIndex(s_DEFAULT_0053f920);
      return puVar2;
    }
    if (*(int *)ppuVar1[1] == param_1) break;
    puVar2 = ppuVar1[2];
    ppuVar1 = ppuVar1 + 2;
  }
  return ppuVar1[1];
}

