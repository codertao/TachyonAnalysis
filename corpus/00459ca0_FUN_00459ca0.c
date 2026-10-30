
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459ca0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x10) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,2);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x14) = local_8;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,3);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
  *(undefined4 *)(param_1 + 0x18) = local_8;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
  return;
}

