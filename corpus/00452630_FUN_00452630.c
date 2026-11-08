
void FUN_00452630(int param_1,int param_2)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_2 + 0xd8) != 0) &&
     (local_14 = *(int *)(*(int *)(param_2 + 0xd8) + 0x54), local_14 != -1)) {
    local_18 = 5;
    local_10 = 5;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_c = 0;
    Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  }
  return;
}

