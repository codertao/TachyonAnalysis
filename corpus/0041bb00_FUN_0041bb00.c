
void FUN_0041bb00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vec3 local_24;
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 200);
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = 0;
  local_30 = 0;
  local_2c = 0x2710000;
  local_28 = 0x9c40000;
  local_24.x = global_bad_shift_rng();
  local_24.x = local_24.x & 0x1ffffff;
  FUN_004b1bb0(local_18,&local_24);
  iVar1 = iVar2 + 0x34;
  FUN_0052dc22(&local_30,iVar1);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_0040f380(iVar1,&local_30,iVar2 + 0x4c);
  FUN_0044ff20(param_1);
  return;
}

