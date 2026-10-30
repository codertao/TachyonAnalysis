
void FUN_0040f0b0(int param_1)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_24 = DAT_005b95e8;
  local_20 = DAT_005b95ec;
  local_1c = DAT_005b95f0;
  FUN_004b1bb0(local_18,(undefined4 *)(param_1 + 0x4c));
  local_30 = *(int *)(DAT_005b1f0c + 0x530);
  local_2c = *(int *)(DAT_005b1f0c + 0x534);
  local_28 = *(int *)(DAT_005b1f0c + 0x538);
  FUN_004b24d0(&local_30,&local_30);
  DAT_005b9600 = *(int *)(param_1 + 0x34) + local_30;
  DAT_005b9604 = *(int *)(param_1 + 0x38) + local_2c;
  DAT_005b9608 = *(int *)(param_1 + 0x3c) + local_28;
  DAT_005b95e8 = *(undefined4 *)(param_1 + 0x4c);
  DAT_005b95ec = *(undefined4 *)(param_1 + 0x50);
  DAT_005b95f0 = *(undefined4 *)(param_1 + 0x54);
  switch(*(undefined4 *)(DAT_005b95e0 + 0x2c)) {
  case 7:
    local_3c = 0xff800000;
    break;
  case 8:
    local_3c = 0x800000;
    break;
  case 9:
    local_3c = 0;
    local_38 = 0x800000;
    goto LAB_0040f1af;
  case 10:
    local_3c = 0x1000000;
    break;
  default:
    local_3c = 0;
  }
  local_38 = 0;
LAB_0040f1af:
  local_34 = 0;
  Vec_RotateByOrientation(&local_3c,&DAT_005b95e8);
  FUN_0040ec20();
  if (g_CutsceneActive == 0) {
    FUN_0040eef0(&local_3c,&local_24,&DAT_005b95e8);
    FUN_0040f070(&local_3c);
    FUN_0040edd0(param_1 + 0xa0,&DAT_005b95e8);
  }
  return;
}

