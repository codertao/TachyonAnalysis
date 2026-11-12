
/* sweep: "NO GROUP" */

char * FlightGroup_Name(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Rtxt_GetText(DAT_005a6144,param_1 + DAT_005a5e2c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_NO_GROUP_0053fa90;
  }
  return pcVar1;
}

