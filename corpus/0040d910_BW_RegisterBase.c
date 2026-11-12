
/* sweep: "BASEWAR BASE" */

void BW_RegisterBase(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1;
  param_1 = (undefined4 *)BW_FindBase(param_1);
  if (param_1 == (undefined4 *)0x0) {
    Mem_AllocZeroTagged(&param_1,0x30,4,s_BASEWAR_BASE_005336ac,0xbbbb);
    param_1[5] = param_2;
    *param_1 = uVar1;
    uVar1 = Rank_FromPoints(*DAT_005b97bc,param_1[3]);
    param_1[1] = uVar1;
    param_1[4] = DAT_005b97ac;
    DAT_005b97ac = param_1;
  }
  return;
}

