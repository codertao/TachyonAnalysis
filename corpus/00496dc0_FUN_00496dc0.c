
void FUN_00496dc0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = param_3;
  uVar2 = param_2;
  local_20 = param_5;
  iVar1 = *(int *)(param_3 + 0x90);
  local_14 = 0;
  local_10 = 0;
  local_28 = param_3;
  local_1c = param_6;
  local_18 = param_2;
  local_24 = param_4;
  local_2c = param_1;
  local_c = 1;
  iVar4 = FUN_00496b60(&local_2c);
  if (iVar4 != 0) {
    if ((param_6 & 2) != 0) {
      FUN_00466620(1,1,param_1[0x12],iVar4,0x10000,param_7 * 2,0);
      return;
    }
    FUN_00496d60(iVar3,&param_2,&param_3,&param_5);
    FUN_0045e3d0(param_2,*(undefined4 *)(iVar1 + 0x78),param_3,param_5,*param_1,uVar2,
                 *(undefined4 *)(iVar3 + 100));
  }
  return;
}

