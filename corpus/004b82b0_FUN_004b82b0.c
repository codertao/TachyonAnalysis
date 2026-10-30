
uint FUN_004b82b0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_006af6fc;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    uVar2 = uVar2 + iVar1;
  } while ((int)piVar3 < 0x6af77c);
  return uVar2 >> 5;
}

