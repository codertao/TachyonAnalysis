
/* sweep */

void Group_FormatName(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)Quad_GetGroupName(param_2,param_1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_GROUP_0053fb4c;
  }
  FlightGroup_FormatWithPrefix(param_1,pcVar1,param_3);
  return;
}

