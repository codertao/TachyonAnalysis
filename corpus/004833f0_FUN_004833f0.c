
void FUN_004833f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  FUN_00452180(1);
  uVar4 = DAT_0060446c;
  uVar3 = DAT_00604468;
  uVar2 = DAT_00604464;
  uVar1 = DAT_00604460;
  piVar6 = &DAT_0056f584;
  iVar5 = 5;
  do {
    if ((piVar6[-0x14] != 0) && (*piVar6 != 0)) {
      FUN_00452150();
      FUN_00451fc0(piVar6[-0x18],piVar6[-0x17],piVar6[-0x16],piVar6[-0x15],1);
      FUN_004add80(&DAT_005a67a0);
      if (DAT_00564ae4 == 0) {
        FUN_00452100();
      }
      FUN_004b19a0(piVar6 + -0x13);
      FUN_004b1ab0(piVar6 + -0x13,DAT_00564ae4 == 0);
    }
    piVar6 = piVar6 + 0x52;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00452150();
  FUN_00452070(uVar1,uVar2,uVar3,uVar4,1);
  FUN_004add80(&DAT_005a67a0);
  return;
}

