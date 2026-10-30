
void FUN_00423cf0(int *param_1)

{
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_30 = DAT_005b95e8;
  local_2c = DAT_005b95ec;
  local_24 = 0;
  local_20 = 0x80000;
  local_1c = 0;
  local_28 = DAT_005b95f0;
  FUN_00423c20(param_1,DAT_005a752c,100,&local_30);
  local_30 = DAT_005b95e8;
  local_2c = DAT_005b95ec;
  local_28 = DAT_005b95f0;
  FUN_004b1bb0(local_18,&local_30);
  FUN_004b24d0(&local_24,&local_3c);
  local_3c = local_3c + *param_1;
  local_38 = local_38 + param_1[1];
  local_34 = local_34 + param_1[2];
  FUN_00423c20(&local_3c,DAT_005a7520,100,&local_30);
  local_30 = DAT_005b95e8;
  local_28 = DAT_005b95f0 + 0x1000000;
  local_2c = DAT_005b95ec;
  FUN_004b1bb0(local_18,&local_30);
  FUN_004b24d0(&local_24,&local_3c);
  local_3c = local_3c + *param_1;
  local_38 = local_38 + param_1[1];
  local_34 = local_34 + param_1[2];
  FUN_00423c20(&local_3c,DAT_005a7520,100,&local_30);
  FUN_00466590(1,0x20,0,0xff);
  return;
}

