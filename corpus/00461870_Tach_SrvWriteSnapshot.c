
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* interest-managed: <=8 in radius +0x15c of client camera, target, 2 far, persistent-object page */

short * Tach_SrvWriteSnapshot(int param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  psVar2 = (short *)param_2;
  iVar1 = **(int **)(*(int *)(param_1 + 200) + 100);
  *(short *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 6) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)param_2 + 10) = *(undefined4 *)(param_1 + 0x114);
  uVar5 = *(undefined4 *)(param_1 + 0x118);
  *(short *)((int)param_2 + 2) = 0;
  *(undefined4 *)((int)param_2 + 0xe) = uVar5;
  psVar4 = (short *)((int)param_2 + 0x12);
  if (*(int *)(param_1 + 0x13c) == 1) {
    return psVar4;
  }
  if (*(int *)(param_1 + 0x1d4) != 0) {
    _DAT_0058b080 = _DAT_0058b080 + 1;
    if (*(int *)(param_1 + 0x138) == 0) {
      Tach_SrvBuildFarList(param_1);
    }
    DAT_0062c0e8 = 0;
    param_2 = &DAT_006240e8;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (((iVar1 != *(int *)(param_1 + 200)) && ((*(byte *)(iVar1 + 0xc3) & 1) == 0)) &&
         (uVar3 = distance_between((vec3 *)(param_1 + 0x110),(vec3 *)(iVar1 + 0x34)),
         uVar3 < *(uint *)(param_1 + 0x15c))) {
        param_2[1] = uVar3;
        *param_2 = iVar1;
        param_2 = param_2 + 2;
        DAT_0062c0e8 = DAT_0062c0e8 + 1;
      }
    }
    uVar3 = Tach_SrvNearCap(param_1);
    if (DAT_0062c0e8 < uVar3) {
      uVar3 = DAT_0062c0e8;
    }
    puVar6 = &DAT_006240e8;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      psVar4 = (short *)Tach_SrvWriteEntityRecord(*puVar6,param_1 + 0x110,psVar4,0);
      *psVar2 = *psVar2 + 1;
      puVar6 = puVar6 + 2;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 200) + 0x90);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc3) & 1) == 0)) &&
       (*(short *)(iVar1 + 0x7c) != DAT_0058b080)) {
      psVar4 = (short *)Tach_SrvWriteEntityRecord(iVar1,param_1 + 0x110,psVar4,0);
      *psVar2 = *psVar2 + 1;
    }
    uVar5 = Tach_SrvWriteFarRecords(param_1,psVar4,param_1 + 0x110,psVar2);
    psVar4 = (short *)Tach_SrvWritePersistentPage(param_1,param_1 + 0x110,uVar5,psVar2);
    return psVar4;
  }
  return psVar4;
}

