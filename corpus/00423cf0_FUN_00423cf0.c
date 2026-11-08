
void FUN_00423cf0(int *param_1)

{
  vec3 local_3c;
  vec3 local_30;
  vec3 local_24;
  undefined1 local_18 [24];
  
  local_30.x = DAT_005b95e8;
  local_30.y = DAT_005b95ec;
  local_24.x = 0;
  local_24.y = 0x80000;
  local_24.z = 0;
  local_30.z = DAT_005b95f0;
  FUN_00423c20(param_1,DAT_005a752c,100,&local_30);
  local_30.x = DAT_005b95e8;
  local_30.y = DAT_005b95ec;
  local_30.z = DAT_005b95f0;
  FUN_004b1bb0(local_18,&local_30);
  some_rotate_by_global(&local_24,&local_3c);
  local_3c.x = local_3c.x + *param_1;
  local_3c.y = local_3c.y + param_1[1];
  local_3c.z = local_3c.z + param_1[2];
  FUN_00423c20(&local_3c,DAT_005a7520,100,&local_30);
  local_30.x = DAT_005b95e8;
  local_30.z = DAT_005b95f0 + 0x1000000;
  local_30.y = DAT_005b95ec;
  FUN_004b1bb0(local_18,&local_30);
  some_rotate_by_global(&local_24,&local_3c);
  local_3c.x = local_3c.x + *param_1;
  local_3c.y = local_3c.y + param_1[1];
  local_3c.z = local_3c.z + param_1[2];
  FUN_00423c20(&local_3c,DAT_005a7520,100,&local_30);
  FUN_00466590(1,0x20,0,0xff);
  return;
}

