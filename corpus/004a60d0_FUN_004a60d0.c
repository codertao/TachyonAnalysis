
void FUN_004a60d0(void)

{
  MMRESULT MVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  tagMIXERCAPSA *ptVar5;
  tagMIXERLINEA *ptVar6;
  tagMIXERLINECONTROLSA *ptVar7;
  HMIXEROBJ local_18c;
  DWORD local_188;
  tagMIXERLINECONTROLSA local_184;
  tagMIXERCAPSA local_16c;
  tagMIXERLINEA local_13c;
  tagMIXERCONTROLA local_94;
  
  if (DAT_0056489c == 0) {
    ptVar5 = &local_16c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar5->wMid = 0;
      ptVar5->wPid = 0;
      ptVar5 = (tagMIXERCAPSA *)&ptVar5->vDriverVersion;
    }
    MVar1 = mixerGetDevCapsA(0,&local_16c,0x30);
    if ((MVar1 == 0) && (MVar1 = mixerOpen((LPHMIXER)&local_18c,0,0,0,0), MVar1 == 0)) {
      DVar3 = 0;
      if (0 < (int)local_16c.cDestinations) {
LAB_004a6136:
        ptVar6 = &local_13c;
        for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
          ptVar6->cbStruct = 0;
          ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
        }
        local_13c.cbStruct = 0xa8;
        local_13c.dwDestination = DVar3;
        MVar1 = mixerGetLineInfoA(local_18c,&local_13c,0);
        if (MVar1 == 0) {
          if (local_13c.dwComponentType != 4) goto LAB_004a61be;
          DVar4 = 0;
          local_188 = local_13c.cConnections;
          if ((int)local_13c.cConnections < 1) goto LAB_004a61be;
LAB_004a6178:
          ptVar6 = &local_13c;
          for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
            ptVar6->cbStruct = 0;
            ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
          }
          local_13c.cbStruct = 0xa8;
          local_13c.dwDestination = DVar3;
          local_13c.dwSource = DVar4;
          MVar1 = mixerGetLineInfoA(local_18c,&local_13c,1);
          if (MVar1 != 0) goto LAB_004a6245;
          if (local_13c.dwComponentType != 0x1004) goto code_r0x004a61b5;
          ptVar7 = &local_184;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            ptVar7->cbStruct = 0;
            ptVar7 = (tagMIXERLINECONTROLSA *)&ptVar7->dwLineID;
          }
          local_184.dwLineID = local_13c.dwLineID;
          local_184.pamxctrl = &local_94;
          local_184.cbStruct = 0x18;
          local_184.u.dwControlID = 0x50030001;
          local_184.cControls = 1;
          local_184.cbmxctrl = 0x94;
          MVar1 = mixerGetLineControlsA(local_18c,&local_184,2);
          if (MVar1 != 0) goto LAB_004a61cb;
          if ((local_94.fdwControl & 0x80000000) != 0) {
LAB_004a6245:
            mixerClose((HMIXER)local_18c);
            return;
          }
          if ((local_94.dwControlType & 0xf0000000) == 0x50000000) {
            DAT_0056489c = 1;
            DAT_00601e80 = local_94.dwControlID;
            DAT_00601e7c = local_18c;
            return;
          }
        }
      }
LAB_004a61cb:
      mixerClose((HMIXER)local_18c);
    }
  }
  return;
code_r0x004a61b5:
  DVar4 = DVar4 + 1;
  if ((int)local_188 <= (int)DVar4) goto LAB_004a61be;
  goto LAB_004a6178;
LAB_004a61be:
  DVar3 = DVar3 + 1;
  if ((int)local_16c.cDestinations <= (int)DVar3) goto LAB_004a61cb;
  goto LAB_004a6136;
}

