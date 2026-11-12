
/* sweep */

int Coll_SphereCast(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  DAT_005b2d80 = param_5;
  DAT_005b2d84 = param_6;
  DAT_005b2d88 = param_7;
  DAT_005b3190 = param_8;
  if ((*(int *)(param_4 + 0x10) != 0) &&
     (iVar1 = Coll_SphereSweepList(*(int *)(param_4 + 0x10),param_2,param_1,param_3), iVar1 != 0)) {
    return iVar1;
  }
  if ((*(int *)(param_4 + 0xc) != 0) &&
     (iVar1 = Coll_SphereSweepList(*(int *)(param_4 + 0xc),param_2,param_1,param_3), iVar1 != 0)) {
    return iVar1;
  }
  Coll_GatherDynamicCb(param_1,param_2,param_4);
  uVar3 = 0;
  puVar2 = &DAT_005b2d8c;
  if (DAT_005b318c != 0) {
    do {
      if ((*(int *)*puVar2 != 0) &&
         (iVar1 = Coll_SphereSweepList(*(int *)*puVar2,param_2,param_1,param_3), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < DAT_005b318c);
  }
  Coll_GatherStaticCb(param_1,param_2,param_4);
  uVar3 = 0;
  puVar2 = &DAT_005b2d8c;
  if (DAT_005b318c != 0) {
    do {
      if ((*(int *)*puVar2 != 0) &&
         (iVar1 = Coll_SphereSweepList(*(int *)*puVar2,param_2,param_1,param_3), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < DAT_005b318c);
  }
  return 0;
}

