
void FUN_0040c770(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24 [3];
  undefined1 local_18 [24];
  
  iVar2 = *(int *)(param_1 + 200);
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_30 = 0;
  local_2c = 0x2710000;
  local_28 = 0x9c40000;
  local_24[0] = FUN_0048e350();
  local_24[0] = local_24[0] & 0x1ffffff;
  FUN_004b1bb0(local_18,local_24);
  iVar1 = iVar2 + 0x34;
  FUN_0052dc22(&local_30,iVar1);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_0040f380(iVar1,&local_30,iVar2 + 0x4c);
  return;
}

