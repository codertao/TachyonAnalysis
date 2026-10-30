
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a370(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined1 local_20 [32];
  
  local_28 = (undefined4)(longlong)ROUND(param_4 * _DAT_0052e74c);
  *(undefined4 *)(param_1 + 0x24) = local_28;
  Cbin_GetParam(param_2,param_3,local_20,0x20,0,4,2);
  iVar1 = FUN_004c67c0(local_20,s_START_00549118);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    return;
  }
  iVar1 = FUN_004c67c0(local_20,&DAT_00549270);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

