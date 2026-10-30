
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455090(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [24];
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b3344 == 0)) {
    iVar3 = FUN_00455040();
    if (iVar3 != 0) {
      FUN_0042ddb0(s_HOSTILES_IN_AREA___CANNOT_AUTOPI_005489b4,0xc);
      return;
    }
    iVar3 = FUN_00454fd0();
    if (iVar3 == 0) {
      FUN_0042ddb0(s_CANNOT_AUTOPILOT_TO_DESTINATION_00548994,0xc);
      return;
    }
    if (DAT_005b9050 != 0) {
      FUN_0042ddb0(s_VERIFYING_AUTOPILOT_CODES____PLE_00548968,0xc);
      return;
    }
    uVar1 = *(undefined4 *)(DAT_005b3300 + 0x90);
    *(int *)(DAT_005b3300 + 0x90) = iVar3;
    local_3c = *(int *)(iVar3 + 0x34);
    local_38 = *(int *)(iVar3 + 0x38);
    local_34 = *(int *)(iVar3 + 0x3c);
    pcVar2 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x78);
    if (pcVar2 != (code *)0x0) {
      iVar4 = (*pcVar2)(iVar3,0xb,0);
      if (iVar4 != 0) {
        FUN_004b1bb0(auStack_18,iVar3 + 0x4c);
        FUN_004b24d0(iVar4,&local_30);
      }
    }
    local_3c = local_3c + local_30;
    local_34 = local_34 + local_28;
    local_38 = local_38 + local_2c;
    iVar3 = FUN_004197f0(DAT_005b3300 + 0x34,&local_3c,auStack_24,
                         *(int *)(DAT_005b3300 + 100) + 0x14,DAT_005b3300,iVar3,0,&LAB_00454ee0);
    if (iVar3 != 0) {
      FUN_0042ddb0(s_PATH_TO_GATE_BLOCKED_00548950,0xc);
      *(undefined4 *)(DAT_005b3300 + 0x90) = uVar1;
      return;
    }
    FUN_0040f380(DAT_005b3300 + 0x34,&local_3c,DAT_005b3300 + 0x4c);
    *(undefined4 *)(DAT_005b3300 + 0x54) = 0;
    FUN_004102c0(6);
    FUN_00423e80(DAT_005b3300,_DAT_005b2100 * *(float *)(DAT_005b1f0c + 0xbc));
    _DAT_005b1e98 = 0;
    _DAT_005b1e9c = 0;
    _DAT_005b1ea0 = 0;
    DAT_005b1ebc = 0;
    DAT_005b1ec0 = 0;
    DAT_005b1ec4 = 0;
    *(code **)(DAT_005b3300 + 0x68) = FUN_00454f30;
    *(undefined4 *)(DAT_005b3300 + 0xf8) = 0xfa;
    FUN_004302b0();
  }
  return;
}

