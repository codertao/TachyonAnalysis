
/* sweep */

void Ship_WarnLoopMissing(int param_1,undefined4 param_2)

{
  undefined1 local_80 [128];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_80,s__s___loop__s_not_found_0054a2b0,param_1 + 4,param_2);
    DebugLog_Write(local_80);
  }
  return;
}

