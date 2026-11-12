
/* sweep */

undefined4 TachCli_AcceptSeq(uint *param_1)

{
  if (DAT_005b39cc < *param_1) {
    DAT_005b39cc = *param_1;
    return 1;
  }
  return 0;
}

