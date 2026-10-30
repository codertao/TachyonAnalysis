
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004b6580(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 local_108 [130];
  
  local_108[0] = DAT_0055eff8;
  if (param_1[1] == 0) {
    str_sprintf();
  }
  if (param_1[1] == 2) {
    iVar1 = *param_1 >> 2;
    str_sprintf(local_108,s___3_1f__3_1f__3_1f__0055efe0,
                (double)((float)*(int *)(param_2 + iVar1 * 4) * _DAT_0052e5d8),
                (double)((float)*(int *)(param_2 + 4 + iVar1 * 4) * _DAT_0052e5d8),
                (double)((float)*(int *)(param_2 + 8 + iVar1 * 4) * _DAT_0052e5d8));
  }
  if (param_1[1] == 3) {
    iVar1 = *param_1 >> 2;
    str_sprintf(local_108,s___3_1f__3_1f__3_1f__0055efe0,
                (double)((float)*(int *)(param_2 + iVar1 * 4) * _DAT_0052e5d8),
                (double)((float)*(int *)(param_2 + 4 + iVar1 * 4) * _DAT_0052e5d8),
                (double)((float)*(int *)(param_2 + 8 + iVar1 * 4) * _DAT_0052e5d8));
  }
  if (param_1[1] == 4) {
    str_sprintf();
  }
  if (param_3 != 0) {
    str_sprintf();
    (&DAT_00564c14)[param_3] = 0;
    return &DAT_00564c14;
  }
  str_sprintf(&DAT_00564c14,s__s____s_00534e98,param_1 + 4,local_108);
  return &DAT_00564c14;
}

