
void FUN_0048cf10(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = DAT_005a67cc;
  uVar4 = DAT_005a67c8;
  uVar3 = DAT_005a67c4;
  uVar2 = DAT_005a67c0;
  uVar9 = 0;
  if ((DAT_0056ab68 < DAT_005b3304) || (DAT_0056ab64 == 0)) {
    DAT_0056ab64 = 0;
    DAT_0056ab74 = 0;
  }
  else if (DAT_0056ab74 != 0) {
    if (((g_FlightStateFlags & 4) != 0) && (DAT_005a6730 == 0)) {
      return;
    }
    FUN_00451fc0(0,0,0x27f,0x1df,1);
    FUN_004add80(&DAT_005a67a0);
    FUN_00452180(1);
    FUN_0041f6e0(DAT_0056ab7c,0,DAT_0056ab70,0x1b8,0x56,0x80,DAT_0056ab78,0,0xffff00,80000,2);
    iVar1 = DAT_0056ab88;
    if (DAT_0056ab74 != 0) {
      piVar8 = DAT_0056ab60 + 1;
      piVar7 = DAT_0056ab60;
      iVar10 = DAT_0056ab70;
      do {
        if (*piVar7 == -1) {
          uVar6 = 0xffffff;
        }
        else {
          uVar6 = FUN_004299a0(*piVar7);
        }
        FUN_0048e970(piVar8,DAT_0056ab78,DAT_0056ab6c,iVar10,uVar6,0xffff,0x10000,2);
        iVar10 = iVar10 + iVar1;
        uVar9 = uVar9 + 1;
        piVar7 = piVar7 + 0x21;
        piVar8 = piVar8 + 0x21;
      } while (uVar9 < DAT_0056ab74);
    }
    FUN_00452070(uVar2,uVar3,uVar4,uVar5,1);
    FUN_004add80(&DAT_005a67a0);
    FUN_004505c0();
    return;
  }
  FUN_004505c0();
  return;
}

