
/* sweep: "OVR QUADRANT SET TO %s" */

void Nav_SetOverrideQuadrant(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_40 [64];
  
  iVar1 = Sector_FindQuadrant(param_2);
  if (iVar1 == 0) {
    DAT_005a5e28 = s_UNKNOWN_QUADRANT_0053fc1c;
  }
  else {
    DAT_005a5e28 = (char *)Sector_GetQuadrantName(iVar1);
  }
  DAT_005a5e18 = param_2;
  DAT_005a5e14 = param_1;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_OVR_QUADRANT_SET_TO__s_0053fc30,DAT_005a5e28);
    SrvSend_TextSimple(local_40,0);
  }
  SrvSend_NavSecondary(g_SrvCurConn,param_3,param_1,param_2);
  return;
}

