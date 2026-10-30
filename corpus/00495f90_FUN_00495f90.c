
void FUN_00495f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,int param_7)

{
  int iVar1;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = param_2;
  local_20 = param_5;
  local_28 = param_3;
  local_1c = param_6;
  local_14 = 0;
  local_24 = param_4;
  local_2c = param_1;
  local_10 = 0;
  local_8 = DAT_00565794;
  local_4 = 0;
  iVar1 = FUN_00495e20(&local_2c);
  if ((iVar1 != 0) && ((param_6 & 2) != 0)) {
    FUN_00466620(1,1,*(undefined4 *)(param_1 + 0x48),param_3,0x10000,param_7 * 2,0);
  }
  return;
}

