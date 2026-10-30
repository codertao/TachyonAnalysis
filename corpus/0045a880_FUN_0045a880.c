
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a880(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x1c) == -1)) {
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
    *(undefined4 *)(param_1 + 0x30) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,2);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
    *(undefined4 *)(param_1 + 0x34) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,3);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
    *(undefined4 *)(param_1 + 0x38) = local_8;
  }
  else {
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e54c);
    *(undefined4 *)(param_1 + 0x3c) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,2);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
    *(undefined4 *)(param_1 + 0x40) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,3);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
    *(undefined4 *)(param_1 + 0x44) = local_8;
  }
  if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x18) == -1)) {
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,4);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
    *(undefined4 *)(param_1 + 0x24) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,5);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
    *(undefined4 *)(param_1 + 0x28) = local_8;
    Cbin_GetParam(param_2,param_3,0,0,&param_4,2,6);
    local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052e538);
    *(undefined4 *)(param_1 + 0x2c) = local_8;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  return;
}

