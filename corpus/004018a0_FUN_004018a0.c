
void FUN_004018a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(*(int *)(param_2 + 0x10) + 4);
  iVar3 = *(int *)(*(int *)(param_2 + 0x10) + 8);
  iVar4 = FUN_004017b0(param_1,param_2,iVar1);
  if (iVar4 != 0) {
    uVar6 = (*(int **)(param_2 + 0x10))[1];
    uVar5 = *(int *)(param_2 + 0x14) + 0x20;
    if (**(int **)(param_2 + 0x10) * 0x20 + uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    FUN_004016c0(param_1,param_2,uVar5);
  }
  local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
  uVar6 = iVar3 << 0x10 | (uint)(iVar1 - iVar2) >> 5;
  local_18 = 1;
  local_10 = 5;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_c = uVar6;
  FUN_0048ddc0(&local_18,*(undefined4 *)(param_1 + 100));
  local_14 = *(int *)(*(int *)(param_1 + 0xd8) + 0x54);
  if (local_14 != -1) {
    local_18 = 5;
    local_10 = 2;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_c = uVar6;
    FUN_0048ddc0(&local_18,*(undefined4 *)(param_1 + 100));
  }
  return;
}

