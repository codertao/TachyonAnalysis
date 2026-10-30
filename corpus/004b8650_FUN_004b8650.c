
void FUN_004b8650(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  FUN_004b85c0();
  uVar4 = 0;
  uVar1 = DAT_006af6b0 & DAT_006af674;
  uVar2 = 0;
  piVar3 = DAT_006af660;
  if (DAT_006af788 != 0) {
    do {
      if ((*piVar3 != 0) && (DAT_006af7e0 = piVar3, uVar4 == uVar1)) {
        DAT_006af66c = 0;
        DAT_006af670 = DAT_006af668;
        FUN_004b83e0(piVar3);
        if (*(char *)((int)piVar3 + 0x89) == '\0') {
          if ((char)piVar3[0x22] == '\0') {
            FUN_004b8440(piVar3);
            FUN_004b8520(piVar3);
            FUN_004b8490(piVar3);
          }
          else {
            FUN_004b8390();
          }
        }
        else {
          FUN_004b8410(*(char *)((int)piVar3 + 0x89));
        }
        DAT_006af66c = DAT_006af670 - DAT_006af668;
        if (DAT_006af6f4 <= DAT_006af66c) {
          DAT_006af6f4 = DAT_006af66c;
        }
        FUN_004b8320(piVar3);
        piVar3[0x2f] = piVar3[0x2f] + 1;
      }
      piVar3 = (int *)((int)piVar3 + DAT_006af78c);
      uVar4 = uVar4 + 1 & DAT_006af6b0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_006af788);
  }
  return;
}

