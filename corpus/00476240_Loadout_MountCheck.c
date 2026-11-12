
/* weapons tab: Mount_Accepts; hardware tab: 1 = blocked (null, already installed, or listed) */

undefined4 Loadout_MountCheck(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (g_CfgMode == 1) {
    if ((param_2 == 0) || (param_1 == 0)) {
      return 1;
    }
    iVar1 = Loadout_HwAlreadyInstalled(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  piVar2 = (int *)(param_2 + 0x1e0);
  do {
    if (*piVar2 == 0) {
      return 0;
    }
    iVar1 = __stricmp(*piVar2,param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (*piVar2 == param_1) {
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x12;
  } while (uVar3 < 0x20);
  return 0;
}

