
void FUN_00403cc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  iVar2 = FUN_004344a0(param_1);
  if (iVar2 != 0) {
    Mission_PostEnemyStatus(*(undefined4 *)(iVar1 + 100));
  }
  iVar2 = param_2;
  local_14 = *(undefined4 *)(param_2 + 0x20);
  local_18 = 1;
  local_10 = 2;
  local_c = 0;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  Mission_PostEvent(&local_18,*(undefined4 *)(iVar1 + 100));
  FUN_004518d0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar1 + 100));
  if (*(int *)(iVar2 + 0x54) != -1) {
    FUN_00457ce0(*(undefined4 *)(iVar1 + 100),*(int *)(iVar2 + 0x54));
    FUN_00457d30(*(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar2 + 0x54),&param_1,&local_1c);
    if (param_1 == 0) {
      local_14 = *(undefined4 *)(iVar2 + 0x54);
      local_10 = param_1;
      local_c = param_1;
      local_18 = 5;
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      Mission_PostEvent(&local_18,*(undefined4 *)(iVar1 + 100));
      FUN_00451950(*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar1 + 100));
    }
    else {
      local_c = FUN_0048ec60(param_1,local_1c);
      local_14 = *(undefined4 *)(iVar2 + 0x54);
      local_c = 100 - local_c;
      local_18 = 5;
      local_10 = 1;
      local_8 = 0xffffffff;
      local_4 = 0xffffffff;
      Mission_PostEvent(&local_18,*(undefined4 *)(iVar1 + 100));
    }
  }
  uVar3 = FUN_00434830(iVar1,iVar2,*(undefined4 *)(iVar2 + 0x5c),1);
  FUN_004346d0(uVar3);
  return;
}

