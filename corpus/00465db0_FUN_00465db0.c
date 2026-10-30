
uint FUN_00465db0(int param_1)

{
  float10 fVar1;
  undefined4 local_8;
  
  fVar1 = (float10)FUN_00465d50();
  local_8 = (uint)(longlong)ROUND(fVar1 * (float10)param_1);
  if (DAT_005b2d10 < local_8) {
    local_8 = DAT_005b2d10;
  }
  return local_8;
}

