
undefined * FUN_0044f780(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  
  puVar2 = &DAT_0059023c;
  uVar4 = 0;
  pcVar3 = &DAT_00590258;
  do {
    if (*pcVar3 != '\0') {
      iVar1 = str_cmp(pcVar3,param_1);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 0x2c;
    pcVar3 = pcVar3 + 0x2c;
  } while (uVar4 < 0x40);
  return (undefined *)0x0;
}

