
/* a is in b's rear cone: rel yaw 115..245 deg and rel pitch within ~65 deg */

undefined4 Ai_IsBehind(int param_1,int param_2,int *param_3)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  local_30 = *(int *)(param_1 + 0x34) - *(int *)(param_2 + 0x34);
  local_2c = *(int *)(param_1 + 0x38) - *(int *)(param_2 + 0x38);
  local_28 = *(int *)(param_1 + 0x3c) - *(int *)(param_2 + 0x3c);
  FUN_004b1be0(local_18,param_2 + 0x4c);
  FUN_004b2410(&local_30,&local_30);
  local_30 = local_30 + *(int *)(param_2 + 0x34);
  local_2c = local_2c + *(int *)(param_2 + 0x38);
  local_28 = local_28 + *(int *)(param_2 + 0x3c);
  Vec_DirAngles((int *)(param_2 + 0x34),&local_30,&local_24);
  if (param_3 != (int *)0x0) {
    *param_3 = local_24;
    param_3[1] = local_20;
    param_3[2] = local_1c;
  }
  if (((0xa38e37 < local_24) && (local_24 < 0x15c71c9)) &&
     ((0x1a38e37 < local_20 || (local_20 < 0x5c71c9)))) {
    return 1;
  }
  return 0;
}

