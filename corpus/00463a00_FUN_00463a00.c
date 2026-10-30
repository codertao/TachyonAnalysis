
uint FUN_00463a00(char *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  uVar5 = 0;
  ppuVar4 = &PTR_s_CLASS_FIGHTER_00549e30;
  FUN_004c82b6(param_1);
  puVar2 = PTR_s_CLASS_FIGHTER_00549e30;
  while (puVar2 != (undefined *)0x0) {
    pcVar3 = _strstr(param_1,*ppuVar4);
    if (pcVar3 != (char *)0x0) {
      uVar5 = uVar5 | (uint)ppuVar4[1];
    }
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 2;
    puVar2 = *ppuVar1;
  }
  return uVar5;
}

