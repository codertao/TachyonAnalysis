
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459de0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x28) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,2);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x2c) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,3);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x30) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,4);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x1c) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,5);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
  *(undefined4 *)(param_1 + 0x20) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,6);
  param_4 = param_4 * _DAT_0052e540;
  fVar1 = (float)_DAT_0052e538;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
  local_8 = (undefined4)(longlong)ROUND(param_4 * fVar1);
  *(undefined4 *)(param_1 + 0x24) = local_8;
  return;
}

