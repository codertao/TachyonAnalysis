
/* set DESTINATION_REGION/DESTINATION_SECTOR vars + dest-quadrant display name
   (Sector_GetQuadrantName), log "DEST QUADRANT SET TO %s" */

void Nav_SetDestination(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 local_40 [64];
  
  iVar1 = FUN_004375f0(param_2);
  if (iVar1 == 0) {
    DAT_005a5e24 = s_UNKNOWN_QUADRANT_0053fc1c;
  }
  else {
    DAT_005a5e24 = (char *)Sector_GetQuadrantName(iVar1);
  }
  DAT_005a5e10 = param_2;
  DAT_005a5e0c = param_1;
  if (param_4 != 0) {
    *(char **)(param_4 + 0x154) = DAT_005a5e24;
    *(undefined4 *)(param_4 + 0x150) = param_2;
    *(undefined4 *)(param_4 + 0x14c) = param_1;
  }
  if ((g_FlightStateFlags & 4) != 0) {
    Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_REGION_0053fc08,param_1);
    Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_SECTOR_0053fbf4,param_2);
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_DEST_QUADRANT_SET_TO__s_0053fbdc,DAT_005a5e24);
      FUN_0045d9d0(local_40,0);
    }
  }
  SrvSend_NavPrimary(param_4,param_3,param_1,param_2);
  return;
}

