
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* compute throttle/forward-speed setpoint from handling block (ship+0x84) and target */

uint FlightModel_SolveThrottle
               (undefined4 param_1,float param_2,int param_3,int param_4,undefined4 param_5)

{
  float10 fVar1;
  undefined4 local_8;
  
  fVar1 = (float10)Flight_CruiseTopSpeed(param_1,param_5);
  fVar1 = fVar1 * (float10)*(float *)(param_3 + 0x20);
  if (param_4 != 0) {
    fVar1 = fVar1 * (float10)_DAT_0052e76c;
  }
  local_8 = (uint)(longlong)ROUND(((float10)param_2 * (float10)_DAT_0052e768) / fVar1);
  if (0x400 < local_8) {
    local_8 = 0x400;
  }
  return local_8;
}

