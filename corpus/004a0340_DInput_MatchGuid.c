
/* sweep: guess */

int DInput_MatchGuid(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (param_1 == (byte *)0x0) {
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    return -1;
  }
  if (*param_1 == *param_2) {
    do {
      if (param_3 < 1) break;
      pbVar1 = param_1 + 1;
      pbVar2 = param_2 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (*pbVar1 == *pbVar2);
  }
  if (param_3 != 0) {
    return (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
  }
  return 0;
}

