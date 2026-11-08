
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455090(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  vec3 *fvec;
  int local_3c;
  int local_38;
  int local_34;
  vec3 local_30;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [24];
  
  local_30.x = 0;
  local_30.y = 0;
  local_30.z = 0;
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b3344 == 0)) {
    iVar3 = FUN_00455040();
    if (iVar3 != 0) {
      maybe_log_something(s_HOSTILES_IN_AREA___CANNOT_AUTOPI_005489b4,0xc);
      return;
    }
    iVar3 = FUN_00454fd0();
    if (iVar3 == 0) {
      maybe_log_something(s_CANNOT_AUTOPILOT_TO_DESTINATION_00548994,0xc);
      return;
    }
    if (DAT_005b9050 != 0) {
      maybe_log_something(s_VERIFYING_AUTOPILOT_CODES____PLE_00548968,0xc);
      return;
    }
    uVar1 = *(undefined4 *)(GLBL_SOME_CONTEXT + 0x90);
    *(int *)(GLBL_SOME_CONTEXT + 0x90) = iVar3;
    local_3c = *(int *)(iVar3 + 0x34);
    local_38 = *(int *)(iVar3 + 0x38);
    local_34 = *(int *)(iVar3 + 0x3c);
    pcVar2 = *(code **)(*(int *)(iVar3 + 0x8c) + 0x78);
    if (pcVar2 != (code *)0x0) {
      fvec = (vec3 *)(*pcVar2)(iVar3,0xb,0);
      if (fvec != (vec3 *)0x0) {
        FUN_004b1bb0(auStack_18,(vec3 *)(iVar3 + 0x4c));
        some_rotate_by_global(fvec,&local_30);
      }
    }
    local_3c = local_3c + local_30.x;
    local_34 = local_34 + local_30.z;
    local_38 = local_38 + local_30.y;
    iVar3 = FUN_004197f0(GLBL_SOME_CONTEXT + 0x34,&local_3c,auStack_24,
                         *(int *)(GLBL_SOME_CONTEXT + 100) + 0x14,GLBL_SOME_CONTEXT,iVar3,0,
                         &LAB_00454ee0);
    if (iVar3 != 0) {
      maybe_log_something(s_PATH_TO_GATE_BLOCKED_00548950,0xc);
      *(undefined4 *)(GLBL_SOME_CONTEXT + 0x90) = uVar1;
      return;
    }
    FUN_0040f380(GLBL_SOME_CONTEXT + 0x34,&local_3c,GLBL_SOME_CONTEXT + 0x4c);
    *(undefined4 *)(GLBL_SOME_CONTEXT + 0x54) = 0;
    FUN_004102c0(6);
    FUN_00423e80(GLBL_SOME_CONTEXT,_DAT_005b2100 * *(float *)(DAT_005b1f0c + 0xbc));
    _DAT_005b1e98 = 0;
    _DAT_005b1e9c = 0;
    _DAT_005b1ea0 = 0;
    DAT_005b1ebc = 0;
    DAT_005b1ec0 = 0;
    DAT_005b1ec4 = 0;
    *(code **)(GLBL_SOME_CONTEXT + 0x68) = FUN_00454f30;
    *(undefined4 *)(GLBL_SOME_CONTEXT + 0xf8) = 0xfa;
    FUN_004302b0();
  }
  return;
}

