
void FUN_004100c0(int param_1)

{
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_30 = *(undefined4 *)(param_1 + 0x4c);
  local_2c = *(undefined4 *)(param_1 + 0x50);
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_3c = 0;
  local_38 = 0x32000;
  local_34 = 0xfa0000;
  local_24 = 0xe38e3;
  local_20 = 0;
  local_1c = 0;
  Vec_RotateByOrientation(&local_24,&local_30);
  FUN_004b1bb0(local_18,&local_30);
  FUN_004b24d0(&local_3c,&local_3c);
  DAT_005b9604 = local_38 + *(int *)(param_1 + 0x38);
  DAT_005b9600 = local_3c + *(int *)(param_1 + 0x34);
  DAT_005b9608 = local_34 + *(int *)(param_1 + 0x3c);
  local_3c = DAT_005b9600;
  local_38 = DAT_005b9604;
  local_34 = DAT_005b9608;
  FUN_0040f3f0((undefined4 *)(param_1 + 0x4c),&DAT_005b95e8);
  FUN_004107c0(0x3c,0);
  return;
}

