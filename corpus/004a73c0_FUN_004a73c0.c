
int * FUN_004a73c0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_8;
  undefined1 local_4;
  
  local_4 = 0;
  if ((*param_1 == DAT_0055e494) && (param_1[2] == DAT_0055e48c)) {
    iVar1 = param_1[4];
    param_1 = param_1 + 3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      local_8 = *param_2;
      if ((*param_1 == local_8) || (piVar2 = (int *)FUN_004c83ea(&local_8), *param_1 == *piVar2)) {
        return param_1;
      }
      param_1 = (int *)((int)param_1 + iVar1 + 8);
      iVar1 = param_1[1];
    }
  }
  return (int *)0x0;
}

