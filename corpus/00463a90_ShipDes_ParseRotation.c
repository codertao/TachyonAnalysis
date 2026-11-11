
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse .des 'rotation' group into class+0x84 (0x9c bytes): per-axis yaw/pitch/roll {ACCEL,
   MAX_RATE, DAMPEN}; scaled MAX_YAW/PITCH/ROLL_RATE -> class+0x90/0xa0/0xb0 (read by
   Entity_TurnToward as param_3+0xc/1c/2c); accel*0052e6d0, rate*0052e544 */

void ShipDes_ParseRotation(float *param_1)

{
  int iVar1;
  ShipFlight *pSVar2;
  float local_8;
  
  clr_bytes(0x562d84,0x9c);
  if ((param_1 != (float *)0x0) &&
     (iVar1 = FUN_0049bfc0(&PTR_g_ShipDesTemplate_flight_yawAccel_00549b78), iVar1 != 0)) {
    local_8 = (float)(longlong)ROUND(g_ShipDesTemplate.flight.maxSpeed);
    iVar1 = Speed_HudToRaw(local_8);
    g_ShipDesTemplate.flight.maxSpeed = (float)iVar1;
    g_ShipDesTemplate.flight.accel =
         g_ShipDesTemplate.flight.maxSpeed / (g_ShipDesTemplate.flight.accel * _DAT_0052e548);
    g_ShipDesTemplate.flight.maxYawRate = g_ShipDesTemplate.flight.maxYawRate * _DAT_0052e6d0;
    g_ShipDesTemplate.flight.maxPitchRate = g_ShipDesTemplate.flight.maxPitchRate * _DAT_0052e6d0;
    g_ShipDesTemplate.flight.maxRollRate = g_ShipDesTemplate.flight.maxRollRate * _DAT_0052e6d0;
    local_8 = (float)(longlong)ROUND(g_ShipDesTemplate.flight.maxYawRate * _DAT_0052e544);
    g_ShipDesTemplate.flight.yawScaled = local_8;
    local_8 = (float)(longlong)ROUND(g_ShipDesTemplate.flight.maxPitchRate * _DAT_0052e544);
    g_ShipDesTemplate.flight.pitchScaled = local_8;
    local_8 = (float)(longlong)ROUND(g_ShipDesTemplate.flight.maxRollRate * _DAT_0052e544);
    g_ShipDesTemplate.flight.rollScaled = local_8;
    g_ShipDesTemplate.flight.yawAccel = g_ShipDesTemplate.flight.yawAccel * _DAT_0052e6d0;
    g_ShipDesTemplate.flight.pitchAccel = g_ShipDesTemplate.flight.pitchAccel * _DAT_0052e6d0;
    g_ShipDesTemplate.flight.rollAccel = g_ShipDesTemplate.flight.rollAccel * _DAT_0052e6d0;
    pSVar2 = &g_ShipDesTemplate.flight;
    for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = pSVar2->yawAccel;
      pSVar2 = (ShipFlight *)&pSVar2->maxYawRate;
      param_1 = param_1 + 1;
    }
  }
  return;
}

