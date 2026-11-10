
/* multi-part/parented entity think (DCB +0x68, installed by 0x412220): optional hook +0x134, steer
   toward +0xec, integrate, staggered engine-audio/collision, Dcb_UpdateChildTransforms */

void Dcb_Think_MultiPart(int param_1)

{
  if (*(int *)(param_1 + 0x174) == 0) {
    if (*(code **)(param_1 + 0x134) != (code *)0x0) {
      (**(code **)(param_1 + 0x134))(param_1);
    }
    Entity_TurnToward(param_1,param_1 + 0xec,*(int *)(param_1 + 0x8c) + 0x84,0);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
  }
  if (((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0x1f) == 0) {
    Dcb_UpdateEngineAudio(param_1,*(undefined4 *)(param_1 + 0xd8));
  }
  if ((((*(uint *)(param_1 + 0x128) ^ DAT_005897e4) & 0xf) == 0) &&
     ((*(byte *)(param_1 + 0x138) & 0x10) != 0)) {
    Power_Regen(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,0x12,1);
  }
  Dcb_SetRangeFlags(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0,param_1);
  Dcb_UpdateChildTransforms(param_1);
  return;
}

