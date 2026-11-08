
void FUN_00496cc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  iVar1 = WeaponDef_Get(param_4);
  FUN_0040f380(param_1 + 0x34,param_2 + 0x34,local_38);
  local_20 = local_38;
  local_28 = param_1;
  local_1c = 2;
  local_14 = 0;
  local_18 = param_3;
  local_10 = param_2;
  local_c = 0;
  local_2c = iVar1;
  local_24 = param_1 + 0x34;
  iVar2 = FUN_00496b60(&local_2c);
  if (iVar2 != 0) {
    FUN_00466620(1,1,*(undefined4 *)(iVar1 + 0x48),param_1,0x10000,0xff,0);
  }
  return;
}

