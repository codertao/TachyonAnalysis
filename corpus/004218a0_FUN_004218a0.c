
void FUN_004218a0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 == 0) {
    FUN_004216c0(param_1,param_2,param_3);
    return;
  }
  iVar1 = Coll_SegmentVsModel(param_1,(int *)(param_5 + 0x34),param_5 + 0x18,&local_18,0,
                              *(undefined4 *)(param_5 + 0xc4));
  if (iVar1 == 0) {
    local_18 = *param_1;
    local_14 = param_1[1];
    local_10 = param_1[2];
  }
  else {
    Model_LocalToWorld(param_5 + 0x18,&local_18);
  }
  local_c = local_18 - *(int *)(param_5 + 0x34);
  local_4 = local_10 - *(int *)(param_5 + 0x3c);
  local_8 = local_14 - *(int *)(param_5 + 0x38);
  FUN_004216c0(&local_18,param_2,param_3);
  FUN_00421780(DAT_00565638,&local_18,&local_c,0x18,0x18000);
  return;
}

