
void FUN_004193a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  DAT_005b2d80 = param_3;
  DAT_005b2d88 = 0x10000;
  if (*(int *)(param_3 + 0x1c) == 0) {
    param_1 = *(int **)(*(int *)(param_3 + 0x58) + 0x30);
  }
  else {
    lVar1 = (longlong)*(int *)(*(int *)(param_3 + 0x58) + 0x30) * (longlong)*(int *)(param_3 + 0x1c)
    ;
    param_1 = (int *)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  local_10 = *piVar2;
  local_c = piVar2[1];
  local_8 = piVar2[2];
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_8 = local_8 + -0x1000000;
  local_10 = local_10 + -0x1000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_10 = local_10 + 0x1000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_10 = local_10 + 0x1000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_8 = local_8 + 0x1000000;
  local_10 = local_10 + -0x2000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_10 = local_10 + 0x2000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_8 = local_8 + 0x1000000;
  local_10 = local_10 + -0x3000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_10 = local_10 + 0x1000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  local_10 = local_10 + 0x1000000;
  piVar3 = (int *)FUN_0045cb40(&local_10,param_2);
  if ((*piVar3 != 0) && (iVar4 = FUN_00419340(*piVar3,piVar2,param_1,param_4), iVar4 != 0)) {
    return;
  }
  FUN_00418c70(piVar2,piVar2,param_2);
  uVar5 = 0;
  puVar6 = &DAT_005b2d8c;
  if (DAT_005b318c != 0) {
    do {
      if ((*(int *)*puVar6 != 0) &&
         (iVar4 = FUN_00419340(*(int *)*puVar6,piVar2,param_1,param_4), iVar4 != 0)) {
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < DAT_005b318c);
  }
  return;
}

