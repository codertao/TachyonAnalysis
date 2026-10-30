
void FUN_00498810(int param_1,int *param_2,int *param_3,int param_4)

{
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  if ((*param_2 <= **(int **)(*(int *)(param_1 + 100) + 0x1c)) && (0 < param_2[1])) {
    FUN_004b1bb0(local_18,param_1 + 0x4c);
    local_24 = *param_3;
    local_20 = param_3[1];
    local_1c = param_3[2];
    FUN_004b24d0(&local_24,&local_24);
    local_20 = local_20 + *(int *)(param_1 + 0x38);
    local_24 = local_24 + *(int *)(param_1 + 0x34);
    local_1c = local_1c + *(int *)(param_1 + 0x3c);
    FUN_00498710(&local_24,param_4,*(undefined4 *)(param_1 + 100));
    *param_2 = **(int **)(*(int *)(param_1 + 100) + 0x1c) + 10;
    param_2[1] = param_2[1] + -1;
    if (param_4 == 1) {
      FUN_004159a0(&local_24);
      return;
    }
    FUN_0045dbc0(&local_24,0,*(undefined4 *)(param_1 + 100));
  }
  return;
}

