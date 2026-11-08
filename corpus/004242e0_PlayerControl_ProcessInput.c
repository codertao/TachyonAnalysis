
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* stick/throttle -> control rates: squared (fine-near-center) response, scale by ship response
   (g_PlayerShip+0x88/98/a8), per-axis max-rate clamp (+0x84/94/a4), frame-rate-compensated inertia
   smoothing (g_SmoothRatePYR 0x5b1e98/9c/a0); throttle setpoint g_Throttle 0x5b1ee0; sets ship
   orientation +0x4c directly via rotate (0x48e660) and derives angVel +0xac as the delta (player
   bypasses Entity_TurnToward) */

void PlayerControl_ProcessInput(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_24;
  uint local_20;
  float local_18;
  float local_14;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  local_20 = (uint)(longlong)ROUND((float)DAT_005aeeb8 * _DAT_0052e798);
  iVar5 = (int)(0x400 - local_20) >> 1;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0x400 < iVar5) {
    iVar5 = 0x400;
  }
  DAT_005b1ee0 = 0x400 - iVar5;
  fVar4 = (float)DAT_005aeea0 * (float)DAT_005aeea0 * _DAT_0052e6c8;
  if (DAT_005aeea0 < 0) {
    fVar4 = -fVar4;
  }
  local_24 = (float)DAT_005aeea8 * (float)DAT_005aeea8 * _DAT_0052e6c8;
  if (DAT_005aeea8 < 0) {
    local_24 = -local_24;
  }
  fVar3 = (float)DAT_005aeeb0 * (float)DAT_005aeeb0 * _DAT_0052e6c8;
  if (DAT_005aeeb0 < 0) {
    fVar3 = -fVar3;
  }
  if (DAT_005b8f58 != 0) {
    fVar4 = fVar4 * _DAT_0052e794;
    local_24 = local_24 * _DAT_0052e794;
    fVar3 = fVar3 * _DAT_0052e794;
  }
  local_18 = fVar4 * *(float *)(DAT_005b1f0c + 0x88) * _DAT_0052e6c8;
  local_8 = *(float *)(DAT_005b1f0c + 0x98) * local_24 * _DAT_0052e6c8;
  local_4 = -(*(float *)(DAT_005b1f0c + 0xa8) * fVar3 * _DAT_0052e6c8);
  if (DAT_005b1edc != 0) {
    local_18 = local_18 * _DAT_0052e790;
    local_8 = local_8 * _DAT_0052e790;
    local_4 = local_4 * _DAT_0052e790;
  }
  local_18 = local_18 - _DAT_005b1e98;
  local_14 = local_8 - _DAT_005b1e9c;
  local_4 = local_4 - _DAT_005b1ea0;
  local_20 = (uint)(longlong)ROUND(local_18);
  if ((float)(int)((local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f)) <=
      *(float *)(DAT_005b1f0c + 0x84)) {
    local_18 = local_18 * *(float *)(DAT_005b1f0c + 0x8c);
  }
  else if (local_18 <= *(float *)(DAT_005b1f0c + 0x84)) {
    if (local_18 < -*(float *)(DAT_005b1f0c + 0x84)) {
      local_18 = -*(float *)(DAT_005b1f0c + 0x84);
    }
  }
  else {
    local_18 = *(float *)(DAT_005b1f0c + 0x84);
  }
  local_20 = (uint)(longlong)ROUND(local_14);
  if ((float)(int)((local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f)) <=
      *(float *)(DAT_005b1f0c + 0x94)) {
    local_14 = local_14 * *(float *)(DAT_005b1f0c + 0x9c);
  }
  else if (local_14 <= *(float *)(DAT_005b1f0c + 0x94)) {
    if (local_14 < -*(float *)(DAT_005b1f0c + 0x94)) {
      local_14 = -*(float *)(DAT_005b1f0c + 0x94);
    }
  }
  else {
    local_14 = *(float *)(DAT_005b1f0c + 0x94);
  }
  local_20 = (uint)(longlong)ROUND(local_4);
  if ((float)(int)((local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f)) <=
      *(float *)(DAT_005b1f0c + 0xa4)) {
    local_4 = local_4 * *(float *)(DAT_005b1f0c + 0xac);
  }
  else if (local_4 <= *(float *)(DAT_005b1f0c + 0xa4)) {
    if (local_4 < -*(float *)(DAT_005b1f0c + 0xa4)) {
      local_4 = -*(float *)(DAT_005b1f0c + 0xa4);
    }
  }
  else {
    local_4 = *(float *)(DAT_005b1f0c + 0xa4);
  }
  _DAT_005b1e98 = _DAT_005b1e98 + local_18;
  _DAT_005b1e9c = _DAT_005b1e9c + local_14;
  _DAT_005b1ea0 = _DAT_005b1ea0 + local_4;
  if (GLBL_spacesav[0x3e] == 0) {
    local_20 = (uint)(longlong)
                     ROUND(_DAT_005b1e98 * *(float *)(DAT_005b1f0c + 0xb4) * (float)_DAT_0052e788);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_20;
  }
  if (DAT_005aeed0 != 0) {
    fVar4 = (float)(DAT_00603e4c << 0xc) * _DAT_0052e5d8;
    _DAT_005b1e98 = *(float *)(DAT_005b1f0c + 0x88) * _DAT_0052e780;
    if ((fVar4 <= _DAT_005b1e98) &&
       (fVar3 = *(float *)(DAT_005b1f0c + 0x88) * _DAT_0052e77c, _DAT_005b1e98 = fVar4,
       fVar4 < fVar3)) {
      _DAT_005b1e98 = fVar3;
    }
    if (DAT_005b2b34 == 0) {
      iVar5 = DAT_00603e50 * -0x1000;
    }
    else {
      iVar5 = DAT_00603e50 << 0xc;
    }
    fVar4 = (float)iVar5 * _DAT_0052e5d8;
    _DAT_005b1e9c = *(float *)(DAT_005b1f0c + 0x98) * _DAT_0052e780;
    if ((fVar4 <= _DAT_005b1e9c) &&
       (fVar3 = *(float *)(DAT_005b1f0c + 0x98) * _DAT_0052e77c, _DAT_005b1e9c = fVar4,
       fVar4 < fVar3)) {
      _DAT_005b1e9c = fVar3;
    }
  }
  piVar1 = (int *)(param_1 + 0x4c);
  piVar2 = (int *)(param_1 + 0xac);
  local_20 = (uint)(longlong)ROUND(_DAT_005b1e98 * (float)_DAT_0052e538);
  local_c = local_20;
  local_20 = (uint)(longlong)ROUND(_DAT_005b1e9c * (float)_DAT_0052e538);
  local_8 = (float)local_20;
  local_20 = (uint)(longlong)ROUND(_DAT_005b1ea0 * (float)_DAT_0052e538);
  local_4 = (float)local_20;
  *piVar2 = *piVar1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  Vec_RotateByOrientation(&local_c,piVar1);
  *piVar2 = *piVar1 * 0x80 + *piVar2 * -0x80 >> 7;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0x50) * 0x80 + *(int *)(param_1 + 0xb0) * -0x80 >> 7
  ;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) * 0x80 + *(int *)(param_1 + 0xb4) * -0x80 >> 7
  ;
  fVar4 = (_DAT_005b1e98 - _DAT_005b1eb0) * _DAT_0052e778;
  fVar3 = _DAT_0052e774;
  if ((fVar4 <= _DAT_0052e774) && (fVar3 = fVar4, fVar4 < _DAT_0052e770)) {
    fVar3 = _DAT_0052e770;
  }
  _DAT_005b1eb0 = _DAT_005b1eb0 + fVar3;
  fVar4 = (_DAT_005b1e9c - _DAT_005b1eb4) * _DAT_0052e778;
  fVar3 = _DAT_0052e774;
  if ((fVar4 <= _DAT_0052e774) && (fVar3 = fVar4, fVar4 < _DAT_0052e770)) {
    fVar3 = _DAT_0052e770;
  }
  _DAT_005b1eb4 = _DAT_005b1eb4 + fVar3;
  fVar4 = (_DAT_005b1ea0 - _DAT_005b1eb8) * _DAT_0052e778;
  fVar3 = _DAT_0052e774;
  if ((fVar4 <= _DAT_0052e774) && (fVar3 = fVar4, fVar4 < _DAT_0052e770)) {
    fVar3 = _DAT_0052e770;
  }
  _DAT_005b1eb8 = _DAT_005b1eb8 + fVar3;
  if ((DAT_005b1f00 != 0) && (*(int *)(GLBL_SOME_CONTEXT + 0x90) != 0)) {
    DAT_005b1ee0 = FlightModel_SolveThrottle
                             (DAT_005b1f0c + 0x84,DAT_005b39fc,&DAT_005b20e0,DAT_005b2154 & 0x400,
                              DAT_005b9020);
  }
  return;
}

