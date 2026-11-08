
undefined4 FUN_004905e0(uint param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint auStack_200 [128];
  
  bVar1 = false;
  bVar2 = false;
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (((*(code **)(g_ActiveRules + 0x90) != (code *)0x0) && (DAT_00565a34._3_1_ == '\0')) &&
       (iVar4 = (**(code **)(g_ActiveRules + 0x90))(), iVar4 != 0)) {
      bVar1 = true;
      bVar2 = true;
    }
    uVar3 = DAT_005b9014;
    if (param_1 == DAT_00565890) {
      FUN_00491330(0);
      return 1;
    }
    if (param_1 == 0xffffffff) {
      iVar4 = 0;
      uVar5 = 0;
      if (DAT_005b9014 != 0) {
        puVar6 = auStack_200;
        piVar7 = &DAT_005b3a60;
        do {
          if ((((&DAT_005659b4)[uVar5] != '\0') && (uVar5 != DAT_00565890)) &&
             ((!bVar1 || (*piVar7 == DAT_005b3a24)))) {
            *puVar6 = uVar5;
            iVar4 = iVar4 + 1;
            puVar6 = puVar6 + 1;
            (&DAT_005658b4)[uVar5] = 0;
          }
          uVar5 = uVar5 + 1;
          piVar7 = piVar7 + 0x11;
          bVar1 = bVar2;
        } while (uVar5 < uVar3);
      }
      netcomm_MutePlayers(auStack_200,iVar4);
      return 1;
    }
    if ((int)param_1 < 0x81) {
      if (bVar1) {
        if ((&DAT_005b3a60)[param_1 * 0x11] == DAT_005b3a24) {
          netcomm_MutePlayers(&param_1,1);
          (&DAT_005658b4)[param_1] = 0;
          return 1;
        }
      }
      else {
        netcomm_MutePlayers(&param_1,1);
        (&DAT_005658b4)[param_1] = 0;
      }
      return 1;
    }
    FUN_00491330(0);
  }
  return 0;
}

