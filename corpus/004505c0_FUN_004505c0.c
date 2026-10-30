
void FUN_004505c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = DAT_005a67cc;
  uVar4 = DAT_005a67c8;
  uVar3 = DAT_005a67c4;
  uVar2 = DAT_005a67c0;
  if (DAT_0058f4a8 != 0) {
    FUN_00451fc0(0,0,0x27f,0x1df,1);
    FUN_004add80(&DAT_005a67a0);
    FUN_00452180(1);
    FUN_0041f6e0(DAT_0058f4c0,100,DAT_0058f4b0,0x1b8,400,0x80,DAT_0058f4bc,s_MESSAGES_005485a0,
                 0xffff00,0x10000,2);
    iVar1 = DAT_0058f4cc;
    iVar9 = DAT_0058f4b0 + 0x19;
    if (((DAT_0058f4a4 != 0) && (DAT_0058f4b4 != 0)) && (uVar10 = 0, DAT_0058f4b4 != 0)) {
      piVar7 = DAT_0058f4a0 + 1;
      piVar8 = DAT_0058f4a0;
      do {
        if (*piVar8 == -1) {
          uVar6 = 0xffffff;
        }
        else {
          uVar6 = FUN_004299a0(*piVar8);
        }
        FUN_0048e970(piVar7,DAT_0058f4b8,DAT_0058f4ac,iVar9,uVar6,0xffff,0x10000,2);
        iVar9 = iVar9 + iVar1;
        uVar10 = uVar10 + 1;
        piVar8 = piVar8 + 0x21;
        piVar7 = piVar7 + 0x21;
      } while (uVar10 < DAT_0058f4b4);
    }
    FUN_00452070(uVar2,uVar3,uVar4,uVar5,1);
    FUN_004add80(&DAT_005a67a0);
  }
  return;
}

