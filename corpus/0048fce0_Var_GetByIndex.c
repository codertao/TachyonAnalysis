
/* indexed VarStore read: store section[sectionIdx] then value at key[keyIdx] (section+keyIdx*4+8);
   used by Spx_SelectSubSector */

undefined4 Var_GetByIndex(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  
  if (*(uint *)(param_1 + 4) <= param_2) {
    return 0;
  }
  puVar1 = (uint *)Var_SkipEntries(param_1,param_2);
  if (*puVar1 <= param_3) {
    return 0;
  }
  *param_4 = puVar1[param_3 + 2];
  return 1;
}

