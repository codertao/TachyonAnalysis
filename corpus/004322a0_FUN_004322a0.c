
void FUN_004322a0(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_8 [8];
  
  iVar2 = 0;
  iVar4 = 0x90;
  if (0 < DAT_005a73dc) {
    piVar1 = &DAT_005a6aa4;
    do {
      if (iVar2 == DAT_005a73e0) {
        pcVar3 = FUN_0040c840 + (-(uint)(*piVar1 != 0) & 0x3700);
      }
      else {
        pcVar3 = (code *)((-(uint)(*piVar1 != 0) & 0x7f7f7f) + 0x808080);
      }
      FUN_0048e970(piVar1 + -0x12,DAT_005a68c0,0xf8,iVar4,pcVar3,0xffff,0x10000,2);
      str_sprintf(local_8,&DAT_00535eb8,piVar1[-1]);
      FUN_0048e970(local_8,DAT_005a68c0,0x1b2,iVar4,pcVar3,0xffff,0x10000,10);
      iVar4 = iVar4 + DAT_005a68d0;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x13;
    } while (iVar2 < DAT_005a73dc);
  }
  return;
}

