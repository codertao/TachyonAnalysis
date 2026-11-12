
/* sweep */

void Trig_LogSpawnGroup(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 local_80 [128];
  
  puVar1 = (undefined4 *)Rtxt_GetGroupItemByName(DAT_005a6144,s_FLIGHT_GROUPS_0053fa08,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    str_sprintf(local_80,s_SPAWNING_GROUP__s_0053fb00,*puVar1);
    SrvSend_TextSimple(local_80,0);
  }
  return;
}

