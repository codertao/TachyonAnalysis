
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void SceneKw_JoyFF18(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e74c);
  *(undefined4 *)(param_1 + 0x18) = local_8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  Cbin_GetParam(param_2,param_3,0,0,&param_4,2,2);
  local_8 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052eb24);
  *(undefined4 *)(param_1 + 0x1c) = local_8;
  return;
}

