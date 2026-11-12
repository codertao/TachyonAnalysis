
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: keyword parser */

void SceneKw_Param18(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e760);
  *(undefined4 *)(param_1 + 0x18) = local_8;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  return;
}

