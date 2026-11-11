
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int x 163.84 (65536/400): .des MAX_SPEED (HUD units) -> raw/frame */

undefined4 Speed_HudToRaw(int param_1)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND((float)param_1 * _DAT_0052e760);
  return local_8;
}

