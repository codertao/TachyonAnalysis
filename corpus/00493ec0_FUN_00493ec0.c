
void FUN_00493ec0(int param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((((*(uint *)(param_1 + 0xd0) ^ DAT_005897e4) & 0xf) == 0) && (0xf < *(int *)(param_1 + 0x2c)))
  {
    local_8 = *(int *)(*(int *)(param_1 + 0x58) + 0x30);
    lVar1 = (longlong)local_8 * (longlong)*(int *)(param_1 + 0x1c);
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    FUN_00493ce0(*(undefined4 *)(*(int *)(param_1 + 100) + 8),param_1,uVar2);
    FUN_00493de0(*(undefined4 *)(*(int *)(param_1 + 100) + 4),param_1,uVar2);
    local_14 = *(int *)(param_1 + 0x34);
    local_10 = *(undefined4 *)(param_1 + 0x38);
    local_c = *(int *)(param_1 + 0x3c);
    iVar4 = *(int *)(param_1 + 100) + 0x14;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_c = local_c + -0x1000000;
    local_14 = local_14 + -0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + 0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + 0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_c = local_c + 0x1000000;
    local_14 = local_14 + -0x2000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + 0x2000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + -0x3000000;
    local_c = local_c + 0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + 0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
    local_14 = local_14 + 0x1000000;
    puVar3 = (undefined4 *)FUN_0045cb40(&local_14,iVar4);
    FUN_00493de0(*puVar3,param_1,uVar2);
  }
  return;
}

