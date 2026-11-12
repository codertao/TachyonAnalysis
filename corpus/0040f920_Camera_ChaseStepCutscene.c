
/* sweep */

void Camera_ChaseStepCutscene(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  ulonglong local_2c;
  vec3 local_24;
  float local_18 [6];
  
  local_24.x = 0;
  local_24.y = 0;
  iVar1 = 0xc8000;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x30);
  }
  DAT_005b9640 = DAT_005b9640 + (DAT_005b9644 - DAT_005b9640 >> 4);
  DAT_005b9648 = DAT_005b9648 + (DAT_005b9654 * 0x80 + DAT_005b9648 * -0x80 >> 0xb);
  DAT_005b964c = DAT_005b964c + (DAT_005b9658 * 0x80 + DAT_005b964c * -0x80 >> 0xb);
  DAT_005b9650 = DAT_005b9650 + (DAT_005b965c * 0x80 + DAT_005b9650 * -0x80 >> 0xb);
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 0x10) != 0) {
    if (DAT_005b9640 < iVar1) {
      DAT_005b9640 = iVar1;
    }
    if (DAT_005b9644 < iVar1) {
      DAT_005b9644 = iVar1;
    }
  }
  local_24.z = DAT_005b9640;
  call_Math_SinCos3(local_18,DAT_005b9648,DAT_005b964c,DAT_005b9650);
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,&local_24);
  call_Math_SinCos3(local_18,*(int *)(param_1 + 0x4c),*(int *)(param_1 + 0x50),
                    *(int *)(param_1 + 0x54));
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,&local_24);
  if (g_CutsceneActive == 0) {
    iVar5 = ((*(int *)(param_1 + 0xa0) * 7 + *(int *)(param_1 + 0x34)) - DAT_005b9600) - local_24.x;
    iVar1 = ((*(int *)(param_1 + 0xa4) * 7 + *(int *)(param_1 + 0x38)) - DAT_005b9604) - local_24.y;
    iVar3 = ((*(int *)(param_1 + 0xa8) * 7 + *(int *)(param_1 + 0x3c)) - DAT_005b9608) - local_24.z;
  }
  else {
    iVar5 = (*(int *)(param_1 + 0x34) - DAT_005b9600) - local_24.x;
    iVar1 = (*(int *)(param_1 + 0x38) - DAT_005b9604) - local_24.y;
    iVar3 = (*(int *)(param_1 + 0x3c) - DAT_005b9608) - local_24.z;
  }
  DAT_005b9690 = iVar3 >> 3;
  DAT_005b968c = iVar1 >> 3;
  DAT_005b9688 = iVar5 >> 3;
  uVar2 = MathAsm_VecLengthF_Fwd(&DAT_005b9688);
  uVar4 = DAT_005b96b4 + 0x200;
  DAT_005b96b4 = uVar2;
  if (uVar4 < uVar2) {
    local_2c = (ulonglong)uVar4;
    fVar6 = (float10)local_2c;
    local_2c = (ulonglong)uVar2;
    fVar6 = fVar6 / (float10)local_2c;
    local_2c._0_4_ = (int)(longlong)ROUND((float10)DAT_005b9688 * fVar6);
    DAT_005b9688 = (int)local_2c;
    local_2c._0_4_ = (int)(longlong)ROUND((float10)DAT_005b968c * fVar6);
    DAT_005b968c = (int)local_2c;
    local_2c._0_4_ = (int)(longlong)ROUND((float10)DAT_005b9690 * fVar6);
    DAT_005b9690 = (int)local_2c;
    DAT_005b96b4 = uVar4;
  }
  DAT_005b9604 = DAT_005b9604 + DAT_005b968c;
  DAT_005b9600 = DAT_005b9600 + DAT_005b9688;
  DAT_005b9608 = DAT_005b9608 + DAT_005b9690;
  return;
}

