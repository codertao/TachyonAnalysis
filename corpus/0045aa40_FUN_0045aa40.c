
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045aa40(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e540 * (float)_DAT_0052eb28);
  *(undefined4 *)(param_1 + 0x58) = local_8;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
  return;
}

