
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004584d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar2 = 0;
  DAT_0058f2d8 = 0;
  _DAT_0058f2d4 = 0;
  FUN_00452180(1);
  uVar3 = 0;
  do {
    FUN_00458460(uVar3);
    uVar5 = 0;
    piVar4 = &DAT_006240e8;
    if (DAT_0062c0e8 != 0) {
      do {
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x70) != 0) {
          if (*(short *)(iVar1 + 0x32) != 0) {
            _DAT_0058f2d4 = _DAT_0058f2d4 + 1;
          }
          (**(code **)(iVar1 + 0x70))(iVar1);
          DAT_0058f2d8 = DAT_0058f2d8 + 1;
          uVar2 = uVar2 + 1;
        }
        if (0x40 < uVar2) {
          uVar2 = 0;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 2;
      } while (uVar5 < DAT_0062c0e8);
    }
    if (uVar3 != 0) {
      FUN_004babf0();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

