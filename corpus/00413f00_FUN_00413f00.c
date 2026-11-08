
void FUN_00413f00(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00436560(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),*(undefined4 *)(param_1 + 0xd8),
               param_1 + 0xdc,*(undefined4 *)(param_1 + 100));
  SrvSend_EntityDestroyed(param_1 + 0x34,1,0,0,0,DAT_00565408,0,*(undefined4 *)(param_1 + 100));
  local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
  local_18 = 1;
  local_10 = 2;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
  FUN_00413ea0(param_1);
  return;
}

