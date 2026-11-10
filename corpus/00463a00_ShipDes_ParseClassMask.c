
/* 'CLASS_A+CLASS_B' -> bitmask via g_AiClassNames */

uint ShipDes_ParseClassMask(char *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  uint uVar5;
  
  uVar5 = 0;
  ppuVar4 = &g_AiClassNames;
  to_uppercase(param_1);
  puVar2 = g_AiClassNames;
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

