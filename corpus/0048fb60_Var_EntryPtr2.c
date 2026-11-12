
/* sweep: guess */

undefined4 Var_EntryPtr2(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    return 0;
  }
  puVar1 = (uint *)Var_SkipEntries(param_1,param_2);
  if (*puVar1 <= param_3) {
    return 0;
  }
  puVar1[param_3 + 2] = puVar1[param_3 + 2] + param_4;
  return 1;
}

