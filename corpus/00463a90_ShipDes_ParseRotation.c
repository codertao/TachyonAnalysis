
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse .des 'rotation' group into class+0x84 (0x9c bytes): per-axis yaw/pitch/roll {ACCEL,
   MAX_RATE, DAMPEN}; scaled MAX_YAW/PITCH/ROLL_RATE -> class+0x90/0xa0/0xb0 (read by
   Entity_TurnToward as param_3+0xc/1c/2c); accel*0052e6d0, rate*0052e544 */

void ShipDes_ParseRotation(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  FUN_0048e380(&DAT_00562d84,0x9c);
  if ((param_1 != (undefined4 *)0x0) && (iVar1 = FUN_0049bfc0(&PTR_DAT_00549b78), iVar1 != 0)) {
    local_8 = (undefined4)(longlong)ROUND(_DAT_00562dbc);
    iVar1 = FUN_00423e60(local_8);
    _DAT_00562dbc = (float)iVar1;
    _DAT_00562db8 = _DAT_00562dbc / (_DAT_00562db8 * _DAT_0052e548);
    DAT_00562d88 = DAT_00562d88 * _DAT_0052e6d0;
    _DAT_00562d98 = _DAT_00562d98 * _DAT_0052e6d0;
    _DAT_00562da8 = _DAT_00562da8 * _DAT_0052e6d0;
    local_8 = (undefined4)(longlong)ROUND(DAT_00562d88 * _DAT_0052e544);
    _DAT_00562d90 = local_8;
    local_8 = (undefined4)(longlong)ROUND(_DAT_00562d98 * _DAT_0052e544);
    _DAT_00562da0 = local_8;
    local_8 = (undefined4)(longlong)ROUND(_DAT_00562da8 * _DAT_0052e544);
    _DAT_00562db0 = local_8;
    DAT_00562d84 = DAT_00562d84 * _DAT_0052e6d0;
    _DAT_00562d94 = _DAT_00562d94 * _DAT_0052e6d0;
    _DAT_00562da4 = _DAT_00562da4 * _DAT_0052e6d0;
    puVar2 = &DAT_00562d84;
    for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

