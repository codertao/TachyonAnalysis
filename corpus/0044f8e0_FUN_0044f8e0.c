
undefined * FUN_0044f8e0(char *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  undefined **ppuVar4;
  
  do {
    ppuVar4 = &PTR_s_DEFAULT_005483b0;
    puVar2 = PTR_s_DEFAULT_005483b0;
    while (puVar2 != (undefined *)0x0) {
      iVar3 = str_cmp(*ppuVar4,param_1);
      if (iVar3 == 0) {
        return ppuVar4[1];
      }
      ppuVar1 = ppuVar4 + 2;
      ppuVar4 = ppuVar4 + 2;
      puVar2 = *ppuVar1;
    }
    param_1 = s_DEFAULT_0053f920;
  } while( true );
}

