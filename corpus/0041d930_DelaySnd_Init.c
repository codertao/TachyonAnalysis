
/* sweep: "delaysnd que" */

void DelaySnd_Init(int param_1,undefined4 param_2,undefined4 param_3)

{
  clr_bytes(&DAT_005b2700,0xc);
  if (param_1 != 0) {
    Mem_AllocZeroTagged(&DAT_005b2704,param_1 * 0x3c,4,s_delaysnd_que_00535120,param_2);
    DAT_005b2700 = param_1;
    DAT_005b2708 = param_3;
  }
  return;
}

