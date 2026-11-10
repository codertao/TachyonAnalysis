
/* POWER_INC_*_CHARGE: step a rate by 0.5 (shields: both pool rates) */

void Power_CycleRate(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    Power_StepRate(param_1 + 8,param_2 << 0xf);
    Power_StepRate(param_1 + 0x10,param_2 << 0xf);
  }
  else {
    if (param_3 == 1) {
      Power_StepRate(param_1,param_2 << 0xf);
      Power_UpdateSpeedFactor(param_1,param_4);
      return;
    }
    if (param_3 == 2) {
      Power_StepRate(param_1 + 0x18,param_2 << 0xf);
      Power_UpdateSpeedFactor(param_1,param_4);
      return;
    }
  }
  Power_UpdateSpeedFactor(param_1,param_4);
  return;
}

