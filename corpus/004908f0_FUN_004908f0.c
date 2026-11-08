
void FUN_004908f0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_80 [32];
  
  iVar5 = 0;
  if (DAT_00565884 == 0) {
    if (GLBL_spacesav[0x43] == 0) {
      uVar1 = FUN_0048e800(DAT_005a6140,0xf3,DAT_005a6324._2_1_);
      FUN_0048ce30(uVar1);
      FUN_00491330(0);
      return;
    }
    if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0'))
       && (DAT_00565881 != '\0')) {
      if (DAT_0056589c < 0) {
        FUN_00491330(0);
      }
      else {
        piVar3 = &DAT_00565a80 + DAT_0056589c * 0x20;
        piVar2 = local_80;
        iVar4 = 0x20;
        do {
          if (*piVar3 != -1) {
            *piVar2 = *piVar3;
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 1;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar5 != 0) {
          netcomm_PlayerSendAudio(local_80,iVar5);
          DAT_00565884 = 1;
          uVar1 = FUN_0048e800(DAT_005a6140,0xe7,DAT_005a6324._2_1_);
          FUN_0048ce30(uVar1);
          return;
        }
      }
    }
  }
  return;
}

