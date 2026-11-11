
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* turn integrator: advance orientation +0x4c by angular rate (turn magnitude +0x312), honoring
   handling params def+0x84 */

void Entity_ApplyTurnControl
               (int param_1,float param_2,float *param_3,int param_4,int param_5,int param_6,
               int param_7,float param_8)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_5 == -1) {
    fVar4 = (float10)Flight_BurnerTopSpeed(param_4,param_8);
    fVar4 = fVar4 * (float10)*(float *)(param_6 + 0x20);
    param_8 = *(float *)(param_4 + 0x80) * *(float *)(param_4 + 0x34);
    iVar3 = *(int *)(param_6 + 0x18) - *(int *)(param_4 + 0x94);
    param_5 = 0x400;
    *(int *)(param_6 + 0x18) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_6 + 0x18) = 0;
    }
  }
  else {
    fVar4 = (float10)Flight_CruiseTopSpeed(param_4,param_8);
    param_8 = *(float *)(param_4 + 0x34);
    fVar4 = fVar4 * (float10)*(float *)(param_6 + 0x20);
  }
  if (param_7 != 0) {
    fVar4 = fVar4 * (float10)_DAT_0052e76c;
  }
  fVar2 = (_DAT_0052e59c - *(float *)(param_4 + 0x3c)) * param_2;
  fVar4 = (fVar4 / (float10)*(float *)(param_4 + 0x3c)) * (float10)_DAT_0052e6c8 * (float10)param_5
          - (float10)param_2;
  fVar1 = fVar2 + param_8;
  if (fVar4 <= (float10)fVar1) {
    fVar2 = fVar2 - param_8;
    if (fVar4 < (float10)fVar2) {
      fVar4 = (float10)fVar2;
    }
  }
  else {
    fVar4 = (float10)fVar1;
  }
  if (fVar4 < (float10)_DAT_0052e598) {
    fVar4 = (float10)_DAT_0052e598;
  }
  if (param_1 != 0) {
    *param_3 = (float)-fVar4;
    return;
  }
  *param_3 = (float)fVar4;
  return;
}

