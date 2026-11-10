
/* scripted maneuver: wait until within 2 angle units of desired, hold +0x30c frames, next row (end
   = -1) */

void AiThink_Maneuver(int param_1)

{
  int iVar1;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x32c) == 0) {
    Ai_EndManeuver(param_1);
    return;
  }
  iStack_c = *(int *)(param_1 + 0xdc) * 0x80 + *(int *)(param_1 + 0x4c) * -0x80 >> 7;
  iStack_8 = *(int *)(param_1 + 0xe0) * 0x80 + *(int *)(param_1 + 0x50) * -0x80 >> 7;
  iStack_4 = *(int *)(param_1 + 0xe4) * 0x80 + *(int *)(param_1 + 0x54) * -0x80 >> 7;
  iVar1 = call_approx_vec_length(&iStack_c);
  if ((iVar1 < 0x20001) &&
     (iVar1 = *(int *)(param_1 + 0x30c) + -1, *(int *)(param_1 + 0x30c) = iVar1, iVar1 < 1)) {
    iVar1 = *(int *)(param_1 + 0x32c);
    *(int *)(param_1 + 0x32c) = iVar1 + 0x10;
    if (*(int *)(iVar1 + 0x1c) == -1) {
      Ai_EndManeuver();
      return;
    }
    Ai_ManeuverStep(param_1);
  }
  return;
}

