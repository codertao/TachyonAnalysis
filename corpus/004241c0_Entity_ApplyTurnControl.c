
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* turn integrator: advance orientation +0x4c by angular rate (turn magnitude +0x312), honoring
   handling params def+0x84 */

void __cdecl
Entity_ApplyTurnControl
          (int negate,float rate,float *out,ShipFlight *flight,int mode,PowerBlock *power,int damped
          ,float speed)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  if (mode == -1) {
    fVar4 = (float10)Flight_BurnerTopSpeed(flight,speed);
    fVar4 = fVar4 * (float10)power->speedFactor;
    speed = flight->burnerAccel * flight->accel;
    iVar3 = power->burnerEnergy - flight->burnerPowerUse;
    mode = 0x400;
    power->burnerEnergy = iVar3;
    if (iVar3 < 0) {
      power->burnerEnergy = 0;
    }
  }
  else {
    fVar4 = (float10)Flight_CruiseTopSpeed(flight,speed);
    speed = flight->accel;
    fVar4 = fVar4 * (float10)power->speedFactor;
  }
  if (damped != 0) {
    fVar4 = fVar4 * (float10)_DAT_0052e76c;
  }
  fVar2 = (_DAT_0052e59c - flight->drift) * rate;
  fVar4 = (fVar4 / (float10)flight->drift) * (float10)_DAT_0052e6c8 * (float10)mode - (float10)rate;
  fVar1 = fVar2 + speed;
  if (fVar4 <= (float10)fVar1) {
    fVar2 = fVar2 - speed;
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
  if (negate != 0) {
    *out = (float)-fVar4;
    return;
  }
  *out = (float)fVar4;
  return;
}

