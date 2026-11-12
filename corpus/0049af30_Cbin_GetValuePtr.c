
/* sweep: guess */

undefined4 Cbin_GetValuePtr(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) == 0) {
    return 0;
  }
  Cbin_KeyCompare(param_1,*(int *)(param_3 + 0xc),param_2);
  return param_1;
}

