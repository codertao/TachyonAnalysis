
/* refine: asm: advance x to the next tab stop (table 0x4e557c, 80 entries) */

void FontAsm_NextTabStop(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_004e54b8;
  piVar3 = &DAT_004e557c;
  iVar2 = 0x50;
  do {
    if (DAT_004e54b8 < *piVar3) {
      DAT_004e54b8 = *piVar3;
      DAT_004e54a0 = DAT_004e54a0 + (*piVar3 - iVar1);
      return;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

