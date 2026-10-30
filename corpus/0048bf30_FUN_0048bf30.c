
void FUN_0048bf30(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  piVar1 = &DAT_0056ac3c;
  do {
    if (piVar1[0x33] != 0) {
      if (piVar1[-0x1c] == 0) {
        uVar4 = 0x100;
      }
      else {
        uVar4 = 1;
      }
      FUN_00452180(uVar4);
      if (*piVar1 == 0) {
        FUN_0048bbb0();
      }
      else {
        FUN_0048bdd0(iVar2);
      }
      if (piVar1[0x32] == 0) {
        if ((*piVar1 != 0) || (piVar1[0x31] != 0)) {
          if ((piVar1[0x28] != piVar1[0x27]) && ((piVar1[0x1c] != 0 && (DAT_00559878 != 0)))) {
            if (piVar1[0x30] == 0) {
              piVar3 = piVar1 + 6;
            }
            else {
              piVar3 = piVar1 + 0xe;
            }
            FUN_0049da40(piVar3,piVar1 + 0x1d,piVar1[0x1c]);
          }
          DAT_00559878 = (uint)(DAT_00559878 == 0);
        }
        if (piVar1[0x32] == 0) goto LAB_0048c012;
      }
      if (((code *)piVar1[0x1a] != (code *)0x0) && (piVar1[0x34] == 0)) {
        (*(code *)piVar1[0x1a])(piVar1[0x1b]);
        piVar1[0x34] = 1;
      }
    }
LAB_0048c012:
    piVar1 = piVar1 + 0x5c;
    iVar2 = iVar2 + 1;
    if (0x56c33b < (int)piVar1) {
      FUN_00452150();
      return;
    }
  } while( true );
}

