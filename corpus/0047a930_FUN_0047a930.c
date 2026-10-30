
void FUN_0047a930(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = DAT_00563664;
  iVar2 = DAT_00563660;
  while (DAT_00563678 != 0) {
    iVar1 = *(int *)(DAT_00563678 + 0x40);
    FUN_0049c530(DAT_00563678);
    DAT_00563678 = iVar1;
  }
  DAT_00563678 = 0;
  while (DAT_0056367c != 0) {
    iVar1 = *(int *)(DAT_0056367c + 0x9c);
    FUN_0049c530(DAT_0056367c);
    DAT_0056367c = iVar1;
  }
  FUN_0047a530();
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar5 + 0x6c);
    do {
      if (piVar3 == (int *)0x6c) break;
      iVar5 = 4;
      piVar4 = piVar3;
      do {
        if (*piVar4 != 0) {
          FUN_004acf80(piVar4);
          FUN_0049c530(*piVar4);
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + 0x34;
    } while (iVar2 != 0);
  }
  FUN_0049c530(DAT_00563674);
  DAT_00563674 = 0;
  DAT_00563670 = 0;
  FUN_0049c530(DAT_00563664);
  DAT_00563664 = 0;
  DAT_00563660 = 0;
  FUN_0049c530(DAT_0056366c);
  DAT_0056366c = 0;
  DAT_00563668 = 0;
  FUN_0049c6e0(0xa105);
  FUN_0049c6e0(0xa106);
  DAT_00563688 = 0;
  DAT_0056368c = 0;
  DAT_00571b80 = 0;
  FUN_004acfa0();
  return;
}

