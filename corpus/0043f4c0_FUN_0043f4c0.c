
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f4c0(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_3 * _DAT_0052e548);
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x114) = local_8;
    *(undefined4 *)(iVar1 + 0x118) = local_8;
  }
  return;
}

